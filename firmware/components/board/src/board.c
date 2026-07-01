#include "board.h"

#include "esp_log.h"

static const char *TAG = "BOARD";

esp_err_t board_init(void)
{
    ESP_LOGI(TAG, "Initializing board...");

    return ESP_OK;
}

const char *board_name(void)
{
    return "Seeed Studio XIAO ESP32-C6";
}