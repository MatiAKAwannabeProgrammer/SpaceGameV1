#include "map.hpp"
#include <SFML/Graphics/RenderWindow.hpp>

Map::Map()
{
    mapTexture.loadFromFile("./content/map.jpg");
    mapModel.setTexture(mapTexture);
}

void Map::drawMap(sf::RenderWindow& window)
{
    window.draw(mapModel);
}
