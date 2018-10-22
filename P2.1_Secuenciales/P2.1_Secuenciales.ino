#define LED1 2    //Defino la entrada 2 como LED1
#define LED2 3    //Defino la entrada 3 como LED2
#define LED3 4    //Defino la entrada 4 como LED3
#define tiempo 50 //Defino el tiempo entre las secuencias
void setup() {            //Inicialización del programa
  pinMode(LED1, OUTPUT);  //Pongo LED1 como salida
  pinMode(LED2, OUTPUT);  //Pongo LED2 como salida
  pinMode(LED3, OUTPUT);  //Pongo LED3 como salida
}
void loop() {
  digitalWrite(LED1,HIGH);  //Enciende LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,HIGH);  //Enciende LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,HIGH);  //Enciende LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
  digitalWrite(LED1,LOW);   //Apaga LED1
  digitalWrite(LED2,LOW);   //Apaga LED2
  digitalWrite(LED3,LOW);   //Apaga LED3
  delay(tiempo);            //Espera 1 segundo
}