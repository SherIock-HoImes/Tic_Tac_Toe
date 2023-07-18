#include "Player.h"

Player::Player(Texture& texture, int& no)
{
	if (no == 0)
	{
		for (int i = 0; i < 9; i++)
		{
			elementSprite[i].setTexture(texture);
			elementSprite[i].setTextureRect(IntRect(0, 0, 200, 200));

		}

	}
}

void Player::progress()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			elementSprite[i * 3 + j].setPosition(200 * j, 200 * i);
		}
	}
}
