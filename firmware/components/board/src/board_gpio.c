#include "board_gpio.h"
#include "board_pins.h"
#include "esp_check.h"
#include "driver/gpio.h"

static bool led_state = false;

esp_err_t board_gpio_init(void)
{
    gpio_config_t cfg = {
        .pin_bit_mask = (1ULL << BOARD_LED_GPIO),
        .mode = GPIO_MODE_OUTPUT,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };

    ESP_ERROR_CHECK(gpio_config(&cfg));

    gpio_set_level(BOARD_LED_GPIO, 0);

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
