cmake_minimum_required(VERSION 3.16)
project(ALTERDUNE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(alterdune
    src/main.cpp
    src/Personnage.cpp
    src/Item.cpp
    src/Joueur.cpp
    src/Monstre.cpp
    src/MonstreNormal.cpp
    src/MiniBoss.cpp
    src/Boss.cpp
    src/DefinitionAct.cpp
    src/EntreeBestiaire.cpp
    src/ResultatCombat.cpp
    src/Jeu.cpp
)

target_include_directories(alterdune PRIVATE include)
