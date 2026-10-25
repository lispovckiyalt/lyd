cmake_minimum_required(VERSION 3.10)
project(lyd C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wpedantic -Wshadow -Wconversion -fsanitize=address,undefined")
add_compile_options(-Wall -Wextra -Wpedantic)
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
)

add_executable(lyd ${SOURCES})

target_link_libraries(lyd PRIVATE Threads::Threads)
install(TARGETS lyd RUNTIME DESTINATION bin)

