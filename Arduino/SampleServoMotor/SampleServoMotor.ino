// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 서보모터 사용

#include <Servo.h> 
Servo servo;
int servoPin = 9;
void setup() { 
    servo.attach(servoPin); 
} 

void loop() { 
  // scan from 0 to 180 degrees
  for(int angle = 0; angle < 180; angle++) { 
    servo.write(angle); 
    delay(5); 
  } 
  // now scan back from 180 to 0 degrees
  for(int angle = 180; angle > 0; angle--) { 
    servo.write(angle); 
    delay(5); 
  } 
} 

