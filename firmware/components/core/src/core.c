#include "core.h"

#include "board.h"
#include "fw_info.h"

#include "esp_check.h"
#include "esp_log.h"

static const char *TAG = "CORE";

esp_err_t core_init(void)
{
    ESP_LOGI(TAG, "=================================");
    ESP_LOGI(TAG, "%s", FW_NAME);
    ESP_LOGI(TAG, "Version : %s", FW_VERSION_STRING);

    ESP_ERROR_CHECK(board_init());

    ESP_LOGI(TAG, "=================================");

    return ESP_OK;
}