#include "Digit.h"

Digit::Digit()
{

}

Digit::Digit(int startvalue)
{
  m_StartValue = startvalue;

  for (int i = 0; i < numberOfLEDs; i++)
  {
    leds[i] = LED(m_StartValue + i);
  }
  
}


void Digit::init(int offset)
{
  m_StartValue = offset;

  for (int i = 0; i < numberOfLEDs; i++)
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
  for (int i = 0; i < numberOfLEDs; i++)
  {

    leds[i].turnOff();
  }
  switch (value) {
    case -2:

    case 0:
      // Top
      turnOn(Top);
      // Top Left
      turnOn(TopLeft);
      // Top Right
      turnOn(TopRight);
      // Bottom
      turnOn(Bottom);
      // Bottom Left
      turnOn(BottomLeft);
      // Bottom Right
      turnOn(BottomRight);
      break;
    case 1:
      // Top Right
      turnOn(TopRight);
      // Bottom Right
      turnOn(BottomRight);
      break;
    case 2:
      // Top
      turnOn(Top);
      // Top Right
      turnOn(TopRight);
      // Bottom
      turnOn(Bottom);
      // Bottom Left
      turnOn(BottomLeft);
      // Middel
      turnOn(Center);
      break;
    case 3:
      // Top
      turnOn(Top);
      // Top Right
      turnOn(TopRight);
      // Bottom
      turnOn(Bottom);
      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
    case 4:

      // Top Left
      turnOn(TopLeft);

      // Top Right
      turnOn(TopRight);
      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
    case 5:
      // Top
      turnOn(Top);
      // Top Left
      turnOn(TopLeft);
      // Bottom
      turnOn(Bottom);

      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
    case 6:
      // Top
      turnOn(Top);
      // Top Left
      turnOn(TopLeft);
      // Bottom
      turnOn(Bottom);
      // Bottom Left
      turnOn(BottomLeft);
      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
    case 7:
      // Top
      turnOn(Top);
      // Top Right
      turnOn(TopRight);
      // Bottom Right
      turnOn(BottomRight);

      break;
    case 8:
      // Top
      turnOn(Top);
      // Top Left
      turnOn(TopLeft);
      // Top Right
      turnOn(TopRight);
      // Bottom
      turnOn(Bottom);
      // Bottom Left
      turnOn(BottomLeft);
      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
    case 9:
      // Top
      turnOn(Top);
      // Top Left
      turnOn(TopLeft);
      // Top Right
      turnOn(TopRight);
      // Bottom
      turnOn(Bottom);
      // Bottom Right
      turnOn(BottomRight);
      // Middel
      turnOn(Center);
      break;
  }
}

void Digit::setValue(int value, uint16_t r, uint16_t g, uint16_t b)
{

  //switch all of:
  for (int i = 0; i < numberOfLEDs; i++)
  {
    leds[i].turnOff();
  }
  switch (value) {
    case -2:

    case 0:
      // Top
      setColor(Top, r, g, b);
      // Top Left
      setColor(TopLeft, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);

      // Bottom Left
      setColor(BottomLeft, r, g, b);

      // Bottom Right
      setColor(BottomRight, r, g, b);
      break;
    case 1:
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);
      break;
    case 2:
      // Top
      setColor(Top, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);
      // Bottom Left
      setColor(BottomLeft, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 3:
      // Top
      setColor(Top, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 4:

      // Top Left
      setColor(TopLeft, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 5:
      // Top
      setColor(Top, r, g, b);
      // Top Left
      setColor(TopLeft, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);

      // Bottom Right
      setColor(BottomRight, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 6:
      // Top
      setColor(Top, r, g, b);
      // Top Left
      setColor(TopLeft, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);
      // Bottom Left
      setColor(BottomLeft, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 7:
      // Top
      setColor(Top, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);

      break;
    case 8:
      // Top
      setColor(Top, r, g, b);
      // Top Left
      setColor(TopLeft, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);
      // Bottom
      setColor(Bottom, r, g, b);
      // Bottom Left
      setColor(BottomLeft, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);
      // Middel
      setColor(Center, r, g, b);
      break;
    case 9:
      // Top
      setColor(Top, r, g, b);
      // Top Left
      setColor(TopLeft, r, g, b);
      // Top Right
      setColor(TopRight, r, g, b);

      // Bottom
      setColor(Bottom, r, g, b);
      // Bottom Right
      setColor(BottomRight, r, g, b);

      // Middel
      setColor(Center, r, g, b);

      break;
  }

}

void Digit::turnOn(int segment) {
  int startValue = segment * LEDS_PER_SEGMENT;
  int endValue = startValue + LEDS_PER_SEGMENT;
  for (int i = startValue; i < endValue; i++)
  {
    leds[i].turnOn();
  }
}

void Digit::setColor(int segment, uint16_t r, uint16_t g, uint16_t b) {
  int startValue = segment * LEDS_PER_SEGMENT;
  int endValue = startValue + LEDS_PER_SEGMENT;
  for (int i = startValue; i < endValue; i++)
  {
    leds[i].setColor(r, g, b);
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
      leds[13].setColor(255, 0, 0);
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
