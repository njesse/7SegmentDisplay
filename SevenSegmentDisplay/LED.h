#pragma once
#include <stdint.h>
class LED
{
public:
	LED();
	LED(uint16_t pos);
	~LED();

	uint16_t getPositon();
	void setColor(uint16_t r, uint16_t g, uint16_t b);
	void turnOff();
	void turnOn();

	uint16_t r;
	uint16_t g;
	uint16_t b;


private:
	uint16_t position;
	uint16_t old_r;
	uint16_t old_g;
	uint16_t old_b;

};

