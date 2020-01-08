/*
	IS_RainGuage_h
	Rain Guage library for the Arduino microcontroller
	Arpit Shrivastava, Infiniti Systems


	version 1.0 2020/01/10 initial version
	
	Our example code uses the "beerware" license. You can do anything
	you like with this code. No really, anything. If you find it useful,
	buy me a (root) beer someday.
*/

//include guards - to make sure compiler ignores duplicates
#ifndef IS_RainGuage_h
#define IS_RainGuage_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class IS_RainGuage
{
public:
	IS_RainGauge(); // base type

	char whatIsCountTillNow(void);
	//call this function to know the value count at that time
	//returns count value.

private:
	int8_t _pin;
	int _count;
};

#define EEPROM_COUNT_ADDRESS 0
//Change this definition if you want to use another interrupt pins
#define INTERRUPT_PIN 2				

#endif