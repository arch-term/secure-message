cmake_minimum_required(VERSION 3.10)
project(SecureMessage)

include_directories(include)
add_subdirectory(src)

add_executable(SecureMessage main.cpp)
target_link_libraries(SecureMessage PUBLIC math)