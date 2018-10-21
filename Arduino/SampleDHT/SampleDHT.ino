// lozenia64
// https://blog.naver.com/ljy9378/221356541979
// Sample source cod for Arduino

// 온습도센서 사용
// 온습도센서 DHT11 디지털 2번핀 사용

#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11
//DHT dht(디지털 핀, DHT넘버)
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  //시리얼모니터 9600번 사용
  Serial.begin(9600);
}

void loop() {
  // 온도, 습도를 저장할 변수 t,h
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" C");
  delay(2000);
}
