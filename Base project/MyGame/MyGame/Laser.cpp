#include  "Laser.h"

const float SPEED = 1.2f;
Laser::Laser(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/laser.png"));
	sprite_.setPosition(pos);
	assignTag("Laser");
}

void Laser::draw()
{

}



