#include "board_button.h"
#include "board_pins.h"

#include "driver/gpio.h"

esp_err_t board_button_init(void)
{
    gpio_config_t button_cfg = {
        .pin_bit_mask = (1ULL << BOARD_BUTTON_GPIO),
        .mode = GPIO_MODE_INPUT,
        .pull_up_en = GPIO_PULLUP_ENABLE,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .intr_type = GPIO_INTR_DISABLE,
    };

    return gpio_config(&button_cfg);
}

bool board_button_read(void)
{
    return gpio_get_level(BOARD_BUTTON_GPIO) == 0;
}
