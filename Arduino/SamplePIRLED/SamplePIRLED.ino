// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

// 움직임 감지센서 사용
// 디지털 3번핀 사용

void setup() {
  pinMode(3, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  //디지털 3번핀에 입력받은 센서 값을 저장할 변수 cur
  int cur = digitalRead(3);
  //움직임 감지되면 LED ON, 아닐 때는 OFF
  if (cur == HIGH) digitalWrite(13,HIGH);
  else digitalWrite(13,LOW);
}

