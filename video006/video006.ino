#define segA 3
#define segB 4
#define segC 5
#define segD 6
#define segE 7
#define segF 8
#define segG 9

void setup() {
  for (int i = 3; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}


void loop() {

  for (int i = 0; i <= 9; i++) {
    escreveDigito(i);
    delay(500);
  }
}


void escreveDigito(int dig) {

  for (int i = segA; i <= segG; i++) {
    digitalWrite(i, LOW);
  }

  if (dig != 1 && dig != 4) {
    digitalWrite(segA, HIGH);
  }

  if (dig != 5 && dig != 6) {
    digitalWrite(segB, HIGH);
  }

  if (dig != 2) {
    digitalWrite(segC, HIGH);
  }

  if (dig != 1 && dig != 4 && dig != 7) {
    digitalWrite(segD, HIGH);
  }

  if (dig != 1 && dig != 3 && dig != 4 && 
      dig != 5 && dig != 7 && dig != 9) {
    digitalWrite(segE, HIGH);
  }

  if (dig != 1 && dig != 2 && dig != 3 &&
      dig != 7) {
    digitalWrite(segF, HIGH);
  }

  if (dig != 0 && dig != 1 && dig != 7) {
    digitalWrite(segG, HIGH);
  }
}
