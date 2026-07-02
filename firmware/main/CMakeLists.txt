idf_component_register(
    SRCS "app_main.c" "light_driver.c"
    INCLUDE_DIRS "."
    PRIV_REQUIRES
        nvs_flash
        esp_driver_gpio
        ieee802154
        diagnostics
)
