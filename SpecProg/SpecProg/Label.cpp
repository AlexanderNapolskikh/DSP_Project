#include "Label.h"

Label::Label(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, int fontSize):
	rectangle(size)
{
	this->position = position;
	this->size = size;
	this->fontSize = fontSize;

	rectangle.setFillColor(colorBack);
	rectangle.setPosition(position);
	rectangle.setOutlineColor(sf::Color::Black);
	rectangle.setOutlineThickness(2);
}

void Label::render(sf::RenderWindow& window)
{
	window.draw(rectangle);

	textTitle.setFont(font);
	text.setFont(font);
	font.loadFromFile("arial.ttf");
	textTitle.setCharacterSize(fontSize);
	text.setCharacterSize(fontSize);
	textTitle.setFillColor(sf::Color::Black);
	text.setFillColor(sf::Color::Color(128, 128, 128));
	textTitle.setPosition(position.x - (fontSize * textTitle.getString().getSize() / 1.6), position.y + (size.y / 2) - (fontSize / 2));
	text.setPosition(position.x + (size.x / 2) - fontSize * text.getString().getSize() / 4, position.y + (size.y / 2) - (fontSize / 2));

	window.draw(textTitle);
	window.draw(text);
}

void Label::setText(std::string str)
{
	this->text.setString(str);
}

void Label::setTitleText(std::string str)
{
	this->textTitle.setString(str);
}
