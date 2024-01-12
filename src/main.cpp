#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

const int analogPin = A1; // A1 pin on ESP32

void setup() {
  Serial.begin(9600);
}

void loop() {
  // get analog reading
  int analogValue = analogRead(analogPin);

  // convert analog reading to voltage
  float voltage = (analogValue/4095.0) * 3.3;

  // print analog value and voltage
  Serial.print("Analog Value: ");
  Serial.println(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);

  delay(1000); // Optional delay to slow down the readings
}