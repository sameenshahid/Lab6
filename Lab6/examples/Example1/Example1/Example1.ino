#include <Lab6.h>

Lab6 ledLib(2, 3, 4, 5);

void setup() {
    ledLib.begin();
}

void loop() {
    ledLib.generateRandNumber();
    delay(3000);
    ledLib.upCount();
    delay(3000);
    ledLib.downCount();
    delay(3000);
    ledLib.shiftRight(15, 2);
    delay(3000);
    ledLib.shiftLeft(1, 2);
    delay(3000);
    ledLib.allOff();
    delay(3000);
    ledLib.allOn();
    delay(3000);
}
