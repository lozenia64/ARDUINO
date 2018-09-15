// lozenia64
// https://blog.naver.com/ljy9378/221357120126
// Sample source cod for Arduino

#include <SoftwareSerial.h>
#include <IRremote.h>
IRsend irsend;
SoftwareSerial btSerial(5,4);

void setup() {
  btSerial.begin(9600);
}

void loop() {
  if (btSerial.available()){
    char bt = btSerial.read();
    if(bt == 'a') {
      // Turn on/off
      irsend.sendNEC(0x20DF10EF, 32);
      delay(100);
      irsend.sendNEC(0x122430CF, 32);
    }
    // volume up
    if(bt == 'b') irsend.sendNEC(0x1224C837, 32);
    // volume down
    if(bt == 'c') irsend.sendNEC(0x122428D7, 32);
  }
}
