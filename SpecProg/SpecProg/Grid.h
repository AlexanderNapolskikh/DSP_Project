#pragma once

#include "RisGraph.h"

class Grid
{

private:
	// ��������� ����� ����������� ������������ �����
	sf::Vector2f startO_XY;
	// �������� (�����)
	sf::RectangleShape axisX; // -> left
	sf::RectangleShape axisY; // -> up
	// �����
	std::vector<RisGraph> risX;
	std::vector<RisGraph> risY;

public:

	Grid(sf::Vector2f sizeX, sf::Vector2f sizeY, sf::Vector2f position);
	void render(sf::RenderWindow& window);
};

