#ifndef SCORE_HPP
#define SCORE_HPP

#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <string>

class TextClass
{
private:
    sf::Font font;
    sf::Text scoreText;
    sf::Text healthText;
    sf::Text startButtonText;
    sf::Text exitButtonText;

public:
    TextClass();
    void drawScore(sf::RenderWindow& window, int& score, bool& gameInProgress);
    void drawHealth(sf::RenderWindow& window, int& health);
    void drawStart(sf::RenderWindow& window);
    void drawExit(sf::RenderWindow& window);

};
#endif
