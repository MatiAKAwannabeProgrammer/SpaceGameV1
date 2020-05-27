#include "textclass.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

TextClass::TextClass()
{
    font.loadFromFile("./content/arial_narrow_7.ttf");

    scoreText.setPosition(sf::Vector2f(10.f, 10.f));
    scoreText.setFont(font);
    scoreText.setFillColor(sf::Color(sf::Color::Cyan));
    scoreText.setCharacterSize(24);

    healthText.setPosition(sf::Vector2f(10.f, 30.f));
    healthText.setFont(font);
    healthText.setFillColor(sf::Color(sf::Color::Red));
    healthText.setCharacterSize(24);

    startButtonText.setPosition(sf::Vector2f(320.f, 250.f));
    startButtonText.setFont(font);
    startButtonText.setFillColor(sf::Color(sf::Color::Black));
    startButtonText.setCharacterSize(50);

    exitButtonText.setPosition(sf::Vector2f(320.f, 350.f));
    exitButtonText.setFont(font);
    exitButtonText.setFillColor(sf::Color(sf::Color::Black));
    exitButtonText.setCharacterSize(50);
}

void TextClass::drawScore(sf::RenderWindow& window, int& score, bool& gameInProgress)
{
    if (!gameInProgress)
    {
        scoreText.setCharacterSize(50);
        scoreText.setPosition(sf::Vector2f(320.f, 100.f));
    }
    else
    {
        scoreText.setCharacterSize(24);
        scoreText.setPosition(sf::Vector2f(10.f, 10.f));
    }
    scoreText.setString("Score: " + std::to_string(score));
    window.draw(scoreText);
} 

void TextClass::drawHealth(sf::RenderWindow& window, int& health)
{
    healthText.setString("Health: " + std::to_string(health));
    window.draw(healthText);
}

void TextClass::drawStart(sf::RenderWindow& window)
{
    startButtonText.setString("Start Game");
    window.draw(startButtonText); 
}

void TextClass::drawExit(sf::RenderWindow& window)
{
    exitButtonText.setString("Exit Game");
    window.draw(exitButtonText);
}
