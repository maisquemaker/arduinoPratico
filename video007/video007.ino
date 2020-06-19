/*
  Vídeo 7

  Neste vídeo, ainda com a mesma montagem com o display de 7 segmentos,
  vamos aprimorar ainda mais o nosso código através do aprofundamento na
  linguagem C.

  Apresento o tipo 'byte' (um 'alias' para o tipo nativo `unsigned char`)
  e a sua vantagem sobre o tipo 'int', apresentado anteriormente.

  Apresento, ainda, a definição de `vetor`, como declarar e acessar, além
  de suas vantagens e aplicação direta no projeto.

  Continuo mostrando maneiras diferentes de mapear os segmentos de cada um
  dos 10 dígitos, tornando o código cada vez mais eficiante

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
