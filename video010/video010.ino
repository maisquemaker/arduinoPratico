/*
  Vídeo 10

  Neste vídeo, apresento como usar as portas do Arduino no modo entrada
  através da função digitalRead(). Aproveito para mostrar o conceito
  básico de sensores, apresentando o switch, o mais simples dos
  sensores, e como ele funciona.

  Mostro, ainda, o conceito de pull-up e a diferença entre os modos
  INPUT e INPUT_PULLUP.

  Contamos agora com uma nova ferramenta: um analisador do estado de
  cada pino, que será apresentado com mais detalhes em vídeos
  posteriores.


  Link para o Thinkercad: https://www.tinkercad.com/things/czBK44ExxN5


  Histórico:
    - 20200621 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

void setup() {
  pinMode(3, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}


void loop() {

  byte x;

  x = digitalRead(3);

  if (x == LOW) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }
}
