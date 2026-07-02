#ifndef BOARD_LED_H
#define BOARD_LED_H

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t board_led_init(void);

esp_err_t board_led_on(void);

esp_err_t board_led_off(void);

esp_err_t board_led_toggle(void);

bool board_led_state(void);

#ifdef __cplusplus
}
#endif

#endif