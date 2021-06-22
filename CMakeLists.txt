cmake_minimum_required(VERSION 3.4.1)

project(YTCmakeDemo)

IF (WIN32)
	MESSAGE(STATUS "windows")
ELSEIF (APPLE)
	MESSAGE(STATUS "Apple")
ELSEIF (UNIX)
	MESSAGE(STATUS "UNIX-like")
ENDIF()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

message("CMAKE_SOURCE_DIR:         ${CMAKE_SOURCE_DIR}")
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR})
message("PROJECT_BINARY_DIR:       " ${PROJECT_BINARY_DIR})
message("PROJECT_SOURCE_DIR:       " ${PROJECT_SOURCE_DIR})
message("CMAKE_CXX_FLAGS:          " ${CMAKE_CXX_FLAGS})
message("CMAKE_C_FLAGS:            " ${CMAKE_C_FLAGS})
message("CMAKE_C_COMPILER:         " ${CMAKE_C_COMPILER})
message("CMAKE_CXX_COMPILER:       " ${CMAKE_CXX_COMPILER})
message("CMAKE_C_COMPILER_TARGET:  " ${CMAKE_C_COMPILER_TARGET})

add_subdirectory(src)
add_subdirectory(calculation)
add_subdirectory(cpp)

