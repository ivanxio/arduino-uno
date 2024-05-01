int LED_1 = 13;
int LED_2 = 11;
int LED_3 = 10;
int data;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  data = analogRead(A0);
  data = map(data, 0, 1023, 200, 5000);
  Serial.println(data);

  digitalWrite(LED_1, HIGH);
  delay(data);
  digitalWrite(LED_1, LOW);
  delay(data);

}
