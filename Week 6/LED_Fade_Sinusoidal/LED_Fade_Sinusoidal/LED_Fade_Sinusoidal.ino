const int ledPin = 3; // Define the pin for the LED
const int fadeDuration = 4000; // Duration of one full fade cycle in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  // Calculate the current brightness using a sine function
  // brightness ranges from 0 to 255
  int brightness = 128 + 127 * sin(2 * PI * millis() / fadeDuration);

  // Set the brightness of the LED
  analogWrite(ledPin, brightness);

  // Delay to control the fading speed
  delay(15); // Adjust this delay to control fading smoothness
}

