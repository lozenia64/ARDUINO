// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {}

void loop() {
  int cur = analogRead(A0);
  float R = 255 - (float)cur/1023*255;
  analogWrite(9, R);
  analogWrite(10, 255);
  analogWrite(11, 255);
}
