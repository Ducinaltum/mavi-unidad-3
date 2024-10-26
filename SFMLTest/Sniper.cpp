#include "Sniper.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Sniper::Sniper() {
	Texture tRedDot;
	Sprite sTopLeft;
	Sprite sTopRight;
	Sprite sBotLeft;
	Sprite sBotRight;
	float tWidth, tHeight;

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 1");

	tRedDot.loadFromFile("rcircle.png");
	tWidth = (float)tRedDot.getSize().x;
	tHeight = (float)tRedDot.getSize().y;
	sTopLeft.setTexture(tRedDot);
	sTopRight.setTexture(tRedDot);
	sBotLeft.setTexture(tRedDot);
	sBotRight.setTexture(tRedDot);
	sTopLeft.setPosition(0, 0);
	sTopRight.setPosition(App.getSize().x - tWidth, 0);
	sBotLeft.setPosition(0, App.getSize().y - tHeight);
	sBotRight.setPosition(App.getSize().x - tWidth, App.getSize().y - tHeight);

	while (App.isOpen())
	{
		App.clear();
		App.draw(sTopLeft);
		App.draw(sTopRight);
		App.draw(sBotLeft);
		App.draw(sBotRight);
		App.display();
	}
}
