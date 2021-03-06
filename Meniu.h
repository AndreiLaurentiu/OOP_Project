#pragma once
#include "SFML/Graphics.hpp"

const int MAX_NUMBER_OF_ITEMS = 5;

class MainMeniu
{
private:
    int item_selectat;
    sf::Font font;
    sf::Text text[MAX_NUMBER_OF_ITEMS];
    void item_define(int i, sf::Color color, std::string string, int place, float width, float height);
public:
    MainMeniu(float width, float height);
    ~MainMeniu();
    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    int GetPressedItem();
};
