#pragma once

#include <SFML/Graphics.hpp>
#include "Config.h"
#include <iostream>
#include <vector>

class RisGraph
{
private:
	// Shape
	sf::RectangleShape rectangle;
	sf::Vector2f size;
	// Position
	sf::Vector2f position;
	// Text
	sf::Text text;
	sf::Font font;
	int fontSize;

public:
	RisGraph(sf::Vector2f size, sf::Vector2f position, int fontSize);
	void render(sf::RenderWindow& window);
	void setText(std::string str);
	void setPositionText(sf::Vector2f position);

};