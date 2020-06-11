/*
  Vídeo 4

  Neste vídeo, continuo com o exemplo anterior, apresentando apenas um
  pequeno acréscimo na complexidade do programa. Declaro mais uma 
  variável e incluo mais uma condição.

  Apresento superficialmente o significado de cátodo comum, necessário
  para o vídeo seguinte.
  
  
  Histórico:
    - 20200606 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

int led = 0;
int inc = 1;

void setup() {
  
  for(int i = 3; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }
}


void loop() {
  
  for (int i = 3; i <= 12; i++) {
    digitalWrite(i, LOW);
  }

  digitalWrite(3 + led, HIGH);
  led = led + inc;

  if (led == 10) {
    inc = -1;
  }

  if (led == 0) {
    inc = 1;
  }
  
  delay(50);
}
