#include "ShowWind.h"

ShowWind::ShowWind(sf::Vector2f size, sf::Vector2f position, sf::Vector2f gridPos, sf::Color colorBack, sf::Color color—ontour) :
	rectangle(size),
	grid(SIZE_OLINEX, SIZE_OLINEY, sf::Vector2f(position.x + LINE_DEL, position.y + LINE_DEL), sf::Vector2f(gridPos.x + LINE_DEL, gridPos.y + LINE_DEL))
{
	// Synchronization of fields
	this->position = position;

	// Rectangle
	rectangle.setFillColor(colorBack);
	rectangle.setPosition(position);
	rectangle.setOutlineColor(color—ontour);
	rectangle.setOutlineThickness(5);
}

/*
void ShowWind::zoomIn()
{

}
*/

/*
void ShowWind::zoomOut()
{

}
*/

void ShowWind::render(sf::RenderWindow& window)
{
	window.draw(rectangle);
	grid.render(window);
}
