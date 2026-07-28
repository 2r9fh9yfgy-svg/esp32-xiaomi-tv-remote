#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println();
  Serial.println("=================================");
  Serial.println("ESP32 Xiaomi TV Remote");
  Serial.println("Start...");
  Serial.println("=================================");
}

void loop() {
  delay(1000);
}
