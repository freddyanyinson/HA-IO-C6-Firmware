idf_component_register(
    SRCS
        "src/board.c"
        "src/board_gpio.c"
        "src/board_led.c"
        "src/board_button.c"

    INCLUDE_DIRS
        "include"

    REQUIRES
        esp_driver_gpio
        esp_system
        esp_hw_support
        spi_flash
        log
)