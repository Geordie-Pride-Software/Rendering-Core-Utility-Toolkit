cmake_minimum_required(VERSION 3.20)


#**************************************************
# Project
#**************************************************

project(Renderer)



#**************************************************
# C++ standard
#**************************************************

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)



#**************************************************
# DLL export definition
#**************************************************

add_compile_definitions(
    RENDERER_EXPORTS
)



#**************************************************
# Source files
#**************************************************

file(GLOB_RECURSE RENDERER_SOURCES

    src/*.cpp

)



#**************************************************
# Create DLL
#**************************************************

add_library(
    Renderer
    SHARED

    ${RENDERER_SOURCES}

)



#**************************************************
# Include folders
#**************************************************

target_include_directories(
    Renderer

    PUBLIC

    include

    third_party

)



#**************************************************
# OpenGL
#**************************************************

find_package(OpenGL REQUIRED)



target_link_libraries(
    Renderer

    OpenGL::GL

)



#**************************************************
# Windows DLL output
#**************************************************

set_target_properties(
    Renderer

    PROPERTIES

    OUTPUT_NAME "Renderer"

)