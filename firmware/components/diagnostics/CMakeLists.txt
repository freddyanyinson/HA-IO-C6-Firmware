idf_component_register(
    SRCS
        "src/diagnostics.c"

    INCLUDE_DIRS
        "include"

    REQUIRES
        common
        esp_system
        esp_hw_support
        spi_flash
        log
)