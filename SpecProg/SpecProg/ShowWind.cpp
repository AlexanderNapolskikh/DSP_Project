#include "ShowWind.h"

ShowWind::ShowWind(sf::Vector2f size, sf::Vector2f position, sf::Color colorBack, sf::Color color—ontour) :
	rectangle(size)
{
	// Synchronization of fields
	this->position = position;

	// Rectangle
	rectangle.setFillColor(colorBack);
	rectangle.setPosition(position);
	rectangle.setOutlineColor(color—ontour);
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
