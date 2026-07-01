#ifndef BOARD_H
#define BOARD_H

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t board_init(void);

const char *board_name(void);

#ifdef __cplusplus
}
#endif

#endif