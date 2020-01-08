/* IS_RainGauge Arduino example sketch

This sketch shows how to use the Rain Gauge sensor.


*Some Theory on Rain Gauge*

Hardware connections:

- (GND) to GND
+ (VDD) to 5V

(WARNING: do not connect + to >5V or the sensor will be damaged!)

You will also need to connect the I2C pins (SCL and SDA) to your
Arduino. The pins are different on different Arduinos:

Any Arduino pins labeled:  SDA  SCL
Uno, Redboard, Pro:        A4   A5
Mega2560, Due:             20   21
Leonardo:                   2    3

Have fun! -Your friends at Infiniti Systems.

Our example code uses the "beerware" license. You can do anything
you like with this code. No really, anything. If you find it useful,
buy me a beer someday.

V1.0.0 Arpit Shrivastava, Infiniti Systems 01/10/2020
*/


//Your sketch must include this library
#include <IS_RainGauge.h>

//You will need to create an IS_RainGauge object here
IS_RainGuage Rain();

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(Rain.whatIsCountTillNow());
    delay(2000);
}
