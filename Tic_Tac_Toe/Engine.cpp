#pragma once
#include "Engine.h"

Engine::Engine(unsigned int _width, unsigned int _height, string _window_name)
{
	settings.antialiasingLevel = 8;
	window = new RenderWindow(VideoMode(_width, _height), _window_name, Style::Titlebar, settings);
}

void Engine::run()
{
	Vector2i pos = Mouse::getPosition(*window);

	Texture fieldTexture;
	fieldTexture.loadFromFile("img/field.png");
	Sprite fieldSprite(fieldTexture);

	while (window->isOpen())
	{
		while (window->pollEvent(event))
		{
			switch (event.type)
			{
			case Event::KeyPressed:
				if (Keyboard::Escape)
					window->close();
				break;
			case Event::MouseButtonPressed:
				if (Mouse::Left)
				{
					for (int i = 0; i < 9; i++)
					{
						if (elementSprite[i].getGlobalBounds().contains(pos.x, pos.y))
						{

						}
					}
				}
				break;
			}
		}

		window->draw(fieldSprite);
		for (int i = 0; i < 9; i++)
		{
			window->draw(elementSprite[i]);
		}

		window->display();
		window->clear();
		dt = deltaClock.restart();
	}
}

Engine::~Engine()
{
	delete window;
}