cmake_minimum_required(VERSION 3.16)

project(H3T3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H3T3 main.cpp
    account.h account.cpp
    savingsaccount.h savingsaccount.cpp
    checkingaccount.h checkingaccount.cpp)

include(GNUInstallDirs)
install(TARGETS H3T3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
