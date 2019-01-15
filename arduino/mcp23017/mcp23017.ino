/*
 * Maker's Digest
 *
 * Example code for MCP23017 GPIO Expander
 */

#include "Adafruit_MCP23017.h"

Adafruit_MCP23017 mcp;    // Instantiate mcp object
int dly = 250;            // 1/4 second delay

void setup() {
  Serial.begin(19200);
  Serial.println("Makers Digest: Ready");

  mcp.begin();            // "Start" the mcp object

  /*
   * Set up pin modes.
   * We are configuring ALL GPIO as output. So I just looped
   * through all 16. You can set them up individually with:
   * mcp.pinMode(0, OUTPUT);
   * OR
   * mcp.pinMode(1, INPUT);
   * 
   * Check out the Adafruit library for more info. 
   */
  for(int i = 0; i <= 15; i++) {
    mcp.pinMode(i, OUTPUT);
  }
}

void loop() {
  /*
   * Loop through all 16 GPIO and flash ON then OFF. 
   */
  for(int i = 0; i <=15; i++) {
    Serial.print("Flashing GPIO: ");  // Tell us what pin is flashing.
    Serial.println(i);
    
    mcp.digitalWrite(i, HIGH);        // Set pin HIGH (on)
    delay(dly);                       // On for 1/4 second
    mcp.digitalWrite(i, LOW);         // Set pin LOW (off)
    delay(dly);                       // Off for 1/4 Second
  }
}
