cmake_minimum_required(VERSION 3.27)
project(PJCproject)

set(CMAKE_CXX_STANDARD 20)

set(BUILD_SHARED_LIBS false)

include(FetchContent)

FetchContent_Declare(
        SFML
        GIT_REPOSITORY  https://github.com/SFML/SFML
        GIT_TAG         2.6.1
)

FetchContent_MakeAvailable(SFML)

add_executable(PJCproject main.cpp
        Options.cpp
        Options.hpp
        Baloob.cpp
        Baloob.hpp
        Generator.cpp
        Generator.hpp
        Menu.cpp
        Menu.hpp
        Game.cpp
        Game.hpp
        Button.cpp
        Button.hpp
)

target_link_libraries(PJCproject sfml-graphics sfml-audio)
