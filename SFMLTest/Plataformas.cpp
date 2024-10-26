#include "Plataformas.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Plataformas::Plataformas()
{
	const int unit = 35;
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 4");
	Texture* tGround = new Texture();
	Sprite* sPlatforms[8];
	float scaleX, scaleY;
	tGround->loadFromFile("plataforma.jpg");
	scaleX = (float) unit / (float) tGround->getSize().x;
	scaleY = (float) unit / (float) tGround->getSize().y;
	int i = 0;
	for (int i = 0; i < 8; i++)
	{
		sPlatforms[i] = new Sprite();
		sPlatforms[i]->setTexture(*tGround);
		sPlatforms[i]->setPosition( 
			unit + ((unit * 2) * i), 
			App.getSize().y - (unit * (i + 1))
		);
		sPlatforms[i]->setScale(scaleX, scaleY * (i+1));
	}

	sPlatforms[7]->setPosition(
		sPlatforms[7]->getPosition().x,
		sPlatforms[7]->getPosition().y + unit
	);
	sPlatforms[7]->setScale(scaleX * 7, scaleY);

	while (App.isOpen())
	{
		App.clear();
		for (int i = 0; i < 8; i++)
		{
			App.draw(*sPlatforms[i]);
		}
		App.display();
	}
}
