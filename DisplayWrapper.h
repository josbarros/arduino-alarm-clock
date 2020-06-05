#pragma once
#include "Adafruit_LEDBackpack.h"

// I2C address of the display.  Stick with the default address of 0x70
// unless you've changed the address jumpers on the back of the display.
#define DISPLAY_ADDRESS   0x70

class DisplayWrapper : public Adafruit_7segment
{
	private:
    void displayHours(int hour, int minute);
    void display();
	public:
    using Adafruit_7segment::Adafruit_7segment;
		void displayTime(int hour, int minute, bool alarm1, bool alarm2);
    void displayBlank();
    void displayTemperature(float temp); 
};
