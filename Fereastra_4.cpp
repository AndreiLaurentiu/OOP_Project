#include "Fereastra_4.h"
#include <string>

void Fereastra_4::item_define(int i, sf::Color color, std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS_F4 + 1) * place));
}

Fereastra_4::Fereastra_4(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    item_define(0, sf::Color::Red, "Nume", 1,  width, height);
    item_define(1, sf::Color::Yellow, "Sex", 2,  width,  height);
    item_define(2, sf::Color::Yellow, "Inaltime", 3, width,  height);
    item_define(3, sf::Color::Yellow, "Greutate", 4,  width, height);
    item_define(4, sf::Color::Yellow, "Nutritie", 5,  width, height);
    item_define(5, sf::Color::Yellow, "Interogare date utilizator", 6,  width, height);
    item_define(6, sf::Color::Yellow, "Meniu Principal", 7,  width, height);
    item_selectat = 0;

}

Fereastra_4::~Fereastra_4(){

}

void Fereastra_4::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS_F4; i++){
        window.draw(text[i]);
    }

}

void Fereastra_4::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void Fereastra_4::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS_F4){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int Fereastra_4::GetPressedItem(){
    return item_selectat;
}