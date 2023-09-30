#pragma once

#include <SFML/Graphics.hpp>
#include "Config.h"
#include <iostream>

class Label
{

private:
	// Shape
	sf::RectangleShape rectangle;
	sf::Vector2f size;
	// Position
	sf::Vector2f position;
	// Text
	sf::Text textTitle;
	sf::Text text;
	sf::Font font;
	int fontSize;

public:
	Label(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, int fontSize);
	void render(sf::RenderWindow& window);
	void setText(std::string str);
	void setTitleText(std::string str);
};

