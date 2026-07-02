#ifndef BOARD_BUTTON_H
#define BOARD_BUTTON_H

#include <stdbool.h>
#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t board_button_init(void);

bool board_button_read(void);

#ifdef __cplusplus
}
#endif

#endif