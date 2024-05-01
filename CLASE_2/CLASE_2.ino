int LED = 11;
int data;

void setup() {
  // Velocidad de transmision de datos entre la computadora y Arduino o viceversa.
  Serial.begin(9600);
  pinMode(LED, OUTPUT);

}

void loop() {
  data = analogRead(A0);
  data = map(data, 0, 1023, 0, 255);
  Serial.println(data);
  analogWrite(LED, data); // 0 - 255
}
