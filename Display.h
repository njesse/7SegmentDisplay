#pragma once
#include <Adafruit_NeoPixel.h>
#include "Digit.h"
class Display
{
public:
	Display(int pin,int number);
	~Display();
	void printStatus();
	void show(int digit, int number, int r, int g, int b);
	void showA(int number, int r, int g, int b);
	void showB(int number, int r, int g, int b);
	void show(int digit, int number);
	void showA(int number);
	void showB(int number);
	int show(int,int,int,int);
	void clear();
	void init();
	int debugvalue(int value);
	void showFlag(int i);
private:
	void ShowDigits();
	int m_NumberOfDigits;
	int m_pin;
	Adafruit_NeoPixel m_strip;
	Digit digits[4];
	int getHundreds(int value);
	int getThousands(int number);
	int getTens(int number);
	int getOnes(int number);

};

