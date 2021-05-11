cmake_minimum_required(VERSION 3.16)
project(SunistOS)

set(CMAKE_CXX_STANDARD 14)

include_directories(libs)
include_directories(middleware)
include_directories(tools)

add_executable(Product
        libs/page.cpp
        libs/page.h
        libs/replacementController.cpp
        libs/replacementController.h
        middleware/basicService.cpp
        middleware/basicService.h
        middleware/messageQueue.cpp
        middleware/messageQueue.h
        middleware/moudleSwitcher.cpp
        middleware/moudleSwitcher.h
        tools/argumentParser.cpp
        tools/argumentParser.h
        tools/csvParser.cpp
        tools/csvParser.h
        tools/errorParser.cpp
        tools/errorParser.h
        main.cpp)
