cmake_minimum_required(VERSION 3.10)
project(lyd C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -O3 -fomit-frame-pointer")
add_compile_options(-Wall -Wextra -Wpedantic)
include_directories(inc)
find_package(Threads REQUIRED)

set(SOURCES
    src/main.c
    src/spl.c
    src/rend_b.c
    src/lib.c
    src/rend_m.c
    src/ginput.c
    src/controller.c
    src/roulette.c
    src/makebid.c
)

add_executable(lyd ${SOURCES})

target_link_libraries(lyd PRIVATE Threads::Threads)
install(TARGETS lyd RUNTIME DESTINATION bin)

