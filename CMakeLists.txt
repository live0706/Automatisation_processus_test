cmake_minimum_required(VERSION 3.10)
project(calculatrice C)

set(CMAKE_C_STANDARD 11)

include_directories(include)

add_executable(calculator
    src/main.c
    src/calculatrice.c
)

# Tests automatiques
enable_testing()

add_test(NAME Addition COMMAND calculator add 2 3)
set_tests_properties(Addition PROPERTIES PASS_REGULAR_EXPRESSION "5")

add_test(NAME Soustraction COMMAND calculator sub 7 2)
set_tests_properties(Soustraction PROPERTIES PASS_REGULAR_EXPRESSION "5")

add_test(NAME Multiplication COMMAND calculator mul 4 6)
set_tests_properties(Multiplication PROPERTIES PASS_REGULAR_EXPRESSION "24")

add_test(NAME Division COMMAND calculator div 10 2)
set_tests_properties(Division PROPERTIES PASS_REGULAR_EXPRESSION "5")

add_test(NAME Carre COMMAND calculator car 5)
set_tests_properties(Carre PROPERTIES PASS_REGULAR_EXPRESSION "25")
