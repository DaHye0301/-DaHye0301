#include "DCMotor.h"
#include "RCCar.h"

RCCar::RCCar(DCMotor& lf,DCMotor& lb,DCMotor& rf,DCMotor& rb)
: lfWheel(lf),lbWheel(lb),rfWheel(rf),rbWheel(rb) {} //참조자 초기화 

void RCCar::GoForward(){
  lfWheel.RotateRight();
  lbWheel.RotateRight();
  rfWheel.RotateLeft();
  rbWheel.RotateLeft();
}
void RCCar::GoBackward(){
  lfWheel.RotateLeft();
  lbWheel.RotateLeft();
  rfWheel.RotateRight();
  rbWheel.RotateRight();
}
void RCCar::TurnLeft(){
  lfWheel.Stop();
  lbWheel.Stop();
  rfWheel.RotateLeft();
  rbWheel.RotateLeft();

}
void RCCar::TurnRight(){
  lfWheel.RotateRight();
  lbWheel.RotateRight();
  rfWheel.Stop();
  rbWheel.Stop();
}
void RCCar::Stop(){
  lfWheel.Stop();
  lbWheel.Stop();
  rfWheel.Stop();
  rbWheel.Stop();

}