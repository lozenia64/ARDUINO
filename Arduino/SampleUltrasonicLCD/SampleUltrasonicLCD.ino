#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);

int echoPin = 12, trigPin = 13;

void setup() {
  lcd.init();
  lcd.backlight();
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

  lcd.clear();
  lcd.print("Distance");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print("cm");
  delay(500);
}
