/*
 Name:		Arduino.ino
 Created:	04.08.2016 09:48:14
 Author:	nicole
*/
#include <Adafruit_NeoPixel.h>
#include "Display.h"


const int DisplayPin = 6;
const int numbersOfDigits = 4;
Display display =Display(DisplayPin, numbersOfDigits);

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	display.printStatus();
	display.init();
	
	//display.show(8888, 50, 50, 100);
	
//	display.showFlag(1);
	//display.clear();
	//display.show(3, 0, 255, 165, 0);
	//display.show(2, 0, 50, 50, 50);
	//display.show(1, 0, 139, 69, 0);
	//display.show(0, 2, 100, 0, 0);

	
}

// the loop function runs over and over again until power down or reset
void loop() {
	//display.show(8888, 50, 50, 50);
	/*delay(3000);*/
//Serial.println(display.debugvalue(0));
//	Serial.println(display.debugvalue(1));
	//Serial.println(display.debugvalue(2));
	//Serial.println(display.debugvalue(3));
	//Serial.println(display.debugvalue(4));


	delay(30000);
/*	for (int i = 0; i <= 9999; i++)
	{
		//display.show(i, 0, 0, 100);
		delay(500);
	}*/

	display.show(1,0,0,100);
	delay(2000);
	display.show(12, 0, 0, 100);
	delay(2000);
	display.show(123, 0, 0, 100);
	delay(2000);
	display.show(1234, 0, 0, 100);
	delay(2000);
	display.show(2345, 0, 0, 100);
	delay(2000);
	display.show(2016, 0, 0, 100);
	delay(5000);
	
}
