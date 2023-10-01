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

	// Режим работы:
	// 0 - считывание параметров;
	// 1 - загрузка данных с файла
	// 2 - подключение микрофона
	int operMode = 0;

public:
	CtrlPan();
	void render(sf::RenderWindow& window);
	void newEvent(sf::Event& event);
	void switchingLoad();
	void switchingMicro();
	void switchingTrigger();
	bool getActive();

};

