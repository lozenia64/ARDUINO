// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

#include <ESP8266WiFi.h>
const char* ssid     = "iptime";
const char* password = "";

void setup() {
  Serial.begin(115200);
  delay(1000);
  WiFi.disconnect();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  Serial.println(WiFi.SSID());
  WiFi.setAutoConnect(true); //자동 접속 설정
  WiFi.setAutoReconnect(true); //자동 재접속 설정 
  WiFi.waitForConnectResult();
  Serial.println(WiFi.localIP());
}

void loop() {}
