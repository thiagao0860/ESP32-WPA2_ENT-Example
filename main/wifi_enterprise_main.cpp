/*
#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "esp_system.h"
*/

#include <string.h>
#include <stdlib.h>
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"


#include "wifi_lib.cpp"

extern "C" void app_main(void)
{
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_netif_init());
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    ESP_ERROR_CHECK( initialise_wifi() );
    
    while (1)
    {
       ESP_LOGI("I","Connecting to AP...");
       vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    
}
    