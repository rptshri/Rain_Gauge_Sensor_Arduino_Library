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
// #include "Arduino.h"
// #if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
// #else
// #include "WProgram.h"
// #endif

volatile static int _count;
void IncrementCount(void);
//This function gets called when interrupt occurs
//increment and saves count in EEPROM 

class IS_RainGuage
{
public:
	int IS_RainGauge(); // base type

	int whatIsCountTillNow(void);
	//call this function to know the value count at that time
	//returns count value.
	// void IncCount(void);

private:
	

	int8_t _pin;
	
};

#define EEPROM_COUNT_ADDRESS 0
//Change this definition if you want to use another interrupt pins
#define INTERRUPT_PIN 2				

#endif