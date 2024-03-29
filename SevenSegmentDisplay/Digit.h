#pragma once
#include "LED.h"
#include <stdint.h>
#include "options.h"


class Digit
{
public:
	Digit();
	~Digit();
	int numberOfLEDs;  // The number of LEDs is the sum over all the LEDs in the digit.
	void setValue(int value, uint16_t r, uint16_t g, uint16_t b);
	void setValue(int value);
	int getOffset();
	void init(int offset, int numberOfLedsPerSegment);
	LED getLED(int number);
	void showFlag(int i);

  
private:
	int m_StartValue;
  int m_LedsPerSegment;
	LED leds[MAX_LEDS_PER_SEGMENT * 7];
	void turnOn(int segment);
 void setColor(int segment,uint16_t r, uint16_t g, uint16_t b);

  const char Center = 0;
  const char TopLeft = 1;
  const char Top = 2;
  const char TopRight = 3;
  const char BottomRight = 4;
  const char Bottom =5;
  const char BottomLeft =6;
};
