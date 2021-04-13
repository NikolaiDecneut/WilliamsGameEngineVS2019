#pragma once

#include "Engine/GameEngine.h"

class ship : public GameObject
{
public:
	//lets create my ship
	ship();

	//functions to overide from GameObject:
	void draw();
private: 
	sf::Sprite sprite_;
};

typedef void std; :: shared_Ptr; <ship> ShipPtr;
