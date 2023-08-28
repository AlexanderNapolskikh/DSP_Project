#pragma once

#include "ShowWind.h"
#include "CtrlPan.h"

class DigitalApp
{

private:
	sf::RenderWindow window;
	CtrlPan controls;
	ShowWind upGraph;
	ShowWind lowGraph;

public:
	DigitalApp();
	void run();

private:
	void processEvents();
	void update();
	void render();
	void start();
	void stop();
};

