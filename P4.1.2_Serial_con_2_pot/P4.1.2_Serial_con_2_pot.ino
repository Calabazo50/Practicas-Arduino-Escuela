void setup() {        //Inicialización del programa
  Serial.begin(9600); //Declaracion del monitor serial y su velocidad
}
void loop() {                   //Programa que se repite
  int pot1 = analogRead(A0);    //Lectura del pin analogico A0
  int pot2 = analogRead(A1);    //Lectura del pin analogico A1
  Serial.print("A0 = ");        //Imprime el texto entre comillas
  Serial.print(pot1);           //Imprime el valor de pot1 en el monitor serial
  Serial.print("  ||  A0 = ");  //Imprime el texto entre comillas
  Serial.print(pot2);           //Imprime el valor de pot2 en el monitor serial
  Serial.print("\n");           //Crea una nueva linea
  delay(1);                     //Espera 1ms
}