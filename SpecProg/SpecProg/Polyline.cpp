#include "Polyline.h"

Polyline::Polyline()
{
	// default
}

void Polyline::takeData(std::vector<Label> data)
{

}

void Polyline::render(sf::RenderWindow& window)
{
	for(auto iter : polLine)
	{
		window.draw(iter);
	}
}
