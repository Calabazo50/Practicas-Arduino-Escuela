//Blink 2 - Más rapido
void setup(){         //Inicialización del programa
  pinMode(13,OUTPUT); //Pin 13 como salida
}
void loop(){              //Programa que se repite
  digitalWrite(13,HIGH);  //Establece el pin en encendido
  delay(50);              //50ms de espera
  digitalWrite(13,LOW);   //Establece el pin en apagado
  delay(50);              //50ms de espera
}