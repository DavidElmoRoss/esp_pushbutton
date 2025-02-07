/*
 TITLE: Pushbutton Program using Internal Pull Up Resistor
 Author: David Elmo Ross
 Date: Feb 04,2025
 Descritpion: The Pushbutton is a normally open push button
              that is connected to Pin 15 on the Wrover
              and will be using an internal PULLUP Resistor.
*/

// INCLUDE SECTION
#include <Arduino.h>                 // Include Arduino.h Library

// DEFINE SECTION
#define PB_PIN 15                    // pushbutton connected to pin 15
#define LED_BUILTIN  2               // LED connected to PIN 2

// put function Prototypes here:

// Put Global Variables here
char pb_input_value;                 // declare pb_input_value as char to save RAM

void setup() 
{
  // put your setup code here, to run once:
  pinMode(PB_PIN,INPUT_PULLUP);      // set PB_PIN to have internal Pullup
  pinMode(LED_BUILTIN, OUTPUT);      // set LED_BUILTIN as OUTPUT
}

void loop() 
{
  for(;;)                                     // loop forever
  {
     pb_input_value = digitalRead(PB_PIN);    // get Pushbutton value
     if(pb_input_value == 1)                  // if Pushbutton is not pressed
     {
      digitalWrite(LED_BUILTIN, HIGH);        // turn OFF LED
     }
     else
     if(pb_input_value == 0)                  // if Pushbutton IS pressed
     {
      digitalWrite(LED_BUILTIN, LOW);         // Turn ON LED
     }
  }
}

