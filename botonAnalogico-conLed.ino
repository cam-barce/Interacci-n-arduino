const int pinBoton = A0;
int valorBoton;
int ledPin= 3;
int valMap;

void setup() {
  // put your setup code here, to run once:

pinMode (pinBoton, INPUT);
pinMode (ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valorBoton= analogRead(pinBoton);
//rango minimo, maximo, valores minimo y maximo a los que quiero transformar
valMap= map(valorBoton, 0,850,0,255);
//variable para que limite los valores de 0 a 255 y no se pase
valMap=constrain(valMap, 0,255);

analogWrite(ledPin,valMap);
Serial.println(valMap);
//Serial.println(valorBoton);
}
