cmake_minimum_required(VERSION 3.16)

project(H6T2 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(H6T2
  main.cpp
  person.h person.cpp
)
target_link_libraries(H6T2 PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt::Network)

include(GNUInstallDirs)
install(TARGETS H6T2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
