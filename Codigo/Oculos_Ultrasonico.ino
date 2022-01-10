#include <Ultrasonic.h>

Ultrasonic ultrasonic(12, 13);
int distance;
const int ledPin =  8;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  distance = ultrasonic.read();
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  if ((distance>100)&&(distance<=150)) {
    digitalWrite(ledPin,HIGH);
    delay(300);
    digitalWrite(ledPin,LOW);
    delay(300) ;
  }  
  if ((distance>50)&&(distance<=100)) {
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(200);
  }
  if (distance<50){
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(ledPin,LOW);
    delay(100);
  }
}
