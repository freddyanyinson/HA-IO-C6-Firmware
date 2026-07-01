#include "board.h"

esp_err_t board_led_set(bool state)
{
    (void)state;
    return ESP_OK;
}

bool board_button_read(void)
{
    return false;
}