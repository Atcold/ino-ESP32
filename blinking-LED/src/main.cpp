#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED is ON");
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED is OFF");
  delay(500);
}