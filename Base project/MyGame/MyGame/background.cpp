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

BackGround::Background(sf::Vector2f pos)
{
	sprite1_.setTexture(GAME.getTexture("Resources/background.png"));
	sprite2_.setTexture(GAME.getTexture("Resources/background.png"));

	sprite1_.setPosition(pos);
	pos.x += 800;
	sprite2_.setPosition(pos);
	assignTag("Background");
}


void Background::draw()
{
	GAME.getRenderWindow().draw(sprite1_);
	GAME.getRenderWindow().draw(sprite2_);
}

