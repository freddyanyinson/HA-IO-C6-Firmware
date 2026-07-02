#include "board_button.h"
#include "board_pins.h"

#include "driver/gpio.h"

esp_err_t board_button_init(void)
{
    return ESP_OK;
}

bool board_button_read(void)
{
    return gpio_get_level(BOARD_BUTTON_GPIO);
}