#include "CtrlPan.h"

CtrlPan::CtrlPan():
	actButton(sf::Vector2f(W_WINDS,H_WINDS/3),sf::Vector2f(W_WINDS / 8, (H_WINDS / 4) + 2*H_WINDS + H_WINDS/8), sf::Color::Color(0, 250, 154), sf::Color::Black, 32),
	loadSignalBut(CONTROL_BUTTON_SIZE, sf::Vector2f(W_WINDS + 120, (H_WINDS / 6)), sf::Color::Color(255, 255, 240), sf::Color::Black, 18),
	microBut(CONTROL_BUTTON_SIZE_MICRO, sf::Vector2f(W_WINDS + 140 + CONTROL_BUTTON_SIZE.x, (H_WINDS / 6)), sf::Color::Color(255, 255, 240), sf::Color::Black, 18),
	noiseBut(RADIO_RAD, sf::Vector2f(W_WINDS + 120 + CONTROL_BUTTON_SIZE.x/4, (H_WINDS / 4) + 2 *H_WINDS - 2 *RADIO_RAD), sf::Color::Color(255, 255, 240), sf::Color::Black, 24)
{
	actButton.setText("Start");
	loadSignalBut.setText("Load");
	microBut.setText("Micro");
	noiseBut.setText("Noise");
}

void CtrlPan::render(sf::RenderWindow& window)
{
	actButton.render(window);
	loadSignalBut.render(window);
	microBut.render(window);
	noiseBut.render(window);
} 

void CtrlPan::newEvent(sf::Event& event)
{
	sf::Vector2f localPosition(event.mouseButton.x, event.mouseButton.y);

	if (actButton.getRectangle().getGlobalBounds().contains(localPosition)) {

		actButton.setActive(!actButton.getAcive());
	}

}

bool CtrlPan::getActive()
{
	return actButton.getAcive();
}

