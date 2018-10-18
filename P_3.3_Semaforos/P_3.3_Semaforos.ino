#define tv 4500
#define tp 250
#define ta 1000
char sema[4][3]={ {13,12,11}, {10,9,8}, {7,6,5}, {4,3,2} };
boolean estado[4][3]={ {0,0,1}, {1,0,0}, {0,0,0}, {0,1,0} };
void setup(){
  for(byte s=0; s<4; s++){
    for(byte i=0; i<15; i++){
      pinMode(sema[s][i],OUTPUT);
      digitalWrite(sema[s][2],HIGH);
    }
  }
}
void loop(){
  semaforo1();
  delay(ta);
  semaforo(3);
  delay(ta);
  semaforo(2);
  delay(ta);
}
void leds(byte s,byte l){
  for(byte i=0; i<3; i++){
    digitalWrite(sema[s][i],estado[l][i]);
  }
}
void par(byte s){
  for(byte i=0; i<4; i++){
    leds(s,2);
    delay(tp);
    leds(s,1);
    delay(tp);
  }
}
void semaforo(byte s){
  leds(s,1);
  delay(tv);
  par(s);
  leds(s,3);
  delay(ta);
  leds(s,0);
}
void semaforo1(){
  leds(0,1);
  leds(1,1);
  delay(tv);
  for(byte i=0; i<4; i++){
    leds(0,2);
    leds(1,2);
    delay(tp);
    leds(0,1);
    leds(1,1);
    delay(tp);
  }
  leds(0,3);
  leds(1,3);
  delay(ta);
  leds(0,0);
  leds(1,0);
}
