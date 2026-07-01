#ifndef DIAGNOSTICS_H
#define DIAGNOSTICS_H

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t diagnostics_init(void);

void diagnostics_print_banner(void);

void diagnostics_print_chip_info(void);

void diagnostics_print_memory_info(void);

void diagnostics_print_flash_info(void);

void diagnostics_print_reset_reason(void);

#ifdef __cplusplus
}
#endif

#endif