#define tf 2000
#define tv 5000
#define tp 250
#define ta 1000
char sema[2][2][4]={{
    {13,12,11,10},  //Flecha, Verde, Amarillo, Rojo
    {5,4,3}                 //Verde, Amarillo, Rojo
  },{
    {9,8,7,6},      //Flecha, Verde, Amarillo, Rojo
    {2,A4,A5}               //Verde, Amarillo, Rojo
  }
};
boolean estado[6][2][4]={{
    {1,1,0,0},
      {0,0,1}
  },{
    {0,1,0,0},
      {0,0,1}
  },{
    {0,1,0,0},
      {1,0,0}
  },{
    {0,0,0,0},
      {0,0,0}
  },{
    {0,0,1,0},
      {0,1,0}
  },{
    {0,0,0,1},
      {0,0,1}
  }
};
void setup(){
  for(byte a = 0; a < 2; a++){
    for(byte s=0; s<2; s++){
      for(byte i=0; i<4; i++){
        pinMode(sema[a][s][i],OUTPUT);
      }
    }
  }
  digitalWrite(6,HIGH);
  digitalWrite(A5,HIGH);
}
void loop(){  
  for(byte i = 0; i < 2; i++){
    leds(i,0);
    delay(tf);
    par(i,0);
    leds(i,1);
    delay(ta);
    leds(i,2);
    delay(tv);
    par(i,2);
    leds(i,4);
    delay(ta);
    leds(i,5);
    delay(ta);
  }  
}
void leds(byte a,byte e){
  for(byte s=0; s<2; s++){
    for(byte i=0; i<4; i++){
      digitalWrite(sema[a][s][i],estado[e][s][i]);
    }
  }
}
void par(byte a, byte b){
  for(byte i=0; i<4; i++){
    leds(a,b+1);
    delay(tp);
    leds(a,b);
    delay(tp);
  }
}
