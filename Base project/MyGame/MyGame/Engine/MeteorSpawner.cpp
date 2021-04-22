#include "MeteorSpawner.h"

//wait 1000ms before meteor spawns
const int SPAWN_DELAY = 1000;

void MeteorSpawner::update(sf::Time& elapsed) {
	int msElapsed = elapsed.asMilliseconds();
	timer_ -= msElapsed;

	if (timer_ <= 0)
	{
		timer_ = SPAWN_DELAY;
		sf::Vector2u size = GAME.getRenderWindow().getSize();
		float meteorX = (float)(rand() % size.y);

		MeteorPtr meteor = std::make_shared<Meteor>(sf::Vector2f(meteorX, meteory));
		GAME.getCurrentScene().addGameObject(meteor);
	}
}

