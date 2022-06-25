#include <Arduino.h>

#define SECOND 1000L
#define MINUTE (60*SECOND)
#define HOUR (60*MINUTE)
#define DAY (24*HOUR)

int motorPin1=2;

void motorStop();

void setup(){
  pinMode(motorPin1,OUTPUT);
  Serial.begin(9600);
  delay(SECOND * 2);
}

void motorStop(){
  digitalWrite(motorPin1,LOW);
  Serial.println("Stopped motor");
  delay(DAY);
}

void loop(){
  digitalWrite(motorPin1,HIGH);
  Serial.println("Started motor");
  delay(2700); // 2 rounds
  // delay(1400); // 1 round
  motorStop();
}