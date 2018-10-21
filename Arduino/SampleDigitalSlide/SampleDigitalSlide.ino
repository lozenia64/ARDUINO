// lozenia64
// https://blog.naver.com/ljy9378/221356432032
// Sample source cod for Arduino

// 디지털슬라이드 모듈 사용
// 디지털 12번 핀 사용

void setup() {
  //디지털 12번핀에 입력, 13번 핀 LED 테스트
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  //입력받은 센서값을 저장할 변수 button
  int button = digitalRead(12);
  //button은 0,1 둘 중 하나의 값을 가짐
  if(button == HIGH) digitalWrite(13, HIGH);
  else if(button == LOW) digitalWrite(13, LOW);
}
