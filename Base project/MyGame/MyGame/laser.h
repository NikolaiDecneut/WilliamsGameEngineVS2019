#pragma once
#include "Engine/GameEngine.h"
class Laser : public GameObject
{
public : 

	sf::FloatRect getCollisionRect();

	Laser(sf::Vector2f pos);

	void draw();
	void update(sf::Time& elapsed);
	sf::FloatRect getcollisionrect();
private:
	sf::Sprite sprite_;
	sf::Sound laser_;
 };

typedef std::shared_ptr<Laser> LaserPtr;