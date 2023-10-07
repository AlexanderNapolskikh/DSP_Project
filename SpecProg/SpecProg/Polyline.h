#pragma once
#include <SFML/Graphics.hpp>
#include "Config.h"
#include "Label.h"

class Polyline
{
private:
	std::vector<sf::CircleShape> polLine;

public:
	Polyline();
	void takeData(std::vector<Label> data);
	void render(sf::RenderWindow& window);
};

