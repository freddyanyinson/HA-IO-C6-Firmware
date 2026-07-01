#ifndef BOARD_H
#define BOARD_H

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t board_init(void);

esp_err_t board_led_set(bool state);

bool board_button_read(void);

const char *board_name(void);

#ifdef __cplusplus
}
#endif

#endif