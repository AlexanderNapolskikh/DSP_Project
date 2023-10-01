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

		switchingTrigger();
	}
	
	//Кнопки режимов работы
	if (!actButton.getAcive()) {

		operMode = 0;

		if (loadSignalBut.getRectangle().getGlobalBounds().contains(localPosition) ) {

			switchingLoad();

			if (microBut.getAcive()) {

				switchingMicro();
			}

			if (loadSignalBut.getAcive()) {
				operMode = 1;
			}
		}
		else if (microBut.getRectangle().getGlobalBounds().contains(localPosition)) {

			switchingMicro();

			if (loadSignalBut.getAcive()) {

				switchingLoad();
			}

			if (microBut.getAcive()) {
				operMode = 2;
			}
		}

	}

}

void CtrlPan::switchingLoad()
{
	// Установка активности
	loadSignalBut.setActive(!loadSignalBut.getAcive());

	// On-off 
	sf::Color bufColor = loadSignalBut.getBackColor();

	loadSignalBut.changeBackColor(loadSignalBut.getFontColor());
	loadSignalBut.changeFontColor(bufColor);
}

void CtrlPan::switchingMicro()
{
	// Установка активности
	microBut.setActive(!microBut.getAcive());

	// On-off 
	sf::Color bufColor = microBut.getBackColor();

	microBut.changeBackColor(microBut.getFontColor());
	microBut.changeFontColor(bufColor);
}

void CtrlPan::switchingTrigger()
{
	actButton.setActive(!actButton.getAcive());

	if (!actButton.getAcive()) {
		actButton.setText("Start");
		actButton.changeBackColor(sf::Color::Color(0, 250, 154));
	}
	else {
		actButton.setText("Stop_");
		actButton.changeBackColor(sf::Color::Color(178, 34, 34));
	}
}

bool CtrlPan::getActive()
{
	return actButton.getAcive();
}

