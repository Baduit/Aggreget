add_executable(aggreget_test_target ./test.cpp)

target_compile_features(aggreget_test_target PRIVATE cxx_std_20)

target_compile_options(aggreget_test_target
                       PRIVATE
                       $<$<CXX_COMPILER_ID:MSVC>:/W3 /permissive- /TP>
					   $<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wextra -Wall -Wsign-conversion -Wfloat-equal -pedantic -Wredundant-decls -Wshadow -Wpointer-arith>)
target_link_libraries(aggreget_test_target PRIVATE aggreget)					   

add_test(test_aggreget aggreget_test_target)