#include <FT817D.h>

void setup() {
  Serial.begin(115200);
}
void loop() {
  Serial.println(random(analogRead(random(0,7))));
  delayMicroseconds(13731);
}
