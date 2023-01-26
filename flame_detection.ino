int buzzer = 11;
int RED_LED = 5;
int GREEN_LED = 6;
int flame_sensor = 8;
int flame_detected;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(flame_sensor,INPUT);+
}

void loop() {
  flame_detected = digitalRead(flame_sensor);

  if(flame_detected == 0)
  {
    Serial.println("Flame Detected..");
    digitalWrite(buzzer,HIGH);
    digitalWrite(RED_LED,HIGH);
    digitalWrite(GREEN_LED,LOW);   
  }
  else
  {
    Serial.println("No Flame Detected..");
    digitalWrite(buzzer,LOW);
    digitalWrite(RED_LED,LOW);
    digitalWrite(GREEN_LED,HIGH);
  }
  delay(500);
}
