/*
  Vídeo 2

  Neste vídeo, começo a utilizar o Arduino para controlar leds externos,
  apresentando como usar várias portas ao mesmo tempo.

  Aproveito para introduzir o conceito de função e como declarar a
  primeira função e passar parâmetro para ela.

  São abordados os primeiros conceitos de estruturas condicionais (if),
  explicando o que é uma comparação e o que a diferencia de atribuição.

  Além disso, apresento o conceito de diretiva, a diretiva #define e sua
  diferença entre #define e variável.


  Link para o Thinkercad: https://www.tinkercad.com/things/djQAkdwqXOO


  Histórico:
    - 20200605 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

#define VERDE    1
#define AMARELO  2
#define VERMELHO 3

void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}


void loop() {
  acendeLed(VERDE);

  acendeLed(AMARELO);

  acendeLed(VERMELHO);
}

void acendeLed(int cor) {

  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  if (cor == VERDE) {
    digitalWrite(11, HIGH);
  }

  if (cor == AMARELO) {
    digitalWrite(12, HIGH);
  }

  if (cor == VERMELHO) {
    digitalWrite(13, HIGH);
  }

  delay(3000);
}
