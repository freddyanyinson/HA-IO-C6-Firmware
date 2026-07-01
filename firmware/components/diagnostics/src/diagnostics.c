#include "diagnostics.h"

#include "fw_info.h"

#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_log.h"
#include "esp_system.h"
#include "esp_heap_caps.h"

static const char *TAG = "DIAG";

esp_err_t diagnostics_init(void)
{
    diagnostics_print_banner();

    diagnostics_print_chip_info();

    diagnostics_print_memory_info();

    diagnostics_print_flash_info();

    diagnostics_print_reset_reason();

    return ESP_OK;
}

void diagnostics_print_banner(void)
{
    ESP_LOGI(TAG, "==========================================");
    ESP_LOGI(TAG, "%s", FW_NAME);
    ESP_LOGI(TAG, "Version : %s", FW_VERSION_STRING);
    ESP_LOGI(TAG, "Board   : %s", FW_BOARD);
    ESP_LOGI(TAG, "==========================================");
}

void diagnostics_print_chip_info(void)
{
    esp_chip_info_t chip_info;

    esp_chip_info(&chip_info);

    ESP_LOGI(TAG, "Chip      : ESP32-C6");
    ESP_LOGI(TAG, "Revision  : %d", chip_info.revision);
    ESP_LOGI(TAG, "Cores     : %d", chip_info.cores);
}

void diagnostics_print_memory_info(void)
{
    ESP_LOGI(TAG,
             "Heap Free : %lu bytes",
             (unsigned long)heap_caps_get_free_size(MALLOC_CAP_DEFAULT));
}


void diagnostics_print_flash_info(void)
{
    uint32_t flash_size = 0;

    if (esp_flash_get_size(NULL, &flash_size) == ESP_OK)
    {
        ESP_LOGI(TAG,
                 "Flash     : %lu MB",
                 (unsigned long)(flash_size / (1024 * 1024)));
    }
}

void diagnostics_print_reset_reason(void)
{
    esp_reset_reason_t reason = esp_reset_reason();

    ESP_LOGI(TAG, "Reset     : %d", reason);
}