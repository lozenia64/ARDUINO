int echoPin = 12;
int trigPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); //출력
  pinMode(echoPin, INPUT);  //입력
}

void loop() {
  digitalWrite(trigPin, LOW);
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  unsigned long duration = pulseIn(echoPin, HIGH); 
  float distance = ((float)(340 * duration) / 10000) / 2;  
  
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}

