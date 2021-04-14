#include "GameScene.h"
#include "Ship.h"

GameScene::GameScene() 
{
	shipPtr ship = std::make_shared<ship>();
	addGameObject(ship);
}
