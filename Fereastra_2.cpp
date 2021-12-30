#include "Fereastra_2.h"
#include <string>

void Fereastra_2::item_define(int i, sf::Color color, std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS_F2 + 1) * place));
}

Fereastra_2::Fereastra_2(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    item_define(0, sf::Color::Red, "Timp scurs", 1,  width, height);
    item_define(1, sf::Color::Yellow, "Main Menu", 2,  width,  height);
    item_selectat = 0;

}

Fereastra_2::~Fereastra_2(){

}

void Fereastra_2::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS_F2; i++){
        window.draw(text[i]);
    }

}

void Fereastra_2::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void Fereastra_2::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS_F2){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int Fereastra_2::GetPressedItem(){
    return item_selectat;
}