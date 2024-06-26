cmake_minimum_required(VERSION 3.25)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

set(NAME libft)
project(${NAME} C CXX)

file(GLOB_RECURSE SRC_FILES "srcs/*.c")
file(GLOB_RECURSE INC_FILES "includes/*.h")

add_library(${NAME} STATIC ${SRC_FILES} ${INC_FILES})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)
