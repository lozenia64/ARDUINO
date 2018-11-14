#include <SoftwareSerial.h>
#define TRIG 6
#define ECHO 7

SoftwareSerial mySerial(8,9);
long duration=0;
long distance=0;

void setup() {
  mySerial.begin(9600);
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
}

void loop() {
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  duration= pulseIn(ECHO, HIGH);
  distance = duration/58.0;

  mySerial.write(byte(distance));
  delay(1000); 
}
