#include <Arduino.h>

#include <Servo.h>

Servo servo;

int start_position = 50;
int servoPin = 2;
int lastExecution = 0;
int period = 10000;

void setup() {
  Serial.begin(9600);
  servo.write(start_position);
  servo.attach(servoPin);
}

void loop() {
  int now = millis();
  if (now - lastExecution > period) {
    Serial.println(now);
    Serial.println("Feeding...");
    servo.write(20);
    delay(200);
    servo.write(start_position);
    lastExecution = now;
  }  
}