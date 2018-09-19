// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

void setup() {}

void loop() {
	// 아날로그 핀 A0에 입력받은 센서값을 변수에 저장
	int cur = analogRead(A0);
	// 센서값이 0~1023이므로 RGB값에 맞게 범위 조정(0~255)
	float R = 255 - (float)cur/1023*255;
	// RGB핀은 각각 9,10,11
	analogWrite(9, R);
	analogWrite(10, 255);
	analogWrite(11, 255);
}
