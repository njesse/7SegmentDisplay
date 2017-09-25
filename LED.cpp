#include "LED.h"

LED::LED()
{
	position = 0;

}

LED::LED(uint16_t pos)
{
	position = pos;
}

uint16_t LED::getPositon() {
	return position;
}

void LED::turnOff() {
    old_r = r;
	old_g = g;
	old_b = b;
	this->r = 0;
	this->g = 0;
	this->b = 0;
}

void LED::turnOn() {
	r = old_r;
	g = old_g;
	b = old_b;
}



void LED::setColor(uint16_t rNew, uint16_t gNew, uint16_t bNew) {
	this->r = rNew;
	this->g = gNew;
	this->b = bNew;
}
LED::~LED()
{
}
