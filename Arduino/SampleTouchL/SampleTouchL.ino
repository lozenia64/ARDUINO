// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 라킹터치센서 사용
// 라킹터치센서 디지털 3번핀 사용

void setup() {
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int cur = digitalRead(3);
  digitalWrite(13,cur);
}

