int buttonPin = 2;
int potPin = A1;
int proxPin = A2;
int speakerPin=17;

int buttonState = 0; 

void setup() {
pinMode(buttonPin, INPUT);
pinMode(potPin,INPUT);
pinMode(proxPin,INPUT);

Serial.begin(9600);
}

void(){
  
  //Start of potentiometer feature
  /*
   * To change the volume of the speaker 
   */
  int potentiometer = analogRead(potPin);
  int mappedPot = map(potentiometer, 0, 1023, 0, 255);                                           
  //End of potentiometer feature
  int proxState = digitalRead(proxPin); // Reads the proxmity sensor
  int buttonState = digitalRead(buttonPin);
   if(proxState==HIGH && buttonState==HIGH)
   {
     tone(speakerPin,200,300);
       int value=random(1,7);
        Serial.println(value);
   }
  //End of random number generator
}
