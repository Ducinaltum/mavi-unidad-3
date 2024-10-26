#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Cuadrados
{
public:
	Cuadrados();
	Sprite* CreateSprite(string textPath);
	const int TARGET_SQUARE_SIZE = 200;
};

