add_subdirectory(math)

add_executable(SecureMessage main.cpp)
target_link_libraries(SecureMessage PUBLIC math)