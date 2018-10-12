int LEDpin = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available () == 0);
  int val = Serial.read () - '0';
  Serial.println(val);

  if (val ==1) digitalWrite(LEDpin, HIGH);
  if (val ==0) digitalWrite(LEDpin, LOW);

}
