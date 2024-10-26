#include "Fondo.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Fondo::Fondo() {
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 3");
	Texture bg;
	Sprite sp;

	bg.loadFromFile("fondo.jpg");
	sp.setTexture(bg);
	float scaleX = (float)App.getSize().x / (float)bg.getSize().x;
	float scaleY = (float)App.getSize().y / (float)bg.getSize().y;
	sp.setScale(scaleX, scaleY);

	while (App.isOpen())
	{
		App.clear();
		App.draw(sp);
		App.display();
	}
}
