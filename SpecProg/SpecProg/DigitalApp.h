#pragma once

#include "ShowWind.h"
#include "CtrlPan.h"

class DigitalApp
{

private:
	sf::RenderWindow window;
	// Controls panel
	CtrlPan controls;
	// Window showInfo about signal
	ShowWind upGraph;
	ShowWind lowGraph;
	//Label data

	// Clear, stop flag
	bool flagClS = false;

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

