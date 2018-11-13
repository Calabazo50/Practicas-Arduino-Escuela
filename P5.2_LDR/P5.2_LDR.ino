int luz[10]={250,300,350,400,450,500,600,700,800,900};
byte led[10]={11,10,9,8,7,6,5,4,3,2};
byte nivel = A0;
float val;

void turnOff(){
  for(int i=0; i<10; i++){
    digitalWrite(led[i], LOW);
  }
}

void setup(){
  Serial.begin(9600);
  for(int i=0; i<10; i++){
    pinMode(led[i], OUTPUT);
  }
  turnOff();
}

void loop(){
  val = analogRead(nivel);
  Serial.println(val);
  turnOff();
  for(int i=0; i<10; i++){
    if(val>=luz[i]) digitalWrite(led[i], HIGH);
  } 
}