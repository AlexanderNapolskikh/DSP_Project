#include "ShowWind.h"

ShowWind::ShowWind(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, sf::Color colorŅontour) :
	rectangle(size)
{
	// Synchronization of fields
	this->position = position;

	// Rectangle
	rectangle.setFillColor(colorBack);
	rectangle.setPosition(position);
	rectangle.setOutlineColor(colorŅontour);
	rectangle.setOutlineThickness(5);
}

void ShowWind::zoomIn()
{

}

void ShowWind::zoomOut()
{

}

void ShowWind::render(sf::RenderWindow& window)
{
	window.draw(rectangle);
}
