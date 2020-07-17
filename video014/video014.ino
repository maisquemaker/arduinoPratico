byte tocando = 0;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}


void loop() {

  int x;

  x = analogRead(A0);

  if (x < 200) {
    tocando = 1;
  }

  if (digitalRead(2) == LOW) {
    rearma();
  }

  if (tocando == 1) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}

void rearma() {

  tocando = 0;

  digitalWrite(3, LOW);
  delay(300);
  
  for (byte b = 0; b < 3; b++) {
    digitalWrite(3, HIGH);
    delay(100);
    digitalWrite(3, LOW);
    delay(100);
  }
}
