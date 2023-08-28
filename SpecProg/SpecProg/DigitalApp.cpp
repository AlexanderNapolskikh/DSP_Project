#include "DigitalApp.h"

DigitalApp::DigitalApp() :
	window(sf::VideoMode(WIDTH_WIND, HEIGHT_WIND), "(-_Spectrum Analyzer_-)"),
	upGraph(sf::Vector2f(W_WINDS,H_WINDS), sf::Vector2f(W_WINDS/5, H_WINDS/4), sf::Color::Color(211, 211, 211), sf::Color::Color(47, 79, 79)),
	lowGraph(sf::Vector2f(W_WINDS, H_WINDS), sf::Vector2f(W_WINDS / 5, (H_WINDS / 5) + 1.2*H_WINDS), sf::Color::Color(211, 211, 211), sf::Color::Color(47, 79, 79))
{

}

void DigitalApp::run()
{

	while (window.isOpen())
	{
		processEvents();
		update();
		render();
	}

}

void DigitalApp::processEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			window.close();
		}
	}
}

void DigitalApp::update()
{
}

void DigitalApp::render()
{
	window.clear(sf::Color::Color(112, 128, 144));
	upGraph.render(window);
	lowGraph.render(window);
	window.display();
}

void DigitalApp::start()
{

}

void DigitalApp::stop()
{

}
