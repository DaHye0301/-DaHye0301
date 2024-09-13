#include <Arduino.h>
#include "DCMotor.h"
#include "RCCar.h"

DCMotor dcLF(2,3);
DCMotor dcLB(7,6);
DCMotor dcRF(5,4);
DCMotor dcRB(10,19);
RCCar rcCar(dcLF,dcLB,dcRF,dcRB);

void setup(){
 Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0){
    int cmd=Serial.read();
    switch(cmd) {
      case 'f': rcCar.GoForward(); break;
      case 'b': rcCar.GoBackward(); break;
      case 'l': rcCar.TurnLeft(); break;
      case 'r': rcCar.TurnRight(); break;
      case 's': rcCar.Stop(); break;
      default: break;
    }
  }

}