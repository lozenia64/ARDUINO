// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 아날로그 슬라이드 모듈
// 아날로그 A0 핀 사용

void setup() {
  // 시리얼 모니터 9600 사용
  Serial.begin(9600);  
}

void loop() {
  // 아날로그 A0으로 받은 데이터를 변수에 저장
  int cur = analogRead(A0);
  // 시리얼 모니터에 센서 값 출력
  Serial.print(cur);
  delay(100);
}
