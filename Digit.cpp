#include "Digit.h"

Digit::Digit()
{

}

Digit::Digit(int startvalue)
{
	m_StartValue = startvalue;

	for (int i = 0; i < 14; i++)
	{
		leds[i] = LED(m_StartValue+i);
	}
}


void Digit::init(int offset)
{
	m_StartValue = offset;

	for (int i = 0; i < 14; i++)
	{
		leds[i] = LED(m_StartValue + i);
	}
}

LED Digit::getLED(int i)
{
	return leds[i];
}


void Digit::setValue(int value)
{
	for (int i = 0; i < 14; i++)
	{

		leds[i].turnOff();
	}
	switch (value) {
	case -2:

	case 0:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Left
		leds[12].turnOn();
		leds[13].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		break;
	case 1:
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		break;
	case 2:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Left
		leds[12].turnOn();
		leds[13].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 3:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 4:

		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 5:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();

		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 6:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Left
		leds[12].turnOn();
		leds[13].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 7:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();

		break;
	case 8:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Left
		leds[12].turnOn();
		leds[13].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	case 9:
		// Top
		leds[4].turnOn();
		leds[5].turnOn();
		// Top Left
		leds[2].turnOn();
		leds[3].turnOn();
		// Top Right
		leds[6].turnOn();
		leds[7].turnOn();
		// Bottom
		leds[10].turnOn();
		leds[11].turnOn();
		// Bottom Right
		leds[8].turnOn();
		leds[9].turnOn();
		// Middel
		leds[0].turnOn();
		leds[1].turnOn();
		break;
	}
}


void Digit::setValue(int value, uint16_t r, uint16_t g, uint16_t b)
{
	
	//switch all of:
	for (int i = 0; i < 14; i++)
	{
		
		leds[i].turnOff();
	}
	switch (value) {
	case -2:

	case 0:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Left
		leds[12].setColor(r, g, b);
		leds[13].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		break;
	case 1:		
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		break;
	case 2:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Left
		leds[12].setColor(r, g, b);
		leds[13].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 3:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 4:
		
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 5:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);		
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);

		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 6:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Left
		leds[12].setColor(r, g, b);
		leds[13].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 7: 
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);

		break;
	case 8:
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Left
		leds[12].setColor(r, g, b);
		leds[13].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	case 9: 
		// Top
		leds[4].setColor(r, g, b);
		leds[5].setColor(r, g, b);
		// Top Left
		leds[2].setColor(r, g, b);
		leds[3].setColor(r, g, b);
		// Top Right
		leds[6].setColor(r, g, b);
		leds[7].setColor(r, g, b);
		// Bottom
		leds[10].setColor(r, g, b);
		leds[11].setColor(r, g, b);
		// Bottom Right
		leds[8].setColor(r, g, b);
		leds[9].setColor(r, g, b);
		// Middel
		leds[0].setColor(r, g, b);
		leds[1].setColor(r, g, b);
		break;
	}

}



int Digit::getOffset()
{
	return m_StartValue;
}

void Digit::showFlag(int i) {
	switch (i)
	{
	case 1: 
		// Top
		leds[4].setColor(0, 0, 0);
		leds[5].setColor(0, 0, 0);
		// Top Left
		leds[2].setColor(30, 0, 0);
		leds[3].setColor(0, 0, 0);
		// Top Right
		leds[6].setColor(0, 0, 0);
		leds[7].setColor(30, 0, 0);
		// Bottom
		leds[10].setColor(255, 255, 0);
		leds[11].setColor(255, 255, 0);
		// Bottom Left
		leds[12].setColor(255, 255, 0);
		leds[13].setColor(255, 0,0);
		// Bottom Right
		leds[8].setColor(255, 0, 0);
		leds[9].setColor(255, 255, 0);
		// Middel
		leds[0].setColor(255, 0, 0);
		leds[1].setColor(255, 0, 0);
		break;
	}
}

Digit::~Digit()
{
}
