#pragma once

#include <SFML/Graphics.hpp>
#include "Grid.h"
#include "Polyline.h"
#include "Config.h"

class ShowWind
{

private:
	Grid grid;
	Polyline polyline;
	sf::RectangleShape rectangle;
	sf::Vector2f position;

public:
	ShowWind(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, sf::Color color—ontour);
	void zoomIn();
	void zoomOut();
	void render(sf::RenderWindow& window);

};

