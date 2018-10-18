//Creación de un blink
void setup(){         //Inicialización del programa
  pinMode(13,OUTPUT); //Pin 13 declarado como salida digital
}
void loop(){              //Programa que se repite
  digitalWrite(13,LOW);   //Pin 13 en bajo o 0V
  delay(500);             //500ms de espera
  digitalWrite(13,HIGH);  //Pin 13 en alto o 5V
  delay(500);             //500ms de espera
}