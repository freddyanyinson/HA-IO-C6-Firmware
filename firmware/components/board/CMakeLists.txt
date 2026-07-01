idf_component_register(
    SRCS
        "src/board.c"
        "src/board_gpio.c"

    INCLUDE_DIRS
        "include"

    REQUIRES
        driver
        esp_system
        esp_hw_support
        spi_flash
        log
)