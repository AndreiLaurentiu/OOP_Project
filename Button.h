#pragma once
#include <vector>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

enum button_states{BTN_IDLE = 0, BTN_HOVER, BTN_ACTIVE};

namespace GUI{

class Button{
    private:
        short unsigned buttonState;

        bool pressed;
        bool hover;

        sf::RectangleShape shape;
        sf::Font* font;
        sf::Text text;
        sf::Color idleColor;
        sf::Color hoverColor;
        sf::Color activeColor;
        
    public:
        Button(float x, float y, float width, float height, sf::Font font, std::string text, sf::Color idleColor, sf::Color hoverColor, sf::Color activeColor);
        ~Button() = default;
        void render(sf::RenderTarget* target);
        void update(sf::Vector2f mousePos);
        const bool isPressed()const;
        const std::string getText() const;
        void setText(const std::string text) const;
};

class dropdown_list{
    private:
        sf::Font& font;
        sf::RectangleShape active;
        std::vector<GUI::Button*> list;

    public:
    dropdown_list();
    ~dropdown_list();
    void render(sf::RenderTarget* target);
    void update(sf::Vector2f mousePos);

};

}