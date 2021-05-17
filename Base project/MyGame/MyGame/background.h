#pragma once
#include "Engine/GameEngine.h"

class background : public GameObject
{
public:

	background();


	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite_;

};

typedef std::shared_ptr<background> backgroundPtr;
