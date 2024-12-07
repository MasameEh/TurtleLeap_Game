#include "Obstacle.h"


// Constructor to create an obstacle at a specific position
Obstacle::Obstacle(sf::Texture& texture) {
    obstacleSprite.setScale(0.3f, 0.3f);  // Make the obstacle half its size
    obstacleSprite.setTexture(texture);
    obstacleSprite.setPosition(Window_W, Window_H - 50);  // Place it on the ground (adjust as needed)
}

void Obstacle::update(float deltaTime, float speed) {
    obstacleSprite.move(-speed * deltaTime, 0);  // Move obstacle left
}

void Obstacle::draw(sf::RenderWindow& window) {
    window.draw(obstacleSprite);
}

sf::FloatRect Obstacle::getGlobalBounds(){
    return obstacleSprite.getGlobalBounds();
}

void Obstacle::setPosition(float x, float y) {
    obstacleSprite.setPosition(x, y); // Assuming the obstacle is represented by an `sf::RectangleShape` or similar
}

