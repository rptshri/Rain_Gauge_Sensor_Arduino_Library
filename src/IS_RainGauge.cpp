/*
	IS_RainGauge.cpp
	Rain Gauge library for the Arduino microcontroller
	Arpit Shrivastava, Infiniti Systems
	
	version 1.0 2020/01/10 initial version

	Our example code uses the "beerware" license. You can do anything
	you like with this code. No really, anything. If you find it useful,
	buy me a (root) beer someday.
*/

#include <IS_RainGauge.h>
#include <EEPROM.h>
#include <Wire.h>
#include <stdio.h>
#include <math.h>

IS_RainGuage::IS_RainGauge()
// Base library type
//update pin defination
//set count value to zero
//attach interrupt usin _pin and pass to IncrementCount function whenever RISING occurs
{
	_pin = INTERRUPT_PIN;
	_count = 0;
	attachInterrupt(digitalPinToInterrupt(_pin), IncrementCount, RISING);
}

IS_RainGuage::IncrementCount()
//This function is called when Interrupt occurs
//Increment the count value
//write the count value to EEPROM
{
	_count += _count;
	EEPROM.write(EEPROM_COUNT_ADDRESS, _count);
}

IS_RainGuage::whatIsCountTillNow()
//This function reads the EEPROM at the address where the count was written
//returns count
{
	unsigned int countByNow;
	countByNow = EEPROM.read(EEPROM_COUNT_ADDRESS);
	return (countByNow);
}