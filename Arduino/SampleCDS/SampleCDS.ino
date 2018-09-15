// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {
 Serial.begin(9600);
}

void loop() {
  int cur = analogRead(A0);
  Serial.println(cur);
  delay(1000);
}
