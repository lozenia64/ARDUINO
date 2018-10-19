// lozenia64
// https://blog.naver.com/ljy9378/221363773917
// Sample source cod for Arduino

// 서보모터, 초음파센서 사용
// 서보모터 디지털 9번 핀 사용
// 초음파센서 디지털 10, 11번 핀 사용

#include <Servo.h> 
Servo servo; 
int echoPin = 10, trigPin = 11, servoPin = 9;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo.attach(servoPin); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH); 
  //초음파센서가 읽은 거리, cm로 표현할 변수 distance
  float distance = ((float)(340 * duration) / 10000) / 2;  
  servo.write(0);

  //거리가 20cm 이내일때 모터 작동
  if (distance < 20){
    servo.write(110); 
    delay(3000);
  }

  delay(50);
}
