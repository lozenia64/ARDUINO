// lozenia64
// https://blog.naver.com/ljy9378/221364546330
// Sample source cod for Arduino

// 서보모터, 적외선감지센서 사용
// 서보모터 디지털 9번 핀 사용
// 적외선감지센서 디지털 10번 핀 사용

#include <Servo.h> 
Servo servo; 
int pirPin = 10, servoPin = 9;

void setup() {
  pinMode(pirPin, INPUT);
  servo.attach(servoPin); 
}

void loop() {
  //적외선감지 센서로부터 받은 값을 변수 cur에 저장
  int cur = digitalRead(pirPin);
  if (cur == HIGH) servo.write(110);
  else servo.write(0);
}
