#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t board_init(void);

/* LED */
esp_err_t board_led_init(void);
esp_err_t board_led_on(void);
esp_err_t board_led_off(void);
esp_err_t board_led_toggle(void);

/* BUTTON */
esp_err_t board_button_init(void);
bool board_button_read(void);

#ifdef __cplusplus
}
#endif

#endif