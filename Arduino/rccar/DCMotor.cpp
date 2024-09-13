#include <Arduino.h>
#include "DCMotor.h"

DCMotor::DCMotor(int pinL, int pinR) {
  this->pinL=pinL;
  this->pinR=pinR;
  pinMode(this->pinL,OUTPUT);
  pinMode(this->pinR,OUTPUT);
}
 
void DCMotor::RotateLeft() {
  digitalWrite(pinL,HIGH);
  digitalWrite(pinR,LOW);
}
void DCMotor::RotateRight() {
  digitalWrite(pinL,LOW);
  digitalWrite(pinR,HIGH);
}
void DCMotor::Stop() {
  digitalWrite(pinL,LOW);
  digitalWrite(pinR,LOW);
}