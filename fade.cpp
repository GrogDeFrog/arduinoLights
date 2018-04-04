#include <Light.h>

Light l1(9, 10, 11, 100, 50, 0, 100, 50, 100, 1, 0.5, 1);
Light l2(3, 5, 6, 100, 50, 0, 100, 50, 100, 1, 0.5, 1);

void setup() {
  for ( int pin=0; pin <= 13; pin++ ) {
    pinMode(pin, OUTPUT)
  }
}

void loop() {
  l1.fade();
  l2.fade();
}
