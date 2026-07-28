// FAKE DATA TEST using fake data for all the sensors but the DS18B20 because I have it with me

#include "wifi.h"
#include "https_client.h"
#include "power_management.h"
#include "power_sensor.h"
#include "ds18b20_sensor.h"
#include "rain_gauge.h"
#include "wind.h"
#include "fake_data.h"

#include "esp_log.h"
#include "esp_sleep.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "MAIN_TEST";

fake_weather_data_t fake_data = {0};

static void sleep_for(uint32_t minutes){
    ESP_LOGI(TAG, "Going to sleep for %u minutes...", minutes);
    // Stopping WiFi:
    wifi_stop();

    // Deep sleep mode:
    uint64_t sleep_us = (uint64_t)minutes * 60ULL * 1000000ULL;
    esp_sleep_enable_timer_wakeup(sleep_us);
    esp_deep_sleep_start();
}


void app_main(void)
{
    ESP_LOGI(TAG, "Waking up from Deep Sleep...");

    // 1. Create the MASTER ADC Handle
    adc_oneshot_unit_handle_t adc_handle = NULL;
    adc_oneshot_unit_init_cfg_t init_config = {
        .unit_id = ADC_UNIT_1, // ADC1 works with Wi-Fi
    };
    ESP_ERROR_CHECK(adc_oneshot_new_unit(&init_config, &adc_handle));

    // 2. Initialize modules (Wi-Fi is still OFF here)
    sensor_control_init();
    fake_data_init();
    power_management_init(adc_handle);

    // 3. Power ON Sensors & Read
    sensor_power_on(); 
    
    // Init and Read DS18B20
    ds18b20_init(); 
    float external_temp = ds18b20_get_temp();
    fflush(stdout);

    // Read Battery and Solar charge
    power_management_t pwr = power_get_reading();
    fflush(stdout);

    // 4. Power OFF Sensors immediately to stop their current draw
    sensor_power_off();
    fflush(stdout);

    // 5. Get Fake Data
    fake_data_update(&fake_data);
    fflush(stdout);

    // 6. Turn on Wi-Fi (Minimizing the time the radio is on)
    if (wifi_init_sta() == ESP_OK) {
        
        // Sync time for timestamp
        connectivity_time_sync(); 
        
        wifi_ap_info_t wifi_stats = get_wifi_ap_info();

        // 7. Prepare & Send Payload
        sensor_payload_t payload = {
            .ds18b20_temp = external_temp,
            .batt_voltage = pwr.battery_voltage,
            .batt_voltage_calibrated = pwr.battery_voltage_calibrated,
            .solar_voltage = pwr.solar_voltage,
            .charging_state = pwr.charging_state,
            .rain = fake_data.rainfall,
            .wind_speed = fake_data.wind_speed,
            .wind_gust = fake_data.wind_speed, // Did not implement the fake wind gust sensor output
            .wind_direction = fake_data.wind_direction,
            .wifi_ssid = wifi_stats.ssid,
            .wifi_rssi = wifi_stats.rssi
        };
        
        send_sensor_data(&payload);

    } else {
        ESP_LOGE(TAG, "Failed to connect to Wi-Fi. Skipping data transmission.");
    }

    // 8. Go back to deep sleep
    sleep_for(15);
}
