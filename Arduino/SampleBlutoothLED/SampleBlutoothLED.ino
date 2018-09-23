// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 블루투스 모듈 사용
// 블루투스 모듈 디지털 4,5번 핀 사용

#include <SoftwareSerial.h>
SoftwareSerial btSerial(5,4);
void setup() {
  btSerial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop() {
  if (btSerial.available()){
    char bt = btSerial.read();
	//블루투스로 'a'를 받으면 LED on, 'b'를 받으면 LED off
    if(bt == 'a') digitalWrite(13,HIGH);
    if(bt == 'b') digitalWrite(13,LOW);
  }
}
