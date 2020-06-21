void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}

void loop() {

  byte x;

  x = digitalRead(3);

  if (x == LOW) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
