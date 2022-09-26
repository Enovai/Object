//SIMPLE NEOPIXEL EXAMPLE
//OBJECT EXAMPLE

//use the library manager to install the library first
//include the library
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//define the digital pin that the LED strip is connected to
#define PIN 8

//the first parameter is the number of LEDs you have - change for your strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(5, PIN, NEO_GRB + NEO_KHZ800);
const int buttonPin = 13;     // the number of the pushbutton pin
const int ledPin =  8;      // the number of the LED pin
const int buttonPin2=2;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int ButtonState=0;

void setup() {
  strip.begin(); //we always need to do this
  strip.show(); // Initialize all pixels to 'off'
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);

}

void loop() {
  //TURN ALL LEDS ON
  //iterate through the LED strip, set the color then show
  //turns them on one at a time
  buttonState = digitalRead(buttonPin);
  ButtonState = digitalRead(buttonPin2);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, 120, 50, 200); //set to purple, takes RGB vals 0-255
      strip.show();
      delay(200);
   }

    
  } else {
    for(uint16_t i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i, 0, 0,0); //set to purple, takes RGB vals 0-255
        strip.show();
        delay(200);
     }
   if (ButtonState == HIGH) {
    // turn LED on:
    for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, 10, 200, 100); //set to purple, takes RGB vals 0-255
      strip.show();
      delay(200);
   }

    
  } else {
    for(uint16_t i=0; i<strip.numPixels(); i++) {
        strip.setPixelColor(i, 0, 0,0); //set to purple, takes RGB vals 0-255
        strip.show();
        delay(200);
     }
  }
   

/*
  //turn on all at the same
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, 0, 0, 150); //set to purple, takes RGB vals 0-255  
   }
   strip.show();
   delay(1000); //wait 1 second
   
   //turn on all at the same
   for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, 0, 0, 0); //set to purple, takes RGB vals 0-255  
   }
   strip.show();
   delay(1000); //wait 1 second
*/ 
}
}
