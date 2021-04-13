#include "ship.h"

ship::ship()
{
	sprite_.setTexture(GAME.getTexture("Reasources/ship.png"));
	sprite_.setPostition(sf::Vector2f(100, 100));
}

void ship::draw()
{
	GAME.getRenderWindow().draw(sprite);
}