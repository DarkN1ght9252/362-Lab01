project(list C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

set(SOURCE_FILES main.c list.c)

add_executable(list ${SOURCE_FILES})


