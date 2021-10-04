cmake_minimum_required(VERSION 3.9)

project(AggregetLib VERSION 1.2 DESCRIPTION "Use your structures like tuples")

option(EXAMPLE "EXAMPLE" ON)
option(TESTS "TESTS" ON)

# Library
add_library(aggreget INTERFACE)
target_compile_features(aggreget INTERFACE cxx_std_20)				   
target_include_directories(aggreget INTERFACE ${CMAKE_CURRENT_LIST_DIR}/src)
	

# Example
if (EXAMPLE)
    add_executable(example ./examples/example.cpp)
    target_compile_features(example PRIVATE cxx_std_20)
    target_compile_options(example
                        PRIVATE
                        $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
                        $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wextra -Wall -Wsign-conversion -Wfloat-equal -pedantic -Wredundant-decls -Wshadow -Wpointer-arith>)
    target_link_libraries(example PRIVATE aggreget)
endif()
                      
# Tests
if (TESTS)
    include(CTest)
    enable_testing(MAKE_DIRECTORY test)
    add_subdirectory(test)
endif()
