cmake_minimum_required(VERSION 3.16)

project(h4t2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h4t2 main.cpp
    henkilo.cpp henkilo.h
    osoite.cpp osoite.h)

include(GNUInstallDirs)
install(TARGETS h4t2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
