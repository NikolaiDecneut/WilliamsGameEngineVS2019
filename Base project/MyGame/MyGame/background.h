#pragma once
#include "Engine/GameEngine.h"

class Background : public GameObject
{
public:

	Background(sf::Vector2f pos);

	
	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Sprite sprite1;
	sf::Sprite sprite2;
};

typedef std::shared_ptr<Background> BackgroundPtr;
