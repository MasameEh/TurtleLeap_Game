#pragma once
#include <SFML/Graphics.hpp>
#include "definition.h"

class Obstacle {
public:
    sf::Sprite obstacleSprite;
    // Constructor to create an obstacle at a specific position
    void setPosition(float x, float y);
    Obstacle(sf::Texture& texture);
    void update(float deltaTime, float speed);

    void draw(sf::RenderWindow& window);
    sf::FloatRect getGlobalBounds();
};
