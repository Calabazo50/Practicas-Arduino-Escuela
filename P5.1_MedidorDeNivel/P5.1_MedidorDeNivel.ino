byte led[10]={11,10,9,8,7,6,5,4,3,2};
byte nivel = A0;
float val;

void turnOff(){
  for(int i = 0; i<10; i++){
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
  turnOff();
  for(int i=0; i<10; i++){
    if (val >= 102.3*(i+1)) digitalWrite(led[i], HIGH);
  }
}