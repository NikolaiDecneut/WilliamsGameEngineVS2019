#pragma once

#include "Engine/GameEngine.h"

class ship : public GameObject
{
public:
	
	ship();

	
	void draw();
	void update(sf::Time& elapsed);
private: 
	sf::Sprite sprite_;
};

typedef std::shared_ptr<ship> ShipPtr;
