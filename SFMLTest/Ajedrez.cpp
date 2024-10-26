#include "Ajedrez.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

Ajedrez::Ajedrez() {
	//Declaration
	const int targetSize = 800 / 8;
	Texture *tWhiteTile = new Texture();
	Texture *tBlackTile = new Texture();
	int tWidth, tHeight;
	float scaleX, scaleY;
	Sprite* board[8*8];

	//Values initialization
	tWhiteTile->loadFromFile("chessw.png");
	tBlackTile->loadFromFile("chessb.png");
	tWidth = tWhiteTile->getSize().x;
	tHeight = tWhiteTile->getSize().y;
	scaleX = targetSize / (float)tWidth;
	scaleY = targetSize / (float)tHeight;
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			int tilePos = (y * 8) + x;
			Texture* t = (x + y) % 2 == 0 ? tWhiteTile : tBlackTile;
			board[tilePos] = new Sprite();
			board[tilePos]->setPosition(targetSize * x, targetSize * y);
			board[tilePos]->setTexture(*t);
			board[tilePos]->setScale(scaleX, scaleY);
		}
	}

	sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Actividad 2");
	while (App.isOpen())
	{
		App.clear();
		for (int x = 0; x < 8 * 8; x++)
		{
			App.draw(*board[x]);
		}
		App.display();
	}
}