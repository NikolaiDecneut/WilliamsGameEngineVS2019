#include "Meteor.h"
#include "Explosion.h"
#include "Score.h"
#include "GameScene.h"
#include "GameOverScene.h"
sf::FloatRect Meteor::getCollisionRect()
{
	return sprite_.getGlobalBounds();
}

void Meteor::handleCollision(GameObject& otherGameObject)
{
	if (otherGameObject.hasTag("Laser"))
	{
		sf::Vector2f pos = sprite_.getPosition();
		ExplosionPtr explosion = std::make_shared<Explosion>(pos);
		GAME.getCurrentScene().addGameObject(explosion);
		GameScene& scene = (GameScene&)GAME.getCurrentScene();
		scene.increaseScore();
		otherGameObject.makeDead();

	}
	makeDead();
}
const float SPEED = 0.3f;

Meteor::Meteor(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/meteors.png"));
	sprite_.setPosition(pos);
	setCollisionCheckEnabled(true);
	assignTag("meteor");

}

void Meteor::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Meteor::update(sf::Time& Elapsed) {
	int msElapsed = Elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();

	if (pos.x < sprite_.getGlobalBounds().width * -1)
	{
		setCollisionCheckEnabled(true);
		GameScene& scene = (GameScene&)GAME.getCurrentScene();
		scene.decreaseLives ();
 		makeDead();
   	}
	else
	{
		sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));

	}
}


















