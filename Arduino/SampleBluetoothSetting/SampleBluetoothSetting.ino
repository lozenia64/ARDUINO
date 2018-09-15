// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

#include <SoftwareSerial.h>
SoftwareSerial btSerial(4,5);

void setup() {
  Serial.begin(9600);
  btSerial.begin(9600);
}

void loop() {
  if(btSerial.available()) Serial.write(btSerial.read());
  if(Serial.available()) btSerial.write(Serial.read());
}
