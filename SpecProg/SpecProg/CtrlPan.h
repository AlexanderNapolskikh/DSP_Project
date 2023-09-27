#pragma once

#include "Button.h"
#include "RadioButton.h"

class CtrlPan
{

protected:

	// Элементы управления
	// __________________________________________________
		// Кнопка активации
	Button actButton;
		// Загрузка сигнала из файла
	Button loadSignalBut;
		// Микрофон
	Button microBut;
		// Добавление белого шума к сигналу
	RadioButton noiseBut;

public:
	CtrlPan();
	void render(sf::RenderWindow& window);
	void newEvent(sf::Event& event);
	bool getActive();

};

