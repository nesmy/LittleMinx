cmake_minimum_required(VERSION 3.24)

set (CMAKE_CXX_STANDARD 17)

project(littleminx)

file(GLOB SOURCES src/*.cpp src/LittleMinx/*.cpp)

add_library(${PROJECT_NAME} SHARED ${SOURCES})

add_compile_definitions(LM_PLATFORM_WINDOWS, LM_BUILD_DLL)

add_subdirectory(vendor/glfw)
add_subdirectory(vendor/spdlog)

target_include_directories(${PROJECT_NAME}  
    PUBLIC include
    PUBLIC vendor/glfw/include
    PUBLIC vendor/spdlog/include)

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/glfw/src
    PUBLIC vendor/spdlog/src
    )

target_link_libraries(${PROJECT_NAME}
    glfw
    spdlog)
