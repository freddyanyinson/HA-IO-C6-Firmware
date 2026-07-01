#include "board.h"

#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"

static const char *TAG = "BOARD";

esp_err_t board_init(void)
{
    esp_chip_info_t chip;

    esp_chip_info(&chip);

    ESP_LOGI(TAG, "Board : Seeed Studio XIAO ESP32-C6");
    ESP_LOGI(TAG, "Cores : %d", chip.cores);
    ESP_LOGI(TAG, "Revision : %d", chip.revision);

    uint32_t flash_size = 0;

    esp_flash_get_size(NULL, &flash_size);

    ESP_LOGI(TAG, "Flash : %lu MB",
             (unsigned long)(flash_size / (1024 * 1024)));

    return ESP_OK;
}

const char *board_name(void)
{
    return "Seeed Studio XIAO ESP32-C6";
}