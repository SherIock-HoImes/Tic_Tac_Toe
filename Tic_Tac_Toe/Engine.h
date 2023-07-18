#pragma once
#include "Player.h"

class Engine : protected Player
{
public:
	Engine(unsigned int, unsigned int, string);
	void run();

	~Engine();
private:
	ContextSettings settings;
	RenderWindow* window;
	Clock deltaClock;
	Time dt;
	Event event;
	Player mPlayer;
};

