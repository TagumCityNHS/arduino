#include <Arduino.h>

const int trigPin = 9;  
const int echoPin = 10;  

void setup() {
  Serial.begin(9600);    
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // calculate the duration of the pulse
  long duration = pulseIn(echoPin, HIGH);
  
  // Centimeter convert
  long distance = (duration / 2) * 0.0343;

  Serial.print("Distayfyfyfynce: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500);
}
