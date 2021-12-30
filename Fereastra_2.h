#pragma once
#include "SFML/Graphics.hpp"

const int MAX_NUMBER_OF_ITEMS_F2 = 2;

class Fereastra_2
{
private:
    int item_selectat;
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS_F2];
    void item_define(int i, sf::Color color, std::string string, int place, float width, float height);
public:
    Fereastra_2(float width, float height);
    ~Fereastra_2();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
