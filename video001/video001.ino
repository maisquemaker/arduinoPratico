/*
  Vídeo 1 - Introdução

  Neste vídeo, explico o básico necessário para se utilizar leds e apresento
  a estrutura básica de um programa para Arduino usando a IDE. 
  
  Falo, ainda, sobre as primeiras funções para se manipular a porta, além de
  uma introdução bem supercifial do que se trata a eletrônica digital e como
  um microcontrolador é capaz de realizar instruções em grandes velocidades.

  O programa é a reconstrução do clássico Blink, disponível nos exemplos
  presentes na instalação básica da Arduino IDE.

  São apresentadas as funções internas pinMode(), digitalWrite() e delay().


  Histórico:
    - 20200601 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

void setup() {
  pinMode(13, OUTPUT);
}


void loop() {
  digitalWrite(13, HIGH);
  delay(1000); // = 1 segundo
  digitalWrite(13, LOW);
  delay(1000); // = 1 segundo
}
