/*
  Vídeo 12

  Neste vídeo, apresento como usar as portas analógicas do Arduino através da
  função analogRead(). Através da aplicação direta da teoria apresentada no
  video anterior, demonstro como conseguimos obter vários valores diferentes
  na porta analógica A0 usando um potenciômetro comum.

  A seguir, mostro um componente novo: o LDR. Analiso a sua variação de
  resistência de acordo com a incidência de luz e faço um divisor de tensão
  simples usando um outro resistor e a teoria que já aprendemos.

  Por fim, mostro a construção de um alarme de interrupção de laser, usando o
  divisor de tensão em conjunto com dois novos componentes: o emissor laser e
  o buzzer ativo.


  Link para o Thinkercad: https://www.tinkercad.com/things/haCbqNjYgH4


  Histórico:
    - 20200625 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

void setup() {
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}


void loop() {

  int x;

  x = analogRead(A0);
  Serial.println(x);

  if (x < 1000) {
    beep();
  } else {
    digitalWrite(3, LOW);
  }
}


void beep() {
  for (byte b = 0; b < 4; b++) {
    digitalWrite(3, HIGH);
    delay(70);
    digitalWrite(3, LOW);
    delay(70);
  }
  delay(440);
}
