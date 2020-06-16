#define segA 3
#define segB 4
#define segC 5
#define segD 6
#define segE 7
#define segF 8
#define segG 9


byte digito[10] = {63,6,91,79,102,109,125,7,127,111};


void setup() {
  for (int i = 3; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}


void loop() {
  for (byte digito = 0; digito <= 9; digito++) {
    escreveDigito(8);
    delay(500);
  }
}


void escreveDigito(int dig) {
  for (byte x = 0; x <= 6; x++) {
    digitalWrite(segA + x, bitRead(digito[dig], x));
  }
}
