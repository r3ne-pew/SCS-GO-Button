/*
 * This is the simple software for using any Arduino-Programmable Device as an Input Device.
 * Will communicate with companion Software https://github.com/r3ne-pew/SCS-GO-Button-Companion
 * to trigger stuff on reset.
 * 
 * Hardware:
 * just pull RST to GND with any Normally Open Switch and you're done
 * 
 */
void setup() {
  Serial.begin(115200);
  Serial.print("trigger");
  // Deep sleep mode until RESET pin is connected to a LOW signal (pushbutton is pressed)
  ESP.deepSleep(0);
}

void loop() {
  // sleeping so wont get here
}
