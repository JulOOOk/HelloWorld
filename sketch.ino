const int ledRed = 13;

void setup() {
  pinMode(ledRed, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH);
  delay(200);
  digitalWrite(ledRed, LOW);
  delay(200);
}
