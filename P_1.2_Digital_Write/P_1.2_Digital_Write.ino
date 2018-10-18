void setup(){
  pinMode(13,OUTPUT);
}

void loop(){
  digitalWrite(13,LOW);
  delay(43500000); //Con sol
  digitalWrite(13,HIGH);
  delay(42900000); //Sin sol
}
