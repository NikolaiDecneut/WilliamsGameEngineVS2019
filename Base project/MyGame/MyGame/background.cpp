#include "GameScene.h"
#include "background.h"
#include "ship.h"
//background::background()
//{
//	sprite_.setTexture(GAME.getTexture("Resources/background.png"));
//	sprite_.setPosition(sf::Vector2f(100, 100));
//}\


BackGround::Background(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite_.setPosition(pos);
	assignTag("background");

}

background::background()
{
}

void background::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Background::update(sf::Time& Elapsed) {
	int msElapsed = Elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();



