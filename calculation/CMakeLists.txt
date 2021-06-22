
cmake_minimum_required(VERSION 3.4.1)

project(calc)

set(VERSION "0.0.1")

set(LIB_HDRS
    calculation.h
    sample.h
)

set(LIB_SRCS calculation.cpp sample.cpp)

#add_library(calc SHARED ${LIB_SRCS})
add_library(calc STATIC ${LIB_SRCS} ${LIB_HDRS})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set_target_properties(calc PROPERTIES OUTPUT_NAME "calc")

