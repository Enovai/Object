//Credit: https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-serial-input-to-the-p5-js-ide/
//I highly refrenced the example code on this website in order to build the code below. 
void setup() {
  Serial.begin(9600); 
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);
}
 
void loop() {
  //initialize variables and read sensor values and assign them to those variables
  int potentiometer = analogRead(A2);  
  int photocell = analogRead(A0);                  
  //sets the value in a range using the previous variables and putting them in new variabels               
  int mappedPot = map(potentiometer, 0, 1023, 0, 255);
  int mappedPhoto = map(photocell, 0, 1023, 0, 255); 
 //Prints the values
  Serial.print(mappedPot);
  Serial.print(",");
  Serial.println(mappedPhoto);

  delay(1);                                            
}
