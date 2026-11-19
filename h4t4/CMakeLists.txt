cmake_minimum_required(VERSION 3.16)

project(h4t4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h4t4 main.cpp
    henkilo.cpp henkilo.h yritys.cpp yritys.h
    osoite.h osoite.cpp)

include(GNUInstallDirs)
install(TARGETS h4t4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
