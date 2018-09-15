// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int cur = digitalRead(3);
  digitalWrite(13,cur);
}

