// lozenia64
// https://blog.naver.com/ljy9378/221360054559
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
    // Turn on/off
    if(bt == 'p') {
      //tv전원
      irsend.sendNEC(0x20DF10EF, 32);
      delay(500);
      //셋탑전원
      irsend.sendNEC(0x122430CF, 32);
    }
    // volume up/down
    else if(bt == 'v') irsend.sendNEC(0x1224C837, 32);
    else if(bt == 'w') irsend.sendNEC(0x122428D7, 32);
    // channel up/down
    else if(bt == 'c') irsend.sendNEC(0x1224E817, 32);
    else if(bt == 'd') irsend.sendNEC(0x122418E7, 32);
    // channel
    else if(bt == '0') irsend.sendNEC(0x122400FF, 32);
    else if(bt == '1') irsend.sendNEC(0x1224807F, 32);
    else if(bt == '2') irsend.sendNEC(0x122440BF, 32);
    else if(bt == '3') irsend.sendNEC(0x1224C03F, 32);
    else if(bt == '4') irsend.sendNEC(0x122420DF, 32);
    else if(bt == '5') irsend.sendNEC(0x1224A05F, 32);
    else if(bt == '6') irsend.sendNEC(0x1224609F, 32);
    else if(bt == '7') irsend.sendNEC(0x1224A659, 32);
    else if(bt == '8') irsend.sendNEC(0x122400FF, 32);
    else if(bt == '9') irsend.sendNEC(0x1224906F, 32);
  }
}
