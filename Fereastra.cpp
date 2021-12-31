#include "Fereastra.h"
#include <string>

 void Fereastra::item_define(int i, sf::Color color, const std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (valoare +1) * place));
}

 Fereastra::Fereastra(int val, float width, float height, int x):valoare(x), val(val){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    text.resize(valoare);
    for(int i=0; i < valoare; i++){
        if(val == 1){
            if(i == 0)
                item_define(i, sf::Color::Red, strings[0][i], i+1, width, height);
            else
                item_define(i, sf::Color::Yellow, strings[0][i], i+1,  width, height);
        }
        if(val == 2){
            if(i == 0)
                item_define(i, sf::Color::Red, strings[1][i], i+1, width, height);
            else
                item_define(i, sf::Color::Yellow, strings[1][i], i+1,  width, height);
        }
        if(val == 3){
            if(i == 0)
                item_define(i, sf::Color::Red, strings[2][i], i+1, width, height);
            else
                item_define(i, sf::Color::Yellow, strings[2][i], i+1,  width, height);
        }
        if(val == 4){
            if(i == 0)
                item_define(i, sf::Color::Red, strings[3][i], i+1, width, height);
            else
                item_define(i, sf::Color::Yellow, strings[3][i], i+1,  width, height);
        }

    item_selectat = 0;

}}

 Fereastra::~Fereastra(){
}

 void Fereastra::draw(sf::RenderWindow &window){
    for(int i = 0; i < valoare;i++){
        window.draw(text[i]);
    }

}

 void Fereastra::MoveUp(){
    if(item_selectat - 1 >= 0){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat--;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

 void Fereastra::MoveDown(){
    if(item_selectat + 1 < valoare){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

 int Fereastra::GetPressedItem(){
    return item_selectat;
}