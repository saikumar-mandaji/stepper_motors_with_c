
#include <stdio.h>
#include <wiringPi.h>

// Define pin connections & motor's steps per revolution
const int dirPin = 27;
const int stepPin = 25;
const int cs = 21;
const int stepsPerRevolution = 150;
 
  
int main(void)
{
	// Declare pins as Outputs
	wiringPiSetup();
	pinMode(stepPin, OUTPUT);
	pinMode(dirPin, OUTPUT);
	pinMode(cs, OUTPUT);

	digitalWrite(cs, HIGH);

	digitalWrite(dirPin, LOW);

	for(int x = 0; x < stepsPerRevolution; x++)
	{
		digitalWrite(stepPin, HIGH);
		delayMicroseconds(4000);
		digitalWrite(stepPin, LOW);
		delayMicroseconds(4000);
	}
delay(100); // Wait a second
digitalWrite(cs, LOW);
}
