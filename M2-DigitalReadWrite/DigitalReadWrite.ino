int const sw = 2;
int swState = 0;  //initailization
int const Red_LED= 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(sw,INPUT);
  pinMode(Red_LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  swState = digitalRead(sw);
  if (swState == 1)
  //if (swState == HIGH)
  {
    digitalWrite(Red_LED,HIGH);
  }
  else
  {
    digitalWrite(Red_LED,LOW);
  }
  Serial.print("Pin 2 is ");
  Serial.println(swState);
  //delay(1000);

}
