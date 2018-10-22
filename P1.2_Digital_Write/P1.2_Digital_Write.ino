// Luces nocturnas sin LDR
void setup(){         //Inicialización del programa
  pinMode(13,OUTPUT); //Pin 13 como salida
}
void loop(){              //Programa que se repite
  digitalWrite(13,LOW);   //Inicia la luz apagada
  delay(43500000);        //Tiempo de sol
  digitalWrite(13,HIGH);  //Enciende la luz
  delay(42900000);        //Tiempo sin sol
}