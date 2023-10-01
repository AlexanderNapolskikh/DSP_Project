#pragma once

#include "Button.h"
#include "RadioButton.h"

class CtrlPan
{

protected:

	// �������� ����������
	// __________________________________________________
		// ������ ���������
	Button actButton;
		// �������� ������� �� �����
	Button loadSignalBut;
		// ��������
	Button microBut;
		// ���������� ������ ���� � �������
	RadioButton noiseBut;

	// ����� ������:
	// 0 - ���������� ����������;
	// 1 - �������� ������ � �����
	// 2 - ����������� ���������
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

