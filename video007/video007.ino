#define segA 3
#define segB 4
#define segC 5
#define segD 6
#define segE 7
#define segF 8
#define segG 9

byte digito[10][7] = {

// A B C D E F G 
  {1,1,1,1,1,1,0}, // Dígito 0
  {0,1,1,0,0,0,0}, // Dígito 1
  {1,1,0,1,1,0,1}, // Dígito 2
  {1,1,1,1,0,0,1}, // Dígito 3
  {0,1,1,0,0,1,1}, // Dígito 4
  {1,0,1,1,0,1,1}, // Dígito 5
  {1,0,1,1,1,1,1}, // Dígito 6
  {1,1,1,0,0,0,0}, // Dígito 7
  {1,1,1,1,1,1,1}, // Dígito 8
  {1,1,1,1,0,1,1}  // Dígito 9
 };

void setup() {
  for (int i = 3; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}


void loop() {
  for (byte digito = 0; digito <= 9; digito++) {
    escreveDigito(digito);
    delay(500);
  }
}


void escreveDigito(int dig) {
  for (byte seg = 0; seg <= 6; seg++) {
    digitalWrite(segA + seg, digito[dig][seg]);
  }
}
