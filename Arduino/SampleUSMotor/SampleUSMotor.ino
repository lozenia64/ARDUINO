// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

#include <Servo.h>
Servo myservo;
int trig = 13;
int echo = 12;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {
  for(int i = 0; i <= 120; i++){
    myservo.write(i);
    delay(20);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    int distance = pulseIn(echo, HIGH) * 17 / 1000;
    Serial.print(distance);
    Serial.println("cm");
  }
}


