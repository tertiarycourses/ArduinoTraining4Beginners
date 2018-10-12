const unsigned int TRIG_PIN=13;
const unsigned int ECHO_PIN=12;
const unsigned int BAUD_RATE=9600;
const int RED_LED=9;
const int GREEN_LED=10;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  Serial.begin(BAUD_RATE);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  

 const unsigned long duration= pulseIn(ECHO_PIN, HIGH);
 long distance= duration/29.1/2;  
 if(duration==0){
   Serial.println("Warning: no pulse from sensor");
   } 
  else{
      Serial.print("distance to nearest object:");
      Serial.println(distance);
      Serial.print("  cm");
      
  }

  if (distance < 4) {             // Less than 4 cm
    digitalWrite(RED_LED,HIGH);   // Red turn ON
    digitalWrite(GREEN_LED,LOW);  // Green LED should turn off
  }
  else {
    digitalWrite(RED_LED,LOW);
    digitalWrite(GREEN_LED,HIGH);
  }
 
 
 delay(500);
 }

