#include "GameScene.h"
#include "Ship.h"
#include "MeteorSpawner.h"
#include "Explosion.h"
#include "Score.h"
#include "GameOverScene.h"
#include "LivesCount.h"

int GameScene::getLives()
{
	return lives_;
}

void GameScene::decreaseLives()
{
	--lives_;

	if (lives_ == 0)
	{
		GameOverScenePtr gameOverScene = std::make_shared<GameOverScene>(score_);
			GAME.setScene(gameOverScene);
	}
}

int GameScene::getScore()
{
	return score_;
}

void GameScene::increaseScore()
{
	++score_;
}
GameScene::GameScene()
{
	ShipPtr ship = std::make_shared<Ship>();
	addGameObject(ship);
	MeteorSpawnerPtr meteorSpawner = std::make_shared<MeteorSpawner>();
	addGameObject(meteorSpawner);

	//counts score
	ScorePtr score = std::make_shared<Score>(sf::Vector2f(10.0f, 10.0f));
	addGameObject(score);
	//counts lives
	LivesCountPtr livesCount = std::make_shared<LivesCount>(sf::Vector2f(150.0f, 10.0f));
	addGameObject(livesCount);
};
//if class: decreaseLives(true) {

//}
