/**
 * This example turns the ESP32 into a Bluetooth LE mouse that scrolls down every 2 seconds.
 */
#include <BleMouse.h>

BleMouse bleMouse;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleMouse.init();
}

void loop() {
  if(bleMouse.isConnected()) {
    Serial.println("Scroll Down");
    bleMouse.scrollDown();
  }
  delay(2000);
}