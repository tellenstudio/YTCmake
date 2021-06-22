
cmake_minimum_required(VERSION 3.4.1)

project(class_demo)

set(LIB_HDRS class_demo.h)
set(LIB_SRCS class_demo.cpp)

add_library(class_demo ${LIB_SRCS} ${LIB_HDRS})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(class_demo PROPERTIES OUTPUT_NAME "class")

