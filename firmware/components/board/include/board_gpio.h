#ifndef BOARD_GPIO_H
#define BOARD_GPIO_H

#include <stdbool.h>
#include "esp_err.h"


esp_err_t board_gpio_init(void);

esp_err_t board_led_on(void);
esp_err_t board_led_off(void);
esp_err_t board_led_toggle(void);

#endif