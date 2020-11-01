cmake_minimum_required(VERSION 3.17)
project(Ants_vs_Bees)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ants_vs_Bees main.cpp bees.cpp bees.h bugs.cpp bugs.h ants.cpp ants.h ant_types/harvester.cpp ant_types/harvester.h ant_types/thrower.cpp ant_types/thrower.h ant_types/fire.cpp ant_types/fire.h ant_types/long_thrower.cpp ant_types/long_thrower.h ant_types/short_thrower.cpp ant_types/short_thrower.h ant_types/wall.cpp ant_types/wall.h ant_types/ninja.cpp ant_types/ninja.h ant_types/bodyguard.cpp ant_types/bodyguard.h)