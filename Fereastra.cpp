#include "Fereastra.h"
#include <string>

 void Fereastra::item_define(int i, sf::Color color, const std::string string, int place, float width, float height){
    text[i].setFont(font);
    text[i].setFillColor(color);
    text[i].setString(string);
    text[i].setCharacterSize(20);
    text[i].setStyle(sf::Text::Style::Bold);
    text[i].setPosition(sf::Vector2f(width / 2 - 120, height / (nr_iteme +1) * place));
}

 Fereastra::Fereastra(int id_fereastra, float width, float height, int x):nr_iteme(x), id_fereastra(id_fereastra){
    if(!font.loadFromFile("arial.ttf")){
        //throw "Nu a fost gasit font-ul bun!";
    }
    text.resize(nr_iteme);
    item_define(0, sf::Color::Red, strings[id_fereastra-1][0], 1, width, height);
    for(int i=1; i < nr_iteme; i++)
                item_define(i, sf::Color::Yellow, strings[id_fereastra-1][i], i+1,  width, height);
    item_selectat = 0;
}

 Fereastra::~Fereastra(){
}

 void Fereastra::draw(sf::RenderWindow &window){
    for(int i = 0; i < nr_iteme;i++){
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
    if(item_selectat + 1 < nr_iteme){
        text[item_selectat].setFillColor(sf::Color::Yellow);
        item_selectat++;
        text[item_selectat].setFillColor(sf::Color::Red);
    }
}

 int Fereastra::GetPressedItem(){
    return item_selectat;
}