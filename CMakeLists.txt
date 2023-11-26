cmake_minimum_required(VERSION 3.0.0)

# Set the project name and languages
project(Sibit C)

# Find the GTK3 package
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

# Set include directories for GTK
include_directories(${GTK3_INCLUDE_DIRS})

# Add compiler flags for GTK
add_definitions(${GTK3_CFLAGS_OTHER})

# Specify the source files for the executable
add_executable(index ./src/index.c)

# Link against GTK libraries
target_link_libraries(index ${GTK3_LIBRARIES})
