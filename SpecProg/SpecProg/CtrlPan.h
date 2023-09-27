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

public:
	CtrlPan();
	void render(sf::RenderWindow& window);
	void newEvent(sf::Event& event);
	bool getActive();

};

