
const int pinBoton = 2;
int valorBoton;

void setup() {
  // put your setup code here, to run once:

pinMode (pinBoton, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
valorBoton= digitalRead(pinBoton);

Serial.println(valorBoton);
}
