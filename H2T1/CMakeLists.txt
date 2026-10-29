cmake_minimum_required(VERSION 3.16)

project(H2T1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2T1 main.cpp
    henkilo.h henkilo.cpp)

include(GNUInstallDirs)
install(TARGETS H2T1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
