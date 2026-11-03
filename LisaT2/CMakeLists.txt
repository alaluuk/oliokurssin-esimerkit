cmake_minimum_required(VERSION 3.16)

project(LisaT2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LisaT2 main.cpp
    car.h car.cpp)

include(GNUInstallDirs)
install(TARGETS LisaT2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
