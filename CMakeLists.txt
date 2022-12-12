cmake_minimum_required(VERSION 3.24)

project(SandBox)

file(GLOB SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

add_compile_definitions(LM_PLATFORM_WINDOWS )

add_subdirectory(vendor/littleminx)

target_include_directories(${PROJECT_NAME}
    PUBLIC vendor/littleminx/include
    PUBLIC vendor/littleminx/vendor/spdlog/include()
    )

target_link_directories(${PROJECT_NAME}
    PUBLIC vendor/littleminx/src
    )

target_link_libraries(${PROJECT_NAME}
    littleminx
    )
