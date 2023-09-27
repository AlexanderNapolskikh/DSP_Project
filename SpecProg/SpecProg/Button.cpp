#include "Button.h"

Button::Button(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, sf::Color colorFont, int fontSize) :
	rectangle(size)
{
	this->position = position;
	this->size = size;
	this->fontSize = fontSize;
	this->colorFont = colorFont;
	this->backColor = colorBack;

	rectangle.setFillColor(colorBack);
	rectangle.setPosition(position);
	rectangle.setOutlineColor(sf::Color::Black);
	rectangle.setOutlineThickness(3);
}

void Button::render(sf::RenderWindow& window)
{
	window.draw(rectangle);

	text.setFont(font);
	font.loadFromFile("arial.ttf");
	text.setCharacterSize(fontSize);
	text.setFillColor(colorFont);
	text.setPosition(position.x  + (size.x / 2) - fontSize * text.getString().getSize() / 4, position.y + (size.y / 2) - (fontSize/2) );

	window.draw(text);
}

void Button::setText(std::string str)
{
	this->text.setString(str);
}

void Button::changeBackColor(sf::Color colorBack)
{
	rectangle.setFillColor(colorBack);
}

void Button::changeFontColor(sf::Color colorFont)
{
	this->colorFont = colorFont;
	text.setFillColor(colorFont);
}

sf::RectangleShape& Button::getRectangle()
{
	return this->rectangle;
}

sf::Color Button::getFontColor()
{
	return colorFont;
}

sf::Color Button::getBackColor()
{
	return rectangle.getFillColor();
}

void Button::setActive(bool status)
{
	active = status;

	if (!active) {
		setText("Start");
		changeBackColor(sf::Color::Color(0, 250, 154));
	}
	else {
		setText("Stop_");
		changeBackColor(sf::Color::Color(178, 34, 34));
	}
}

bool Button::getAcive()
{
	return active;
}

