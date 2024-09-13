#ifndef __DCMOTOR_H__
#define __DCMOTOR_H__

class DCMotor {
  int pinL, pinR;
  public:
  DCMotor(int pinL, int pinR);
  void RotateLeft();
  void RotateRight();
  void Stop();
};

#endif