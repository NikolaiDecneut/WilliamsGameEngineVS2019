#include "LivesCount.h"
#include "GameScene.h"
#include <sstream>

LivesCount::LivesCount(sf::Vector2f pos)
{
	text_.setFont(GAME.getFont("Resources/Courneuf-Regular.ttf"));
	text_.setPosition(pos);
	text_.setCharacterSize(24);
	text_.setFillColor(sf::Color::White);
	assignTag("Lives Counter: ");
}

void LivesCount::draw()
{
	GAME.getRenderWindow().draw(text_);
}

void LivesCount::update(sf::Time& elapsed) {
	GameScene& scene = (GameScene&)GAME.getCurrentScene();

	std::stringstream stream;
	stream << "Lives: " << scene.getScore();

	text_.setString(stream.str());
}