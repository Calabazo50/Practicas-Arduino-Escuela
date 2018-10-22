void setup() {        //Inicialización del programa
  Serial.begin(9600); //Declaracion del monitor serial y su velocidad
}
void loop() {               //Programa que se repite
  int pot = analogRead(A0); //Lectura del pin analogico A0
  Serial.println(pot);      //Imprime el valor de pot en el monitor serial
  delay(1);                 //Espera 1ms
}