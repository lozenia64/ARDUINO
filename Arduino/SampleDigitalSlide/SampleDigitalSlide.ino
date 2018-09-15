// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int button = digitalRead(12);
  if(button == HIGH) digitalWrite(13, HIGH);
  else if(button == LOW) digitalWrite(13, LOW);
}
