#include "Cuadrados.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Cuadrados::Cuadrados()
{
	
	sf::RenderWindow App(sf::VideoMode(TARGET_SQUARE_SIZE*2, TARGET_SQUARE_SIZE*2, 32), "Actividad 6");


	Sprite* sRed = CreateSprite("cuad_red.png");
	Sprite* sYellow = CreateSprite("cuad_yellow.png");
	Sprite* sBlue = CreateSprite("cuad_blue.png");
	Sprite* sBlack = CreateSprite("Ajedrezb.png");
	sRed->setPosition(0, 0);
	sYellow->setPosition(TARGET_SQUARE_SIZE, 0);
	sBlue->setPosition(0, TARGET_SQUARE_SIZE);
	sBlack->setPosition(TARGET_SQUARE_SIZE, TARGET_SQUARE_SIZE);

	while (App.isOpen())
	{
		App.clear();
		App.draw(*sRed);
		App.draw(*sYellow);
		App.draw(*sBlue);
		App.draw(*sBlack);
		App.display();
	}
}

Sprite* Cuadrados::CreateSprite(string texPath)
{
	Texture* t = new Texture();
	Sprite* s = new Sprite();
	t->loadFromFile(texPath);
	s->setTexture(*t);
	float scaleX, scaleY;
	scaleX = (float)TARGET_SQUARE_SIZE / (float)t->getSize().x;
	scaleY = (float)TARGET_SQUARE_SIZE / (float)t->getSize().y;
	s->setScale(scaleX, scaleY);
	return s;
}