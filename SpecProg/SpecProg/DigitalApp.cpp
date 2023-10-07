#include "DigitalApp.h"

DigitalApp::DigitalApp() :
	window(sf::VideoMode(WIDTH_WIND, HEIGHT_WIND), "(-_Spectrum Analyzer_-)"),
	// Signal
	upGraph(sf::Vector2f(W_WINDS,H_WINDS), sf::Vector2f(W_WINDS/8, H_WINDS/6), sf::Vector2f( (W_WINDS / 8), (H_WINDS / 6) + SIZE_OLINEY.y / 2 - 3), sf::Color::Color(255, 255, 240), sf::Color::Black),
	// Spectrum 
	lowGraph(sf::Vector2f(W_WINDS, H_WINDS), sf::Vector2f(W_WINDS/8, (H_WINDS/4) + H_WINDS), sf::Vector2f(W_WINDS / 8, (H_WINDS / 4) + H_WINDS), sf::Color::Color(255, 255, 240), sf::Color::Black)
{
	
	// Create_label (freq, dB)
	for (int i = 0; i < 4; i++)
	{
		freqLabel.push_back(Label(SIZE_LABEL, sf::Vector2f(WIDTH_WIND/1.65, HEIGHT_WIND / 3 + i * (DISTANCE+SIZE_LABEL.y)), sf::Color::Color(240, 255, 255), 16));
		freqLabel[i].setTitleText("freq_" + std::to_string(i+1));
		dBLabel.push_back(Label(SIZE_LABEL, sf::Vector2f(WIDTH_WIND/1.22, HEIGHT_WIND / 3 + i * (DISTANCE+SIZE_LABEL.y)), sf::Color::Color(240, 255, 255), 16));
		dBLabel[i].setTitleText("dB_" + std::to_string(i+1));
	}
	
	// Defaults
	// __________________________
	// _freq_
	freqLabel[0].setText("440");
	freqLabel[1].setText("1000");
	freqLabel[2].setText("5000");
	freqLabel[3].setText("6000");

	// _dB_
	dBLabel[0].setText("-5");
	dBLabel[1].setText("-15");
	dBLabel[2].setText("-30");
	dBLabel[3].setText("-5");
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
		if (activeField != nullptr) {
			activeField->deleteText();
		}

		if (event.type == sf::Event::MouseButtonReleased) {
			
			controls.newEvent(event);

			sf::Vector2f localPosition(event.mouseButton.x, event.mouseButton.y);
			for (int i = 0; i < 4; i++)
			{
				if (freqLabel[i].getRectangle().getGlobalBounds().contains(localPosition)) {
									
					activeField = &freqLabel[i];
				}

				if (dBLabel[i].getRectangle().getGlobalBounds().contains(localPosition)) {

					activeField = &dBLabel[i];
				}

			}
		}
		else if (event.type == sf::Event::KeyReleased && activeField != nullptr) {
			
			int key = event.key.code;
			if (event.key.code == sf::Keyboard::Backspace && activeField->getText() != "" && activeField->getText() != "-") {
				
				activeField->deleteText();
			}
			else if (key >= 26 && key <= 35) {

				activeField->addText(std::to_string(key - 26));
			}
			else if (event.key.code == sf::Keyboard::Enter && activeField != nullptr) {
				activeField = nullptr;
			}

		}
		else if (event.type == sf::Event::Closed) {
			window.close();
		}

		if (activeField != nullptr) {
			activeField->addText("|");
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

	// Draw box-wind
	upGraph.render(window);
	lowGraph.render(window);

	controls.render(window);
	
	// Label draw (freq)
	for (auto &iter : freqLabel)
	{
		iter.render(window);
	}

	// LAbel draw (dB)
	for (auto &iter : dBLabel)
	{
		iter.render(window);
	}

	window.display();
}

// Global action

void DigitalApp::start()
{
	
}

void DigitalApp::stop()
{

}
