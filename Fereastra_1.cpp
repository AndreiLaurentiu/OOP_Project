#include "Fereastra_1.h"
#include <string>

void Fereastra_1::item_define(int i, sf::Color color, std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS_F1 + 1) * place));
}

Fereastra_1::Fereastra_1(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    item_define(0, sf::Color::Red, "Antrenament creat cu succes. Apasa pentru detalii", 1,  width, height);
    item_define(1, sf::Color::Yellow, "Meniu Principal", 2,  width,  height);
    item_selectat = 0;

}

Fereastra_1::~Fereastra_1(){

}

void Fereastra_1::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS_F1; i++){
        window.draw(text[i]);
    }

}

void Fereastra_1::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void Fereastra_1::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS_F1){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int Fereastra_1::GetPressedItem(){
    return item_selectat;
}