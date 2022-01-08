/*
 Name:		Arduino.ino
 Created:	04.08.2016 09:48:14
 Author:	nicole

 Update from Janurary 2022:
 The way the display is initalised changed: there are no longer global options. Which means: there should be more than one display per arduino possible
 eg: 
 Display display_TeamOne =Display(6,2);  using pin 6
 Display display_TeamTwo =Display(8,2);  using pin 8

*/
#include <Adafruit_NeoPixel.h>
#include "Display.h"
#include "options.h" 


Display display =Display(6,2); // sets Display options: Pin,  LEDs per Segment

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(57600);
	display.printStatus();
	display.init(); 
	
	display.show(8888, 50, 50, 50);
	
  //display.showFlag(1);

  
	//display.clear();
	//display.show(3, 0, 255, 165, 0);
	//display.show(2, 0, 50, 50, 50);
	//display.show(1, 0, 139, 69, 0);
	//display.show(0, 2, 100, 0, 0);

	
}

// the loop function runs over and over again until power down or reset
void loop() {
	//display.show(8888, 50, 50, 50);
  delay(1000);
  display.show(1111, 50, 50, 50);
   delay(1000);
  display.show(1234, 50, 50, 50); 
  delay(1000); 
  display.show(2022, 0, 0, 100);
	/*delay(3000);
//Serial.println(display.debugvalue(0));
//	Serial.println(display.debugvalue(1));
	//Serial.println(display.debugvalue(2));
	//Serial.println(display.debugvalue(3));
	//Serial.println(display.debugvalue(4));


	//delay(30000);
/*	for (int i = 0; i <= 9999; i++)
	{
		display.show(i, 0, 0, 100);
		delay(500);
	}
*/
/*	display.show(1,0,0,100);
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
	delay(5000);*/
	
}
