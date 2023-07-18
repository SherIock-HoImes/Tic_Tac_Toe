#include "Engine.h"

int main()
{
	Texture elementTexture;
	elementTexture.loadFromFile("img/elements.png");

	Engine* engine = new Engine(600, 600, "Tic Tac Toe");
	Player* player = new Player(elementTexture, 0);
	
	engine->run();
	player->progress();

	delete engine;
	delete player;

	return 0;
}