#include "Animation.h"

Animation::Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime)
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;

	totalTime = 0.0f;
	currentImage.x = 0;

    //width of one turtle
	uvRect.width = texture->getSize().x / imageCount.x;
    //height of one turtle
	uvRect.height = texture->getSize().y / imageCount.y;
}

/**
 * @brief 
 * 
 * @param row which row the animation to access     
 * @param deltaTime time between curr frame and the next frame 
 */
void Animation::Update(int row, float deltaTime)
{
	currentImage.y = row;
	totalTime += deltaTime;

	if (totalTime >= switchTime)
	{
		totalTime -= switchTime;

        // switch to the next image
		currentImage.x++;
        // if we reach the last image we go back
		currentImage.x %= imageCount.x;
	}
	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;
}