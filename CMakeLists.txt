# Specify the minimum version.
cmake_minimum_required(VERSION 3.18)

# Specify the project info.

project(ex615_c_001  LANGUAGES C)

message(STATUS "Current OS          \t: ${CMAKE_SYSTEM_NAME}")
message(STATUS "Host system         \t: ${CMAKE_HOST_SYSTEM_PROCESSOR}")
message(STATUS "Target System       \t: ${CMAKE_SYSTEM_PROCESSOR}")

message(STATUS "Compiler            \t: ${CMAKE_C_COMPILER}")
message(STATUS "Compiler ID         \t: ${CMAKE_C_COMPILER_ID}")
message(STATUS "Compiler Version    \t: ${CMAKE_C_COMPILER_VERSION}")


# Declare the target.
add_executable(${PROJECT_NAME}
    src/convert.c
    inc/convert.h
	
    src/print_size.c
    inc/print_size.h

    src/overflow_underflow.c
    inc/overflow_underflow.h

	main_01.c
)

# Configure the directories to search for header files.
target_include_directories(${PROJECT_NAME} PRIVATE inc)








