#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include <vector>

using namespace std;
using namespace sf;

class Player
{
public:
	Player(Texture&, int&);
	void progress();
protected:
	Sprite elementSprite[9];
};

