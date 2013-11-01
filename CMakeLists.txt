cmake_minimum_required(VERSION 2.8)
PROJECT(recov4)

SET(CMAKE_CXX_FLAGS "-std=c++0x -coverage")
SET(CMAKE_EXE_LINKER_FLAGS "-coverage")

include_directories(
  /usr/local/include
  include
)

link_directories(
  /usr/local/lib
)

FILE(GLOB SRCS ./src/*.cc)
FILE(GLOB TEST_SRCS ./test/*.cc)

add_executable(TEST
  ${SRCS}
  ${TEST_SRCS}
)

target_link_libraries(TEST pthread gtest)

