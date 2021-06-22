
cmake_minimum_required(VERSION 3.4.1)

include_directories(${PROJECT_SOURCE_DIR}/calculation)
include_directories(${PROJECT_SOURCE_DIR}/cpp)

set(APP_SRCS main.cpp)

add_executable(YTCmakeDemo ${APP_SRCS})

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
target_link_libraries(YTCmakeDemo calc class_demo)
