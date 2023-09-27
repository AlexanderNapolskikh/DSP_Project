#include "DigitalApp.h"

DigitalApp::DigitalApp() :
	window(sf::VideoMode(WIDTH_WIND, HEIGHT_WIND), "(-_Spectrum Analyzer_-)"),
	upGraph(sf::Vector2f(W_WINDS,H_WINDS), sf::Vector2f(W_WINDS/8, H_WINDS/6), sf::Color::Color(255, 255, 240), sf::Color::Black),
	lowGraph(sf::Vector2f(W_WINDS, H_WINDS), sf::Vector2f(W_WINDS/8, (H_WINDS/4) + H_WINDS), sf::Color::Color(255, 255, 240), sf::Color::Black)
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
		if (event.type == sf::Event::MouseButtonReleased) {
			controls.newEvent(event);
		}
	}
}

void DigitalApp::update()
{
	if (controls.getActive()) {

		start();
		flagClS = true;
	}
	else if(flagClS){

		stop();
		flagClS = false;
	}
}

void DigitalApp::render()
{
	window.clear(sf::Color::Color(0, 139, 139));
	upGraph.render(window);
	lowGraph.render(window);
	controls.render(window);
	window.display();
}

// Global action

void DigitalApp::start()
{

}

void DigitalApp::stop()
{

}
