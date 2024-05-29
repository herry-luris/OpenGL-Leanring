cmake_minimum_required(VERSION 3.20)

project(
    OpenGL
    LANGUAGES CXX
    VERSION 0.1.0
    DESCRIPTION "My first OpenGL"
)

set(CMAKE_CXX_STANDARD 17)
aux_source_directory(src source)
message(${source})
add_executable(OpenGL ${source})
target_include_directories(OpenGL PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_directories(OpenGL PUBLIC ${PROJECT_SOURCE_DIR}/lib)

target_link_libraries(OpenGL PUBLIC libglfw3.a)