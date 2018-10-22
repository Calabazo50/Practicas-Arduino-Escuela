int tiempo1=50;
int tiempo2=200;
char LED[10]={2,3,4,5,6,7,8,9,10,11};

void setup(){
  for(int i=0;i<10;i++){
    pinMode(LED[i],OUTPUT);
  }
}

void loop(){
  for(int a=0;a<10;a++){
    digitalWrite(LED[a],HIGH);
    delay(tiempo1);
    digitalWrite(LED[a],LOW);
    delay(tiempo2);
  }
}
