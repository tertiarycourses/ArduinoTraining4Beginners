/*
 Module 4 -Light Control Box

 This sketch is written to teach Maker Jr - Intermediate
 
*/ 


//declare pin 
const int LdrSensorPin = A1;
const int Red_LED = 9;
const int Green_LED = 10;

int LdrSensorValue = 0; 


void setup()
{
  Serial.begin(9600);
  pinMode(Red_LED, OUTPUT);
  pinMode(Green_LED, OUTPUT);

}
 
void loop()
{
  LdrSensorValue = analogRead(LdrSensorPin);
  // give the ADC a moment to settle
  delay(5);
  // print out the values to the serial monitor
  Serial.print("LDR raw sensor Values \t : ");
  Serial.println(LdrSensorValue);
  
  if (LdrSensorValue < 300){
    digitalWrite(Red_LED, HIGH);   // turn on white led when too dark
    digitalWrite(Green_LED, LOW);
   }
  else {
    digitalWrite(Red_LED, LOW);    
    digitalWrite(Green_LED, HIGH); // turn on Green led when for normal
  //delay(100);
  }
  

  delay(1000);

  
}// end for loop
 

