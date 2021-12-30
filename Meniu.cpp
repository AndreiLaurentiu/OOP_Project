#include "Meniu.h"
#include <string>

void MainMeniu::item_define(int i, sf::Color color, std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS + 1) * place));
}

MainMeniu::MainMeniu(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    item_define(0, sf::Color::Red, "Porneste un antrenament", 1,  width, height);
    item_define(1, sf::Color::Yellow, "Creeaza un nou antrenament", 2,  width,  height);
    item_define(2, sf::Color::Yellow, "Verificare valori nutritionale si indici corporali", 3, width,  height);
    item_define(3, sf::Color::Yellow, "Seteaza datele personale", 4,  width, height);
    item_define(4, sf::Color::Yellow, "Inchidere", 5,  width, height);
    item_selectat = 0;

}

MainMeniu::~MainMeniu(){

}

void MainMeniu::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS; i++){
        window.draw(text[i]);
    }

}

void MainMeniu::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void MainMeniu::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int MainMeniu::GetPressedItem(){
    return item_selectat;
}