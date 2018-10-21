// lozenia64
// https://blog.naver.com/ljy9378/221356529467
// Sample source cod for Arduino

// 조도센서 사용
// 조도센서 아날로그 핀 A0 사용

void setup() {
  //시리얼모니터 9600번 사용
  Serial.begin(9600);
}

void loop() {
  //아날로그 0번 핀에서 받은 센서 값을 저장할 변수 cur
  int cur = analogRead(A0);
  Serial.println(cur);
  delay(1000);
}
