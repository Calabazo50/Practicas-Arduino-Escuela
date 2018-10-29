void setup() {        //Inicialización del programa
  Serial.begin(9600); //Declaracion del monitor serial y su velocidad
}
void loop() {                                   //Programa que se repite
  float voltaje = analogRead(A0)*(5.0/1023.0);  //Lectura del pin analogico A0
  Serial.println(voltaje);                      //Imprime el valor de voltaje en el monitor serial
  delay(1);                                     //Espera 1ms
}