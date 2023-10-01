#pragma once

#include "RisGraph.h"

class Grid
{

private:
	// Начальная точка расхождения координатной сетки
	sf::Vector2f startO_XY;
	// Разметки (линии)
	sf::RectangleShape axisX; // -> left
	sf::RectangleShape axisY; // -> up
	// Риски
	std::vector<RisGraph> risX;
	std::vector<RisGraph> risY;

public:

	Grid(sf::Vector2f sizeX, sf::Vector2f sizeY, sf::Vector2f position);
	void render(sf::RenderWindow& window);
};

