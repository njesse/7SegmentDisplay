#include "Display.h"
#include <Adafruit_NeoPixel.h>


Display::Display()
{

}

void Display::printStatus()
{
	Serial.print(F("Anzahl Stellen "));
	Serial.println(m_NumberOfDigits);

	Serial.print(F("Pin "));
	Serial.println(m_pin);
}

Display::~Display()
{
}

void Display::showFlag(int color) {
	Serial.println(F("Show Flag"));
	for (int i = 0; i < DIGITS; i++)
	{
		Serial.print(F("Digit "));
		Serial.println(i);
		digits[i].showFlag(color);
	}

	ShowDigits();
}

int Display::debugvalue(int i)
{
	if (i == 0)
	{
		return digits[0].getOffset();
	}
	else if (i == 1)
	{
		return digits[1].getOffset();
	}
	else if (i == 2)
	{
		return digits[2].getOffset();
	}
	else if (i == 3)
	{
		return digits[3].getOffset();
	}
	else if (i == 4)
	{
		return show(8888,255,255,255);
	}
}
void Display::init()
{
	int numberofLEDs = DIGITS * 7 * LEDS_PER_SEGMENT ;

	m_strip =  Adafruit_NeoPixel(numberofLEDs, DISPLAYPIN, NEO_GRB + NEO_KHZ800);
	m_strip.begin();


	Serial.println(F("Displayinit"));

	clear();

	digits[0].init(0);
	digits[1].init(digits[0].numberOfLEDs + digits[0].getOffset());
	digits[2].init(digits[1].numberOfLEDs + digits[1].getOffset());
	digits[3].init(digits[2].numberOfLEDs + digits[2].getOffset());

}

void Display::show(int digit, int number, int r, int g, int b) {
	digits[digit].setValue(number, r, g, b);
	ShowDigits();
}

void Display::showA(int number, int r, int g, int b) {
	
	digits[3].setValue(getTens(number), r, g, b);
	digits[2].setValue(getOnes(number), r, g, b);

	ShowDigits();
}

void Display::showB(int number, int r, int g, int b) {
	digits[1].setValue(getTens(number), r, g, b);
	digits[0].setValue(getOnes(number), r, g, b);

	ShowDigits();
}

void Display::show(int digit, int number) {
	digits[digit].setValue(number);
	ShowDigits();
}

void Display::showA(int number) {

	digits[3].setValue(getTens(number));
	digits[2].setValue(getOnes(number));

	ShowDigits();
}

void Display::showB(int number) {
	digits[1].setValue(getTens(number));
	digits[0].setValue(getOnes(number));

	ShowDigits();
}

int Display::getHundreds(int number)
{
	int hundreds = -1;
	if (number > 99)
	{
		hundreds = (number % 1000) / 100;

	}
	return hundreds;
}

int Display::getThousands(int number)
{
	int thousands = -1;
	if (number > 999)
	{
		thousands = (number % 10000) / 1000;

	}
	return thousands;
}


int Display::getOnes(int number)
{
	int ones = 0;
	if (number > 0)
	{
		ones = (number % 10);
	}
	return ones;
}
int Display::getTens(int number)
{
	int tens = -1;
	if (number > 9)
	{
		tens = (number % 100) / 10;

	}
	return tens;
}

int Display::show(int number, int r, int g, int b)
{
	int thousands =-1;
	int hundreds=-1;
	int tens=-1;
	int ones=0;

	if (number > 999)
	{
		thousands = (number % 10000) / 1000;
	
	}
	if (number > 99)
	{
		hundreds=(number % 1000) / 100;

	}
	if (number > 9)
	{
		tens= (number % 100) / 10;

	}
	if (number > 0)
	{
		ones= (number % 10) ;
	}

	digits[0].setValue(ones,r,g,b);
	digits[1].setValue(tens,r,g,b);
	digits[2].setValue(hundreds,r,g,b);
	digits[3].setValue(thousands, r, g, b);

	ShowDigits();

	return thousands;
}



void Display::ShowDigits()
{
	Serial.println(F("Show Digit="));
for (int i = 0; i < DIGITS; i++)
{
  for (int j = 0; j < digits[0].numberOfLEDs; j++)
		{
			
			
				m_strip.setPixelColor(digits[i].getLED(j).getPositon(), digits[i].getLED(j).r, digits[i].getLED(j).g, digits[i].getLED(j).b);
				Serial.print(F("LED= "));
				Serial.print(digits[i].getLED(j).getPositon());
				Serial.print(F(" r="));
				Serial.print(digits[i].getLED(j).r);
				Serial.print(F(" g="));
				Serial.print(digits[i].getLED(j).g);
				Serial.print(F(" b="));
				Serial.println(digits[i].getLED(j).b);
			 }
		}	

  
  m_strip.show();
}

void Display::clear()
{
	m_strip.clear();
	m_strip.show();
}


