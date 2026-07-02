#include "core.h"

#include "board.h"
#include "diagnostics.h"

#include "esp_check.h"
#include "esp_log.h"

static const char *TAG = "CORE";

esp_err_t core_init(void)
{
    ESP_LOGI(TAG, "Initializing core subsystems");
    ESP_ERROR_CHECK(board_init());

    ESP_ERROR_CHECK(diagnostics_init());

    return ESP_OK;
}