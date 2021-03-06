// lozenia64
// https://blog.naver.com/ljy9378/221359138846
// Sample source cod for Arduino

#define C 262 // 도 262Hz 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 
#define CC 523 // 도

// 피에조 부저 사용
// 피에조 부저 디지털 7번핀 사용

int PIN_PIEZO = 7;
// 8개 음 출력
int melody[] = { C, D, E, F, G, A, B, CC };

void setup() {}

void loop() {
  for (int i=0; i<8; i++) {
    //7번 핀에 0.2초 동안 특정 주파수의 소리 발생
    tone(PIN_PIEZO, melody[i], 200);
    delay(300);
  }
  delay(5000);
 }
