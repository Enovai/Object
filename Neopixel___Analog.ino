
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN 2
Adafruit_NeoPixel strip = Adafruit_NeoPixel(2, PIN, NEO_GRB + NEO_KHZ800);


const int analogPotentiometer= A0;
const int analogPhotocell = A3;  

const int ledPin =  2;      // the number of the LED pin


int sensorValue = 0;     
int outputValue = 0;        

int sensorValue2 = 0;        
int outputValue2 = 0;       

void setup() {
  strip.begin(); //we always need to do this
  strip.show(); // Initialize all pixels to 'off'
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogPotentiometer);
  sensorValue2=analogRead(analogPhotocell);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);

  if (outputValue >= 100) {
      strip.setPixelColor(2, 120, 50, 200); //set to purple, takes RGB vals 0-255
  }
  if (outputValue2 >= 100) {
      strip.setPixelColor(2, 2000, 20, 15); //set to purple, takes RGB vals 0-255
  }
  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
