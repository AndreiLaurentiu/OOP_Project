cmake_minimum_required(VERSION 3.16)
project(repo_poo_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(repo_poo_project
main.cpp Exercitiu.cpp Nutritie.cpp Tipuri_Exercitii.cpp Utilizator.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)