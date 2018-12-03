int ledPin = 13;
int val = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Conalep");
}

void loop(){
  val = Serial.read();
  if(val>'0' && val<='9'){
    val=val-'0';
    delay(500);
    for(int i=0; i<val; i++){
      Serial.println("Encendido!");
      digitalWrite(ledPin, HIGH);
      delay(150);
      digitalWrite(ledPin, LOW);
      delay(150);
    }
  }
}
