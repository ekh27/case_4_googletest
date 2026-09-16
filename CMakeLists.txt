cmake_minimum_required(VERSION 3.20)

project(case_4_googletest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_CONTRACT_TESTS "Build GoogleTest contract tests" OFF)

if(BUILD_CONTRACT_TESTS)
    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
    )
    FetchContent_MakeAvailable(googletest)

    enable_testing()

    add_executable(structures_tests
        tests/structures_test.cpp
    )
    target_include_directories(structures_tests PRIVATE include)
    target_link_libraries(structures_tests PRIVATE GTest::gtest_main)

    include(GoogleTest)
    gtest_discover_tests(structures_tests)
endif()
