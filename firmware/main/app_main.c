#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "core.h"

void app_main(void)
{
    core_init();

    while (1)
    {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}