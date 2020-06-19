/*
  Vídeo 6

  Neste vídeo, continuo usando a mesma montagem com o display de 7
  segmentos para apresentar uma introdução bem simplificada das operações
  lógicas 'OU' e 'E', além da aplicação de comparações através do operador
  'diferente' (!=).

  Introduzo ainda a aplicação do `else` na complementação da instrução
  if, apresentada anteriormente.

  Durante todo o vídeo, mostro a importância em refatorar códigos de modo
  a economizar memória nos programas desenvolvidos para microcontroladores.

  Link para o Thinkercad: https://www.tinkercad.com/things/5bakCaxvpBk


  Histórico:
    - 20200618 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

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
