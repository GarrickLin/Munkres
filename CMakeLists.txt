cmake_minimum_required(VERSION 2.8)
project(Munkres)

find_package(OpenCV REQUIRED)

include_directories(include/)


file(GLOB src src/*.cpp)
add_executable(main ${src})
target_link_libraries(main ${OpenCV_LIBS})