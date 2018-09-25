// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 움직임감지 센서(PIR 센서)
// 디지털 3번핀 사용

void setup() {
  //시리얼모니터 9600 사용
  //디지털 3번핀에 입력
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop() {
  //디지털 3번핀에 입력받은 센서 값을 저장할 변수 cur
  int cur = digitalRead(3);
  //움직임감지O
  if (cur == HIGH) {
    Serial.println("Detection (HIGH Signal)");
    delay(2000);
  }
  //움직임감지X
  else {
    Serial.println("Nothing (LOW Signal)");
    delay(2000);
  }
}

