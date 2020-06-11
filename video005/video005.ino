/*
  Vídeo 4

  Neste vídeo, apresento um novo componente: o display de 7 segmentos,
  explicando como funcionam seus leds e a aplicação do cátodo comum.

  Depois, apresento mais exemplos da aplicação do "for", "if" e
  chamada de função passando parâmetro.

  Como foi o primeiro contato com o display, o código não está
  otimizado e tem como propósito apenas mostrar a funcionalidade. O
  próximo vídeo apresentará mais informações necessárias ao
  aperfeiçoamento do código.
  
  
  Histórico:
    - 20200609 - Versão inicial

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

  for (int i = 3; i <= 9; i++) {
    digitalWrite(i, LOW);
  }

  if (dig == 0) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
  }

  if (dig == 1) {
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
  }

  if (dig == 2) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segG, HIGH);
  }

  if (dig == 3) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segG, HIGH);
  }

  if (dig == 4) {
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }

  if (dig == 5) {
    digitalWrite(segA, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }

  if (dig == 6) {
    digitalWrite(segA, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
  
  if (dig == 7) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
  }

  if (dig == 8) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segE, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }

  if (dig == 9) {
    digitalWrite(segA, HIGH);
    digitalWrite(segB, HIGH);
    digitalWrite(segC, HIGH);
    digitalWrite(segD, HIGH);
    digitalWrite(segF, HIGH);
    digitalWrite(segG, HIGH);
  }
}
