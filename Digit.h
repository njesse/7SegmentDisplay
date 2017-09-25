#pragma once
#include "LED.h"
#include <stdint.h>
class Digit
{
public:
	Digit(int offset);
	Digit();
	~Digit();
	const int numberOfLEDs = 14;
	void setValue(int value, uint16_t r, uint16_t g, uint16_t b);
	void setValue(int value);
	int getOffset();
	void init(int offset);
	LED getLED(int number);
	void showFlag(int i);
private:
	int m_StartValue;
	LED leds[14];
	
};

