// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

#include <SoftwareSerial.h>
SoftwareSerial btSerial(5,4);
void setup() {
  btSerial.begin(9600);
  pinMode(13,OUTPUT);
}
void loop() {
  if (btSerial.available()){
    char bt = btSerial.read();
    if(bt == 'a') digitalWrite(13,HIGH);
    if(bt == 'b') digitalWrite(13,LOW);
  }
}
