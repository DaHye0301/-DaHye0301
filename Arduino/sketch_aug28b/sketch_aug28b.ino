#include <Servo.h>

Servo servoX; // X축 서보 모터
Servo servoY; // Y축 서보 모터

void setup() {
  servoX.attach(9); //X축 서보 모터 핀 연결
  servoY.attach(10); //y축 서보 모터 핀 연결

  servoX.write(90);
  servoY.write(90);

  Serial.begin(9600);//시리얼 통신 시작

}

void loop() {
  if (Serial.available() > 0) {

    char command = Serial.read();

    Serial.println(command);
    
    switch(command) {
      case 'U':
        servoY.write(90); // 위로 이동
        break;
      case 'D':
        servoY.write(servoY.read() + 30); // 아래로 이동
        break;
      case 'L':
        servoX.write(90); // 왼쪽으로 이동
        break;
      case 'R':
        servoX.write(servoX.read() + 30); // 오른쪽으로 이동
        break;
    }
  }
}

