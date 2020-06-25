/*
  Vídeo 9

  Neste vídeo, o último com a montagem atual usando o display de 7
  segmentos, vamos fazer a última otimização no código através de mais
  um aprofundamento na linguagem C e no framework do Arduino.

  Para isso, uso o conteúdo teórico apresentado no vídeo 8 para mostrar
  que cada dígito do display de 7 segmentos pode ser inteiramente
  configurado usando apenas um byte, usando apenas um bit para representar
  cada um dos segmentos, acessando estes bits através da função bitRead().


  Link para o Thinkercad: https://www.tinkercad.com/things/2xSKDYAtZug


  Histórico:
    - 20200621 - Versão inicial

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


byte digito[10] = {63,6,91,79,102,109,125,7,127,111};


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
  for (byte x = 0; x <= 6; x++) {
    digitalWrite(segA + x, bitRead(digito[dig], x));
  }
}
