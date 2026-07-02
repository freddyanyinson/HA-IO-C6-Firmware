#include "driver/gpio.h"
#include "esp_log.h"
#include "light_driver.h"

static const gpio_num_t s_light_gpio = CONFIG_EXAMPLE_LIGHT_GPIO;
static bool s_light_power = false;

void light_driver_set_power(bool power)
{
    s_light_power = power;
    gpio_set_level(s_light_gpio, power ? 1 : 0);
    ESP_LOGI("LIGHT_DRIVER", "Light %s", power ? "ON" : "OFF");
}

bool light_driver_get_power(void)
{
    return s_light_power;
}

bool light_driver_toggle(void)
{
    light_driver_set_power(!s_light_power);
    return s_light_power;
}

void light_driver_init(bool power)
{
    gpio_reset_pin(s_light_gpio);
    gpio_config_t io_conf = {
        .pin_bit_mask = 1ULL << s_light_gpio,
        .mode = GPIO_MODE_OUTPUT,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .intr_type = GPIO_INTR_DISABLE,
    };
    ESP_ERROR_CHECK(gpio_config(&io_conf));
    light_driver_set_power(power);
}
