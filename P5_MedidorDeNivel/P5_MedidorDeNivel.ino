byte led[10]={2,3,4,5,6,7,8,9,10,11};
byte nivel = A0;
float val;

void turnOff(){
  for(int i = 0; i>10; i++){
    digitalWrite(led[i], LOW);
  }
}

void setup(){
  for(int i=0; i<10; i++){
    pinMode(led[i], OUTPUT);
  }
  turnOff();
}

void loop(){
  val = analogRead(nivel);
  for(int i=0; i<10; i++){
    if (val >= 102.3*(i+1)) digitalWrite(led[i], HIGH);
    else digitalWrite(led[i], LOW);
  }
}