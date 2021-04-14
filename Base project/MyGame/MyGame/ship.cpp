#include "ship.h"
const float SPEED = 0.3f;
//omitted code stuffs
void ship::update(sf::Time& elapsed) {
	sf::Vector2f pos = sprite_.getPosition();
	float x = pos.x;
	float y = pos.y;
	int msElapsed = elapsed.asMilliseconds();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))	y -= SPEED * msElapsed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))	y += SPEED * msElapsed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))	x -= SPEED * msElapsed;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))	x += SPEED * msElapsed;

	sprite_.setPosition(sf::Vector2f(x, y));
}
ship::ship()
{
	sprite_.setTexture(GAME.getTexture("Reasources/ship.png"));
	sprite_.setPosition(sf::Vector2f(100, 100));
}

void ship::draw()
{
	GAME.getRenderWindow(). draw(sprite);
}