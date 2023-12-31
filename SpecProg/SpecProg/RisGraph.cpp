#include "RisGraph.h"

RisGraph::RisGraph(sf::Vector2f size, sf::Vector2f position, int fontSize):
	rectangle(size)
{
	this->position = position;
	this->size = size;
	this->fontSize = fontSize;

	rectangle.setFillColor(sf::Color::Black);
	rectangle.setPosition(position);
}

void RisGraph::render(sf::RenderWindow& window)
{
	window.draw(rectangle);

	text.setFont(font);
	font.loadFromFile("arial.ttf");
	text.setCharacterSize(fontSize);
	text.setFillColor(sf::Color::Black);

	window.draw(text);
}

void RisGraph::setText(std::string str)
{
	this->text.setString(str);
}

void RisGraph::setPositionText(sf::Vector2f position)
{
	text.setPosition(sf::Vector2f(position.x, position.y - 5));
}
