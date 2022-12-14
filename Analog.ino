
const int analogPotentiometer= A0;
const int analogPhotocell = A3;  

const int analogBLUE = 2; 
const int analogGREEN = 3; 


int sensorValue = 0;     
int outputValue = 0;        

int sensorValue2 = 0;        
int outputValue2 = 0;       

void setup() {

  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogPotentiometer);
  sensorValue2=analogRead(analogPhotocell);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  outputValue2 = map(sensorValue2, 0, 1023, 0, 255);

  // change the analog out value:
  analogWrite(analogBLUE, outputValue);
   analogWrite(analogGREEN, outputValue2);


  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
