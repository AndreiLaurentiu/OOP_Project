cmake_minimum_required(VERSION 3.16)
project(repo_poo_project)

set(CMAKE_CXX_STANDARD 14)

#set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "/usr/lib/x86_64-linux-gnu/cmake")
find_package(SFML 2.5 COMPONENTS graphics audio window network system REQUIRED)
set(sfml-libs
    sfml-graphics
    sfml-network
    sfml-audio
    sfml-window
    sfml-system
  )
set(SOURCES main.cpp Exercitiu.cpp Nutritie.cpp Tipuri_Exercitii.cpp Utilizator.cpp Erori_exercitiu.cpp Meniu.cpp Antrenament.cpp)

add_executable(${PROJECT_NAME}
${SOURCES})

target_link_libraries(${PROJECT_NAME} ${sfml-libs})