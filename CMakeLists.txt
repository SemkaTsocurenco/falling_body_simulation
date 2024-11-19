cmake_minimum_required(VERSION 3.10)
project(falling_body_simulation)

set(CMAKE_CXX_STANDARD 17)

add_executable(falling_body_simulation
    main.cpp
    ./src/euler_method.cpp
    ./src/runge_kutta_method.cpp
    ./src/utils.cpp
    ./src/critical_alpha.cpp
)
