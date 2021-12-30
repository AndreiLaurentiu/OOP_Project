#pragma once
#include "SFML/Graphics.hpp"

const int MAX_NUMBER_OF_ITEMS_F1 = 2;

class Fereastra_1
{
private:
    int item_selectat;
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS_F1];
    void item_define(int i, sf::Color color, std::string string, int place, float width, float height);
public:
    Fereastra_1(float width, float height);
    ~Fereastra_1();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
