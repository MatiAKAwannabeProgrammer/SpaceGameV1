#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>
class Button
{
private:
    sf::RectangleShape buttonModel;
    sf::Texture buttonTextureHover;
    sf::Texture butttonTextureNoHover;

public:
    Button();
    void drawButton(sf::RenderWindow& window, sf::Vector2f& buttonPos);
    void setTextureHover();
    void setTextureNoHover();
    sf::FloatRect buttonBounds;

};
#endif
