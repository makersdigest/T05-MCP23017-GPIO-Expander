/*
 * Maker's Digest
 */
#include "DHT.h"            // Include the DHT Library

int dhtPin = 2;             // Set pin to pin 2 (digital)
int dly = 2000;             // Define delay of 2000ms (2 seconds)

//#define DHT_TYPE DHT11      // Uncomment if using the blue (dht11) sensor
#define DHT_TYPE DHT22    // Uncomment if using the white (dht22) sensor

DHT dht(dhtPin, DHT_TYPE);  // Instantiate the DHT object from the library

void setup() {

  Serial.begin(19200);
  Serial.println("Makers Digest: Ready");

  pinMode(dhtPin, INPUT_PULLUP);  // Tell arduino we are using pullup resistor
  dht.begin();                    // Begin DHT;
}

void loop() {
  // Set our delay at the beginning so the sensor has time to gather 
  // data
  delay(dly);

  // Read in the Humidity and Temperature.
  // Note 1: You can pass true to dht.readTemperature(true) to 
  // return value in fahrenheit. 
  // Note 2: There are several other functions. Check out the library
  // at: https://github.com/adafruit/DHT-sensor-library
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(true);

  // Check to see if the values are empty. Display error if they are.
  if( isnan(humidity) || isnan(temperature) ) {
    Serial.println("DHT Sensor read Failed!");
    return;
  }

  // Print out our values to the serial console.
  Serial.print("Humidity: ");
  Serial.print(humidity);

  Serial.print("\t");
  Serial.print("Temperature: ");
  Serial.println(temperature);
}
