#include "Grid.h"

Grid::Grid(sf::Vector2f sizeX, sf::Vector2f sizeY, sf::Vector2f position, sf::Vector2f posCenter):
	axisX(sf::Vector2f(sizeX.x + LINE_DEL / 2, sizeX.y)),
	axisY(sf::Vector2f(sizeY.x, sizeY.y + LINE_DEL / 2))
{

	axisX.setFillColor(sf::Color::Color(255, 0, 0));
	axisX.setPosition(sf::Vector2f(posCenter.x - LINE_DEL / 2, posCenter.y));

	axisY.setFillColor(sf::Color::Color(255, 0, 0));
	axisY.setPosition(sf::Vector2f(position.x, position.y - LINE_DEL / 2));

	for (int i = 0; i < SIZE_OLINEX.x / DEL; i++)
	{
		risX.push_back(RisGraph(SIZE_RISX, sf::Vector2f(position.x + i * DEL, position.y), 7));
		risX[i].setPositionText(sf::Vector2f(position.x + i * DEL - 2, position.y - 5));
		risX[i].setText(std::to_string(i));
	}

	for (int j = 1; j < SIZE_OLINEY.y / DEL; j++)
	{
		risY.push_back(RisGraph(SIZE_RISY, sf::Vector2f(position.x, position.y + j * DEL), 7));
		risY[j-1].setPositionText(sf::Vector2f(position.x - 10, position.y + j*DEL));
		risY[j-1].setText("-" + std::to_string(j));
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
