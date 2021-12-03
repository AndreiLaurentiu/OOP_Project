#pragma once
#include "SFML/Graphics.hpp"

#define MAX_NUMBER_OF_ITEMS 4

class Meniu
{
private:
    int item_selectat;
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS];
public:
    Meniu(float width, float height);
    ~Meniu();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
