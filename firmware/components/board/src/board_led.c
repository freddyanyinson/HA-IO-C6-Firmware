#include "board_led.h"
#include "board_pins.h"

#include "driver/gpio.h"
#include "esp_check.h"

static bool led_state = false;

esp_err_t board_led_init(void)
{
    gpio_set_level(BOARD_LED_GPIO, 0);
    led_state = false;
    return ESP_OK;
}

esp_err_t board_led_on(void)
{
    led_state = true;
    gpio_set_level(BOARD_LED_GPIO, 1);
    return ESP_OK;
}

esp_err_t board_led_off(void)
{
    led_state = false;
    gpio_set_level(BOARD_LED_GPIO, 0);
    return ESP_OK;
}

esp_err_t board_led_toggle(void)
{
    led_state = !led_state;
    gpio_set_level(BOARD_LED_GPIO, led_state);
    return ESP_OK;
}

bool board_led_state(void)
{
    return led_state;
}