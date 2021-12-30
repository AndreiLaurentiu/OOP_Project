#include "Fereastra_3.h"
#include <string>

void Fereastra_3::item_define(int i, sf::Color color, std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS_F3 + 1) * place));
}

Fereastra_3::Fereastra_3(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    item_define(0, sf::Color::Red, "Valorile nutritionale introduse", 1,  width, height);
    item_define(1, sf::Color::Yellow, "Calculator de MACROS", 2,  width,  height);
    item_define(2, sf::Color::Yellow, "Calculator AMR", 3,  width,  height);
    item_define(3, sf::Color::Yellow, "Calculator IMC", 4,  width,  height);
    item_define(4, sf::Color::Yellow, "Meniu Principal", 5,  width,  height);
    item_selectat = 0;

}

Fereastra_3::~Fereastra_3(){

}

void Fereastra_3::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS_F3; i++){
        window.draw(text[i]);
    }

}

void Fereastra_3::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void Fereastra_3::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS_F3){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int Fereastra_3::GetPressedItem(){
    return item_selectat;
}