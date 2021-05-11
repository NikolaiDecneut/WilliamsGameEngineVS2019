#pragma once

#include "Engine/GameEngine.h"

class LivesCount : public GameObject
{
public:
	LivesCount(sf::Vector2f pos);

	void draw();
	void update(sf::Time& elapsed);
private:
	sf::Text text_;
};

typedef  std::shared_ptr<LivesCount> LivesCountPtr;