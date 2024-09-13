#ifndef __RCCAR_H__
#define __RCCAR_H__

class RCCar {
  DCMotor lfWheel;
  DCMotor lbWheel;
  DCMotor rfWheel;
  DCMotor rbWheel;
public:
  RCCar(DCMotor&,DCMotor&,DCMotor&,DCMotor&);
  void GoForward();
  void GoBackward();
  void TurnLeft();
  void TurnRight();
  void Stop();
};
#endif