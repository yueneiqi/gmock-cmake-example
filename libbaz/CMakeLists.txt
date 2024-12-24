set(libbaz_SRCS
    baz.h
    baz.cpp
)

# Declare the library
add_library(libbaz STATIC
    ${libbaz_SRCS}
)

# Specify here the include directories exported
# by this library
target_include_directories(libbaz PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
