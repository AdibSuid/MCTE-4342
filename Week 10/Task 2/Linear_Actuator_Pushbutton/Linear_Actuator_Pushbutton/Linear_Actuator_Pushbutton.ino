// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 10;  // the number of the pushbutton pin
const int buttonPin2 = 11;
const int pwmPin = 6;       // the number of the PWM pin
const int dirPin = 5;       // the number of the direction pin

// variables will change:
int buttonState1 = 0;  // variable for reading the pushbutton status
int buttonState2 = 0;

void setup() {
  // initialize the motor control pins as outputs:
  pinMode(pwmPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  // initialize the pushbutton pins as inputs:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton values:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 == HIGH) {
    // set motor direction to clockwise
    digitalWrite(dirPin, HIGH);
    // set motor speed (can be any value between 0-255)
    analogWrite(pwmPin, 255);  // speed
  } else if (buttonState2 == HIGH) {
    // set motor direction to counterclockwise
    digitalWrite(dirPin, LOW);
    // set motor speed (can be any value between 0-255)
    analogWrite(pwmPin, 255);  // speed 
  } else {
    // if neither button is pressed, stop the motor
    analogWrite(pwmPin, 0);
  }
}

