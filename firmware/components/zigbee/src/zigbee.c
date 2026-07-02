#include "zigbee.h"

#include "esp_err.h"
#include "esp_ieee802154.h"
#include "esp_log.h"

static const char *TAG = "ZIGBEE";

esp_err_t zigbee_init(void)
{
    ESP_LOGI(TAG, "Initializing IEEE 802.15.4 stack");

    esp_err_t err = esp_ieee802154_enable();
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to enable IEEE 802.15.4: %s", esp_err_to_name(err));
        return err;
    }

    err = esp_ieee802154_set_channel(15);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to set channel: %s", esp_err_to_name(err));
        return err;
    }

    err = esp_ieee802154_set_txpower(0);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to set TX power: %s", esp_err_to_name(err));
        return err;
    }

    err = esp_ieee802154_set_promiscuous(false);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to set promiscuous mode: %s", esp_err_to_name(err));
        return err;
    }

    ESP_LOGI(TAG, "IEEE 802.15.4 initialized on channel 15");
    return ESP_OK;
}
