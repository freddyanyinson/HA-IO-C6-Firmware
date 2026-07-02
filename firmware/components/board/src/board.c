#include "board.h"
#include "board_gpio.h"
#include "esp_check.h"

esp_err_t board_init(void)
{
    ESP_ERROR_CHECK(board_gpio_init());

    ESP_ERROR_CHECK(board_led_init());

    ESP_ERROR_CHECK(board_button_init());

    return ESP_OK;
}