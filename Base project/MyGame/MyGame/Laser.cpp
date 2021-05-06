#include  "Laser.h"

sf::FloatRect Laser::getCollisionRect()
{
	return sprite_.getGlobalBounds();
}

const float SPEED = 0.9f;
Laser::Laser(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/laser.png"));
	sprite_.setPosition(pos);
	assignTag("Laser");
	laser_.setBuffer(GAME.getSoundBuffer("Resources/laser.wav"));
	laser_.play();
}

void Laser::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}


void Laser::update(sf::Time& elapsed) 
{  
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();


	if (pos.x > GAME.getRenderWindow().getSize().x)
	{
		makeDead();
	}
	else
	{
		sprite_.setPosition(sf::Vector2f(pos.x + SPEED * msElapsed, pos.y));
	}
}





