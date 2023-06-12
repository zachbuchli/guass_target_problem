cmake_minimum_required(VERSION 3.25)
project(guass_target_problem C)

set(CMAKE_C_STANDARD 99)
# assuming gcc as the C compiler
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g3 -Og -Wall -Wextra -pedantic -DHAVE_INLINE -D_FORTIFY_SOURCE=2 -DDEBUG")

set(target_sources
        src/main.c
        src/guass_target.c
        )

add_executable(guass_target_problem ${target_sources})

target_include_directories(guass_target_problem PUBLIC includes)

# Link GSL libraries to executable
find_package(GSL REQUIRED)
target_link_libraries(guass_target_problem GSL::gsl GSL::gslcblas)
