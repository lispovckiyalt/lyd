cmake_minimum_required(VERSION 3.10)
project(lyd C)

include_directories(inc)
find_package(Threads REQUIRED)

set(SOURCES
    src/main.c
    src/rend/spl.c
    src/rend/rend_b.c
    src/lib/lib.c
    src/rend/rend_m.c
    src/io/ginput.c
    src/io/controller.c
    src/mechanics/roulette.c
    src/io/makebid.c
    src/mechanics/iswin.c
    src/io/ccts.c
)

add_executable(lyd ${SOURCES})

target_compile_options(lyd PRIVATE 
    -Wall -Wextra -Wpedantic -Wshadow -Wconversion 
    -fsanitize=address,undefined
)

target_link_libraries(lyd PRIVATE 
    Threads::Threads
    -fsanitize=address,undefined
)


install(TARGETS lyd RUNTIME DESTINATION bin)

