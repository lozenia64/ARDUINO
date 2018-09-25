// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// RGB 3색 LED 사용
// 디지털 9,10,11번 핀 사용

void setup() {}

void loop() {
  analogWrite(9, 0);    //R : 255
  analogWrite(10, 255); //G : 0
  analogWrite(11, 255); //B : 0     빨간색
  delay(800);
  analogWrite(9, 255);  //R : 0
  analogWrite(10, 0);   //G : 255
  analogWrite(11, 255); //B : 0     초록색  
  delay(800);
  analogWrite(9, 255);  //R : 0
  analogWrite(10, 255); //G : 0
  analogWrite(11, 0);   //B : 255   파란색
  delay(800);
  analogWrite(9, 25);
  analogWrite(10, 25);
  analogWrite(11, 5);
  delay(800);
  analogWrite(9, 17);
  analogWrite(10, 125);
  analogWrite(11, 17);
  delay(800);
}
