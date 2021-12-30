#pragma once
#include "SFML/Graphics.hpp"

const int MAX_NUMBER_OF_ITEMS_F3 = 5;

class Fereastra_3
{
private:
    int item_selectat;
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS_F3];
    void item_define(int i, sf::Color color, std::string string, int place, float width, float height);
public:
    Fereastra_3(float width, float height);
    ~Fereastra_3();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
