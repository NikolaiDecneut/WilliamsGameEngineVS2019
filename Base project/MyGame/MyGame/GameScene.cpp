#include "GameScene.h"
#include "ship.h"

GameScene::GameScene() 
{
	shipPtr ship = std::make_shared<ship>();
	addGameObject(ship);
}
