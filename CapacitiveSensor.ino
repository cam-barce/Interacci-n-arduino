 //incluir libreria capacitive sensor
#include<CapacitiveSensor.h>
//si tuviera más pines tendrìa q ponerlos abajo, intuyo que con distintos nros
CapacitiveSensor sensor = CapacitiveSensor(4,2);

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
long measurement = sensor.capacitiveSensor(30);
Serial.println(measurement);
delay(10);
}
