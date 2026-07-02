idf_component_register(
    SRCS
        "src/zigbee.c"

    INCLUDE_DIRS
        "include"

    REQUIRES
        ieee802154
        freertos
        log
)
