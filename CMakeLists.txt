cmake_minimum_required(VERSION 3.15)  # 3.31 not necessary unless you rely on new features
project(shaders)

set(CMAKE_CXX_STANDARD 20)

# Find dependencies
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Include GLAD headers
include_directories(${CMAKE_SOURCE_DIR}/Include)
include_directories(${CMAKE_SOURCE_DIR}/UtilitiesB)

# Add executable with sources, including glad.c as a source
add_executable(shaders
        main.cpp
        Libs/glad/glad.c
        Utilities/Shader.cpp
        Utilities/Shader.h
)

# Link libraries
target_link_libraries(shaders PRIVATE OpenGL::GL glfw)

# Optional: ensure include directories for this target
target_include_directories(shaders PRIVATE
        ${CMAKE_SOURCE_DIR}/Include
)