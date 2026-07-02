#ifndef LIGHT_DRIVER_H
#define LIGHT_DRIVER_H

#include <stdbool.h>

void light_driver_init(bool power);
void light_driver_set_power(bool power);
bool light_driver_get_power(void);
bool light_driver_toggle(void);

#endif // LIGHT_DRIVER_H
