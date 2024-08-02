cmake_minimum_required(VERSION 3.28)
project(Module_4_Exam_Coding)

set(CMAKE_CXX_STANDARD 17)

add_executable(Module_4_Exam_Coding main.cpp
        src/Class.cpp
        include/Class.h
        src/Mage.cpp
        include/Mage.h
        src/Warrior.cpp
        include/Warrior.h
        src/Hero.cpp
        include/Hero.h
        include/Playable.h
        src/Playable.cpp
        src/Record.cpp
        include/Record.h
        src/Movie.cpp
        include/Movie.h
        src/Game.cpp
        include/Game.h)
