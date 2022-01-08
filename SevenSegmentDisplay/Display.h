#pragma once
#include <Adafruit_NeoPixel.h>
#include "Digit.h"

#define DIGITS  4  // to avoid "magic numbers": this is a displaysoftware adjusted for 4 digits

class Display
{
public:
	Display(int pin, int ledsPerSegment);
	~Display();
	void printStatus();
	void show(int digit, int number, int r, int g, int b);
	void showA(int number, int r, int g, int b);
	void showB(int number, int r, int g, int b);
	void show(int digit, int number);
	void showA(int number);
	void showB(int number);
	int show(int number, int r, int g, int b);
	void clear();
	void init();
	int debugvalue(int value);
	void showFlag(int i);
private:
	void ShowDigits();
	int m_pin;
  int m_LEDperSegment;
	Adafruit_NeoPixel m_strip;
	Digit digits[DIGITS];
	int getHundreds(int value);
	int getThousands(int number);
	int getTens(int number);
	int getOnes(int number);

};
