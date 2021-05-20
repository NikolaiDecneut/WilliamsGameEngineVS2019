#include "GameScene.h"
#include "background.h"
#include "ship.h"
#include "Explosion.h"
//background::background()
//{
//	sprite_.setTexture(GAME.getTexture("Resources/background.png"));
//	sprite_.setPosition(sf::Vector2f(100, 100));
//}\

//
// top two pics in discord are in this.cpp file
// the bottom one u put in gamescene.cpp file
//
const float SPEED = .1f;

Background::Background(sf::Vector2f pos)
{
	sprite1.setTexture(GAME.getTexture("Resources/background.png"));
	sprite2.setTexture(GAME.getTexture("Resources/background.png"));

	sprite1.setPosition(pos);
	pos.x += 800;
	sprite2.setPosition(pos);
	assignTag("Background");
};


void Background::draw()
{
	GAME.getRenderWindow().draw(sprite1);
	GAME.getRenderWindow().draw(sprite2);
};

void Background::update(sf::Time& elapsed)
{

	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite1.getPosition();
	if (pos.x < sprite1.getGlobalBounds().width * -1)
	{
		pos.x = 800;
	}
	sprite1.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
	pos = sprite2.getPosition();
	if(pos.x < sprite2.getGlobalBounds(). width * -1)
	{
		pos.x = 800;
	}
	sprite2.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
}
