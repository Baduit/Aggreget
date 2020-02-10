add_executable(aggreget_test ./test.cpp)
add_test(NAME aggreget_test COMMAND aggreget_test)

target_compile_features(aggreget_test PRIVATE cxx_std_20)

target_compile_options(aggreget_test
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
					   $<$<CXX_COMPILER_ID:GNU>:-Wextra -Wall -Wsign-conversion -Wfloat-equal -pedantic -Wredundant-decls -Wshadow -Wpointer-arith>)
					   
target_include_directories(aggreget_test PRIVATE
					   	$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>
					   	$<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/src>)