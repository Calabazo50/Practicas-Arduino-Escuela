int Tv[2]={7000,5000};
int Tp[2]={600,400};
int Ta=2000;
int Tr=1000;
byte Semaforo[2][3]={   //Pines del arduino
  {13,12,11},              //Verde, Amarillo, Rojo
  {10,9,8}               //Verde, Amarillo, Rojo
};
void setup() {
  for(byte s=0; s<2; s++){
    for(byte i=0; i<3; i++){
    pinMode(Semaforo[s][i],OUTPUT);
    }
  }
  digitalWrite(Semaforo[0][0],HIGH);
  digitalWrite(Semaforo[1][2],HIGH);
}
void loop() {
  for(byte s=0; s<2; s++){
    digitalWrite(Semaforo[s][0],HIGH);
    digitalWrite(Semaforo[s][2],LOW);
    delay(Tv[s]);
    for(byte i=0; i<3; i++){
      digitalWrite(Semaforo[s][0],LOW);
      delay(Tp[0]);
      digitalWrite(Semaforo[s][0],HIGH);
      delay(Tp[1]);
    }
    digitalWrite(Semaforo[s][0],LOW);
    digitalWrite(Semaforo[s][1],HIGH);
    delay(Ta);
    digitalWrite(Semaforo[s][1],LOW);
    digitalWrite(Semaforo[s][2],HIGH);
    delay(Tr);
  }
}
