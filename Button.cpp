#include "Button.h"

GUI::Button::Button(float x, float y, float width, float height, sf::Font font, std::string text, sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor){
    this->buttonState = BTN_IDLE;
    this->shape.setPosition(sf::Vector2f(x, y));
    this->shape.setSize(sf::Vector2f(width, height));
    *this->font = font;
    this->text.setFont(*this->font);
    this->text.setString(text);
    this->text.setFillColor(sf::Color::White);
    this->text.setCharacterSize(12);
    this->text.setPosition(
        this->shape.getPosition().x + (this->shape.getGlobalBounds().width /2.f) - this->text.getGlobalBounds().width /2.f,
        this->shape.getPosition().y + (this->shape.getGlobalBounds().height /2.f) - this->text.getGlobalBounds().height /2.f
    );
    this->idleColor = idleColor;
    this->hoverColor = hoverColor;
    this->activeColor = activeColor;

    this->shape.setFillColor(this->idleColor);
}

void GUI::Button::render(sf::RenderTarget* target){
    target->draw(this->shape);
    target->draw(this->text);
}

void GUI::Button::update(const sf::Vector2f mousePos){
    this->buttonState = BTN_IDLE;
    if(this->shape.getGlobalBounds().contains(mousePos)){
            this->buttonState = BTN_HOVER;
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                this->buttonState = BTN_ACTIVE;
            }
    }
    switch (this->buttonState)
    {
    case BTN_IDLE:
    this->shape.setFillColor(this->idleColor);
        break;
    case BTN_HOVER:
    this->shape.setFillColor(this->hoverColor);
        break;
    case BTN_ACTIVE:
    this->shape.setFillColor(this->activeColor);
        break;
    default:
        this->shape.setFillColor(sf::Color::Red);
        break;
    }
}

const bool GUI::Button::isPressed() const{
    if(this->buttonState == BTN_ACTIVE)
        return true;
    return false;
}

//dropdown list
void GUI::dropdown_list::render(sf::RenderTarget* target){
    
}

void GUI::dropdown_list::update(const sf::Vector2f mousePos){
    
}

GUI::dropdown_list::~dropdown_list(const sf::Vector2f& mousePos){
    delete this->activeElement;
    for(auto& i : this->list)
        delete i;
}

GUI::dropdown_list::dropdown_list(sf::Font& font):font(font){

}

const std::string