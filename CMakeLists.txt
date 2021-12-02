cmake_minimum_required(VERSION 3.16)
project(repo_poo_project)

set(CMAKE_CXX_STANDARD 14)

if (MSVC)
    add_compile_options(/W4)
else ()
    add_compile_options(-Wall -Wextra -pedantic -g)
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
        add_compile_options(-stdlib=libstdc++)
    endif ()
endif ()

set(SOURCES main.cpp Exercitiu.cpp Nutritie.cpp Tipuri_Exercitii.cpp Utilizator.cpp Erori_exercitiu.cpp)

add_executable(repo_poo_project
${SOURCES})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)