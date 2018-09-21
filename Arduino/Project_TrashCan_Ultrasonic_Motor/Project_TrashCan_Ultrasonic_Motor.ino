#include <Servo.h> 
Servo servo; 
int echoPin = 10;
int trigPin = 11;
int servoPin = 9;

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
  float distance = ((float)(340 * duration) / 10000) / 2;  
  servo.write(0);

  if (distance < 20){
    servo.write(110); 
    delay(3000);
  }

  delay(50);
}
