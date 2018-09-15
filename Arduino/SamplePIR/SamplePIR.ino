// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
}

void loop() {
  int cur = digitalRead(3);
  if (cur == HIGH) {
    Serial.println("Detection (HIGH Signal)");
    delay(2000);
  }
  else {
    Serial.println("Nothing (LOW Signal)");
    delay(2000);
  }
}

