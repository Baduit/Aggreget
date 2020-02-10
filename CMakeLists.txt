cmake_minimum_required(VERSION 3.9)

project(CppCards VERSION 0.1 DESCRIPTION "A card game")

set(SRCS
    ./example/example.cpp
  )


add_executable(example ${SRCS})

target_compile_features(example PRIVATE cxx_std_20)

target_compile_options(example
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
                       $<$<CXX_COMPILER_ID:GNU>:-Wextra -Wall -Wsign-conversion -Wfloat-equal -pedantic -Wredundant-decls -Wshadow -Wpointer-arith>)

target_include_directories(example
                           PUBLIC
                           ${CMAKE_CURRENT_LIST_DIR}/src/)
                      
