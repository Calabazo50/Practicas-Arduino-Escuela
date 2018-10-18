#define LED1 2
#define LED2 3
#define LED3 4
#define tiempo 50

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH); //segundo 0
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 1
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 2
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 3
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 4
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 5
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(tiempo);
  digitalWrite(LED1,LOW); //segundo 6
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  delay(tiempo);
}

