#define pinoCol0   5
#define pinoLin0   9


void setup() {

  for (byte b = 0; b <= 3; b++) {
    pinMode(pinoCol0 + b, INPUT_PULLUP);
    pinMode(pinoLin0 + b, OUTPUT);
    digitalWrite(pinoLin0 + b, HIGH);
  }

  Serial.begin(9600);
}


void loop() {

  char tecla;

  tecla = leTeclado();

  if (tecla != 'Z') {
    Serial.println(tecla);
  }
}


char leTeclado() {

  char mapa[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
  };

  char retorno = 'Z';

  for (byte lin = 0; lin <= 3; lin++) {

    digitalWrite(pinoLin0 + lin, LOW);

    for (byte col = 0; col <= 3; col++) {
      if (digitalRead(pinoCol0 + col) == LOW) {
        retorno = mapa[lin][col];
      }
    }
    digitalWrite(pinoLin0 + lin, HIGH);
  }
  return retorno;
}
