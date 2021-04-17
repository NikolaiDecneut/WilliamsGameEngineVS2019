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
	int fireTimer_ = 0;
};

typedef std::shared_ptr<ship> ShipPtr;
