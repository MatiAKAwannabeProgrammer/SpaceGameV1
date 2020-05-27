#include "button.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

Button::Button()
{
    buttonModel.setSize(sf::Vector2f(300.f, 80.f));
    buttonTextureHover.loadFromFile("./content/buttonHover.png");
    butttonTextureNoHover.loadFromFile("./content/button.png");
    buttonModel.setTexture(&butttonTextureNoHover);
}

void Button::drawButton(sf::RenderWindow& window, sf::Vector2f& buttonPos)
{
    buttonModel.setPosition(buttonPos);
    buttonBounds = buttonModel.getGlobalBounds();
    window.draw(buttonModel);
}

void Button::setTextureHover()
{
    buttonModel.setTexture(&buttonTextureHover);    
}

void Button::setTextureNoHover()
{
    buttonModel.setTexture(&butttonTextureNoHover);
}
