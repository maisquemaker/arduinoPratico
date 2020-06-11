/*
  Vídeo 3

  Neste vídeo, uso o componente "matriz de leds" para introduzir o conceito
  de laços, explicando a estrutura de um "for" simples e o que é iteração.
  
  Apresento o primeiro conceito formal de variável e como declarar, tanto 
  no corpo do programa como na estrutura do "for". Apresento ainda a
  manipulação e a maneira simplificada de incrementar variável no C.

  Mostro, em seguida, um exemplo de erro de lógica, o conceito de "escopo"
  e a diferença entre variáveis locais e globais.

  
  Histórico:
    - 20200606 - Versão inicial

  Os vídeos desta esta série podem ser assistidos no canal Mais Que Maker no
  Youtube:
  https://www.youtube.com/channel/UCAib0cXITygk7oFaeo3beUQ

*/

int led = 0;

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
  led = led + 1;

  if (led == 10) {
    led = 0;
  }

  delay(200);
}
