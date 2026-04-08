cmake_minimum_required(VERSION 3.10)
project(C_Quality_Lab C)

include(FetchContent)
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG v2.5.2
)
FetchContent_MakeAvailable(unity)

add_library(utils_lib src/utils.c)
add_executable(run_tests tests/test_utils.c)
target_link_libraries(run_tests utils_lib unity)

enable_testing()
add_test(NAME QualityTest COMMAND run_tests)
