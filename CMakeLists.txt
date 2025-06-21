cmake_minimum_required(VERSION 3.5)
project(solid)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE HEADER ${PROJECT_SOURCE_DIR}/src/*.hpp)
file(GLOB_RECURSE SOURCE ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME} ${HEADER} ${SOURCE})

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

include_directories(${PROJECT_SOURCE_DIR}/src)

IF(NOT CMAKE_BUILD_TYPE STREQUAL "Release")
    # Add Google Test
    include(FetchContent)
    FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)

    # Enable testing
    enable_testing()

    # Add test executable
    file(GLOB_RECURSE TEST_SOURCE ${PROJECT_SOURCE_DIR}/test/*.cc)

    add_executable(${PROJECT_NAME}_tests ${TEST_SOURCE})
    target_link_libraries(${PROJECT_NAME}_tests GTest::gtest_main GTest::gmock_main)
    include_directories(
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/mocks
    )
    include(GoogleTest)
    gtest_discover_tests(${PROJECT_NAME}_tests)

    set_target_properties(${PROJECT_NAME}_tests PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/test/"
    )
ENDIF()