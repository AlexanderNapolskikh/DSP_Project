#include "Grid.h"

Grid::Grid(sf::Vector2f sizeX, sf::Vector2f sizeY, sf::Vector2f position):
	axisX(sf::Vector2f(sizeX.x + LINE_DEL / 2, sizeX.y)),
	axisY(sf::Vector2f(sizeY.x, sizeY.y + LINE_DEL / 2))
{
	axisX.setFillColor(sf::Color::Color(128, 128, 128));
	axisX.setPosition(sf::Vector2f(position.x - LINE_DEL / 2, position.y));

	axisY.setFillColor(sf::Color::Color(128, 128, 128));
	axisY.setPosition(sf::Vector2f(position.x, position.y - LINE_DEL / 2));

	for (int i = 0; i < SIZE_OLINEX.x / DEL; i++)
	{
		risX.push_back(RisGraph(SIZE_RISX, sf::Vector2f(position.x + i * DEL, position.y), 7));
		risX[i].setText(std::to_string(i));
	}

	for (int j = 0; j < SIZE_OLINEY.y / DEL; j++)
	{
		risY.push_back(RisGraph(SIZE_RISY, sf::Vector2f(position.x, position.y + j * DEL), 7));
		risY[j].setPositionText(sf::Vector2f(position.x - 10, position.y + j*DEL));
		risY[j].setText("-" + std::to_string(j + 1));
	}
}


void Grid::render(sf::RenderWindow& window)
{
	// Построение осей
	window.draw(axisX);
	window.draw(axisY);

	// Построение сетки
	for (auto &iter : risX) {
		iter.render(window);
	}

	for (auto &iter : risY) {
		iter.render(window);
	}
}
