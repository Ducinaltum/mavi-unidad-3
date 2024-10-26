#include "Transparencias.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;
Transparencias::Transparencias()
{
	Texture tRedDot;
	Texture tBlueDot;
	Sprite sTopLeft;
	Sprite sTopRight;
	Sprite sBotLeft;
	Sprite sBotRight;
	Sprite sBlueDot;
	float tWidth, tHeight;

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 7");

	tRedDot.loadFromFile("rcircle.png");
	tBlueDot.loadFromFile("bcircle.png");
	tWidth = (float)tRedDot.getSize().x;
	tHeight = (float)tRedDot.getSize().y;
	sTopLeft.setTexture(tRedDot);
	sTopRight.setTexture(tRedDot);
	sBotLeft.setTexture(tRedDot);
	sBotRight.setTexture(tRedDot);
	sBlueDot.setTexture(tBlueDot);

	sTopLeft.setPosition(0, 0);
	sTopRight.setPosition(App.getSize().x - tWidth, 0);
	sBotLeft.setPosition(0, App.getSize().y - tHeight);
	sBotRight.setPosition(App.getSize().x - tWidth, App.getSize().y - tHeight);
	sBlueDot.setOrigin(tBlueDot.getSize().x / 2, tBlueDot.getSize().y / 2);
	sBlueDot.setPosition(App.getSize().x / 2, App.getSize().y / 2);
	while (App.isOpen())
	{
		App.clear();
		App.draw(sTopLeft);
		App.draw(sTopRight);
		App.draw(sBotLeft);
		App.draw(sBotRight);
		App.draw(sBlueDot);
		App.display();
	}
}