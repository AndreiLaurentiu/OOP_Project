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

add_definitions(-DDEBUG_BUILD)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
#set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "/usr/lib/x86_64-linux-gnu/cmake")
find_package(SFML 2.5.1 COMPONENTS graphics audio window network system REQUIRED)
set(sfml-libs
    sfml-graphics
    sfml-network
    sfml-audio
    sfml-window
    sfml-system
  )
set(SOURCES main.cpp Exercitiu.cpp Nutritie.cpp Tipuri_Exercitii.cpp Utilizator.cpp Erori_exercitiu.cpp Meniu.cpp)

add_executable(repo_poo_project
${SOURCES})

target_link_libraries(repo_poo_project ${sfml-libs})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)