const int pot = A0; //Analog input A0
const int Red_LED = 9; 
//#define Red_LED 9
int potValue = 0;
int LedValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Red_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(pot);
  Serial.println(potValue);
  LedValue = map(potValue,0,1023,0,255);
  analogWrite(Red_LED,LedValue);
  
  Serial.println(LedValue);
  delay(500);

}
