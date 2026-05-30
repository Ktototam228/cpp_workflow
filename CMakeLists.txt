cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(calculator src/calculator.cpp)

# Добавляем предупреждения
target_compile_options(calculator PRIVATE /W4)
