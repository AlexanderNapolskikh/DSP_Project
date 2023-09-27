#include "RadioButton.h"

RadioButton::RadioButton(float radius, sf::Vector2f position, sf::Color colorBack, sf::Color colorFont, int fontSize) :
	circle(radius)
{
	this->position = position;
	this->radius = radius;
	this->fontSize = fontSize;
	this->colorFont = colorFont;
	this->backColor = colorBack;

	circle.setFillColor(colorBack);
	circle.setPosition(position);
	circle.setOutlineColor(sf::Color::Black);
	circle.setOutlineThickness(3);
}

void RadioButton::render(sf::RenderWindow& window)
{
	window.draw(circle);

	text.setFont(font);
	font.loadFromFile("arial.ttf");
	text.setCharacterSize(fontSize);
	text.setFillColor(colorFont);
	text.setPosition(position.x - fontSize/radius, position.y - radius/2 - fontSize / 2 - 2 * fontSize/radius);

	window.draw(text);
}

void RadioButton::setText(std::string str)
{
	this->text.setString(str);
}

void RadioButton::changeBackColor(sf::Color colorBack)
{
	circle.setFillColor(colorBack);
}

void RadioButton::changeFontColor(sf::Color colorFont)
{
	this->colorFont = colorFont;
	text.setFillColor(colorFont);
}

sf::CircleShape& RadioButton::getCircle()
{
	return this->circle;
}

sf::Color RadioButton::getFontColor()
{
	return colorFont;
}

sf::Color RadioButton::getBackColor()
{
	return circle.getFillColor();
}

void RadioButton::setActive(bool status)
{
	active = status;
	(active) ? setText("Start") : setText("Stop");
}

bool RadioButton::getAcive()
{
	return active;
}