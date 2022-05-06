# Embed CA, certificate & key directly into binary
idf_component_register(SRCS "wifi_enterprise_main.cpp"
                    INCLUDE_DIRS ".")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
