#pragma once
#include "SFML/Graphics.hpp"
#include <vector>

const std::string string_fer_1[2] = {"Antrenament creat cu succes. Apasa pentru detalii", "Meniu Principal"};
const std::string string_fer_2[2] = {"Timp scurs", "Main Menu"};
const std::string string_fer_3[5] = {"Valorile nutritionale introduse", "Calculator de MACROS", "Calculator AMR", "Calculator IMC", "Meniu Principal"};
const std::string string_fer_4[7] = {"Nume", "Sex", "Inaltime", "Greutate", "Nutritie", "Interogare date utilizator", "Meniu Principal"};
const std::string strings[4][7] = {string_fer_1[2], string_fer_2[2], string_fer_3[5], string_fer_4[7]};

class Fereastra
{
private:
    int item_selectat;
    sf::Font font;
    int id_fereastra;
    int nr_iteme;
    std::vector<sf::Text> text;
    void item_define(int i, sf::Color color, const std::string string, int place, float width, float height);
public:
    Fereastra(int id_fereastra, float width, float height, int nr_iteme);
    ~Fereastra();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
