const int analogIn = A0;
const int analogOut = 9;
int sensor = 0;
int output = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  sensor = analogRead(analogIn);
  output = map(sensor, 0, 1023, 0, 255);
  analogWrite(analogOut, output);
  Serial.print("El valor del sensor es: ");
  Serial.print(sensor);
  Serial.print("\t salida = ");
  Serial.println(output);
  delay(2);
}
