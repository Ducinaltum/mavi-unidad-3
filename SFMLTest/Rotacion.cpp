#include "Rotacion.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Rotacion::Rotacion()
{
	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Actividad 5");
	Texture *t = new Texture();
	Sprite *s = new Sprite();
	t->loadFromFile("cuad_blue.png");
	s->setTexture(*t);
	s->setOrigin(t->getSize().x / 2, t->getSize().y / 2);
	s->setPosition(
		App.getSize().x / 2,
		App.getSize().y / 2
	);
	while (App.isOpen())
	{
		s->rotate(0.01f);
		App.clear();
		App.draw(*s);
		App.display();
	}
}



