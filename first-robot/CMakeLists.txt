cmake_minimum_required(VERSION 3.28)

project(my_robot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

find_package(gz-sim8 REQUIRED)
set(GZ_SIM_VERSION 8)

add_library(
    hello SHARED script/hello.cpp
)

target_link_libraries(hello
    PRIVATE
    gz-sim${GZ_SIM_VERSION}::gz-sim${GZ_SIM_VERSION}
)
