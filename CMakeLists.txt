# Version minimale requise de CMake
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(VehiculeProject)

# Spécifier la version du standard C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter les fichiers source et d'en-tête
set(SOURCES
    ../Vehicule.cpp
    ../Bateau.cpp
    ../Voiture.cpp
    ../VoitureAmphibie.cpp
    ../main.cpp
)

set(HEADERS
    ../Vehicule.hpp
    ../Bateau.hpp
    ../Voiture.hpp
    ../VoitureAmphibie.hpp
)

# Inclure les répertoires d'en-tête
include_directories(include)

# Créer l'exécutable
add_executable(VehiculeProject ${SOURCES} ${HEADERS})