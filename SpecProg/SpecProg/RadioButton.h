#pragma once

#include <SFML/Graphics.hpp>
#include "Config.h"
#include <iostream>


class RadioButton
{
private:
	// Shape
	sf::CircleShape circle;
	sf::CircleShape circleIn;
	float radius;
	// Position
	sf::Vector2f position;
	// Text
	sf::Text text;
	sf::Font font;
	int fontSize;
	// Colors
	sf::Color colorFont;
	sf::Color backColor;
	// Active
	bool active = false;

public:
	RadioButton(float radius, sf::Vector2f position, sf::Color colorBack, sf::Color colorFont, int fontSize);
	void render(sf::RenderWindow& window);
	void setText(std::string str);
	void changeBackColor(sf::Color colorBack);
	void changeFontColor(sf::Color colorFont);
	sf::CircleShape& getCircle();
	sf::Color getFontColor();
	sf::Color getBackColor();
	void setActive(bool status);
	bool getAcive();
};

