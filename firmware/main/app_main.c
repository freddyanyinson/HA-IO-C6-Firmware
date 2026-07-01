#include "core.h"

#include "esp_check.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    ESP_ERROR_CHECK(core_init());

    while (1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}