// This script turns on/off a led every 500 miliseconds.
// author: Ivan Garcia Martinez ivancho.ieg@outlook.com
//   date: April 29, 2024.

// The pin  
int LED = 13; 
// Time set for turns on/Of the led.
int SPEED = 500;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {  
  digitalWrite(LED, HIGH);
  delay(SPEED);
  digitalWrite(LED, LOW);
  delay(SPEED);
}