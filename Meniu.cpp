#include "Meniu.h"

Meniu::Meniu(float width, float height){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    text[0].setFont(font);
    text[0].setFillColor(sf::Color::Red);
    text[0].setString("Porneste un antrenament");
    text[0].setCharacterSize(20);
    text[0].setStyle(sf::Text::Style::Bold);
    text[0].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));
    //text[0].setOrigin()

    text[1].setFont(font);
    text[1].setFillColor(sf::Color::Yellow);
    text[1].setString("Creeaza un nou antrenament");
    text[1].setCharacterSize(20);
    text[1].setStyle(sf::Text::Style::Bold);
    text[1].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

    text[2].setFont(font);
    text[2].setFillColor(sf::Color::Yellow);
    text[2].setString("Verificare valori nutritionale");
    text[2].setCharacterSize(20);
    text[2].setStyle(sf::Text::Style::Bold);
    text[2].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
    
    text[3].setFont(font);
    text[3].setFillColor(sf::Color::Yellow);
    text[3].setString("Inchidere");
    text[3].setCharacterSize(20);
    text[3].setStyle(sf::Text::Style::Bold);
    text[3].setPosition(sf::Vector2f(width / 2 - 120, height / (MAX_NUMBER_OF_ITEMS + 1) * 4));
    
    item_selectat = 0;

}

Meniu::~Meniu(){

}

void Meniu::draw(sf::RenderWindow &window){
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS; i++){
        window.draw(text[i]);
    }

}

void Meniu::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

void Meniu::MoveDown(){
    if(item_selectat + 1 < MAX_NUMBER_OF_ITEMS){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

int Meniu::GetPressedItem(){
    return item_selectat;
}