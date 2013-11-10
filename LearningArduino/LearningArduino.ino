// 
// LearningArduino 
//
// Description of the project
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author	 	Brett Piatt
// 				Brett Piatt
//
// Date			11/10/13 8:42 AM
// Version		<#version#>
// 
// Copyright	© Brett Piatt, 2013
// License		<#license#>
//
// See			ReadMe.txt for references
//

#include "Arduino.h"

// Include application, user and local libraries


// Define variables and constants
//
// Brief	Name of the LED
// Details	Each board has a LED but connected to a different pin
//
uint8_t myLED;

//
// Brief	Setup
// Details	Define the pin the LED is connected to
//
// Add setup code 
void setup() {
  myLED = 13;
  pinMode(myLED, OUTPUT);     
}

//
// Brief	Loop
// Details	Blink the LED
//
// Add loop code 
void loop() {
  digitalWrite(myLED, HIGH);
  delay(500);    
  digitalWrite(myLED, LOW);
  delay(500);
}
