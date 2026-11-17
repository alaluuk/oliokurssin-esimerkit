cmake_minimum_required(VERSION 3.16)

project(h4t1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h4t1 main.cpp
    osoite.h osoite.cpp
    henkilo.h henkilo.cpp)

include(GNUInstallDirs)
install(TARGETS h4t1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
