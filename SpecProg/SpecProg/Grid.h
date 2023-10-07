#pragma once

#include "RisGraph.h"

class Grid
{
private:
	// Ќачальна€ точка расхождени€ координатной сетки
	sf::Vector2f startO_XY;
	// –азметки (линии)
	sf::RectangleShape axisX; // -> left
	sf::RectangleShape axisY; // -> up
	// –иски
	std::vector<RisGraph> risX;
	std::vector<RisGraph> risY;

public:

	// Grid содержит 2 размера осей X && Y; позиции массива делений; позици€ центральной оси
	Grid(sf::Vector2f sizeX, sf::Vector2f sizeY, sf::Vector2f position, sf::Vector2f posCenter);
	void render(sf::RenderWindow& window);
};

