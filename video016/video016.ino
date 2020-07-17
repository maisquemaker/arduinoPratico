#define stDesativado 0
#define stAtivado    1
#define stDisparou   2


#define pinoCol0   5
#define pinoLin0   9
#define pinoBuzzer 3
#define pinoLed    4
#define pinoSirene 2

char senhaGravada[4] = {'2','4','6','8'};
char senhaDigitada[4];
char ultimaTecla = 0;

byte posDigito = 0;
byte statusAlarme = stDesativado;
byte statusLed = 0;

unsigned long tempoPiscada;


void setup() {

  for (byte b = 0; b <= 3; b++) {
    pinMode(pinoCol0 + b, INPUT_PULLUP);
    pinMode(pinoLin0 + b, OUTPUT);
    digitalWrite(pinoLin0 + b, HIGH);
  }

  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoSirene, OUTPUT);
  digitalWrite(pinoSirene, LOW);

  tempoPiscada = millis();

  Serial.begin(9600);
}


void loop() {

  char tecla;

  tecla = leTeclado();

  if (tecla != ultimaTecla) {

    ultimaTecla = tecla;

    if (tecla != 'Z') {

      if (statusAlarme == stDesativado) {

        //Este código é executado apenas
        //se o alarme estiver DESATIVADO

        if (tecla == '*') {

          statusAlarme = stAtivado;
          posDigito = 0;

          for (byte b = 0; b <= 1; b++) {
            digitalWrite(pinoBuzzer, HIGH);
            delay(200);
            digitalWrite(pinoBuzzer, LOW);
            delay(400);
          }
        }
      }
      else
      {
        //Este código é executado se o
        //alarme estiver ATIVADO ou DISPAROU
        senhaDigitada[posDigito] = tecla;
        digitalWrite(pinoBuzzer, HIGH);
        delay(30);
        digitalWrite(pinoBuzzer, LOW);

        posDigito++;

        if (posDigito == 4) {
  
          posDigito = 0;
          
          if (verificaSenha()) {

            //Este código é executado
            //se a senha estiver CORRETA
            
            statusAlarme = stDesativado;
            for (byte b = 0; b < 3; b++) {
              digitalWrite(pinoBuzzer, HIGH);
              delay(100);
              digitalWrite(pinoBuzzer, LOW);
              delay(100);
            }
            

          } else {
            digitalWrite(pinoBuzzer, HIGH);
            delay(1000);
            digitalWrite(pinoBuzzer, LOW);
          }
        }
      }
    }
  }

  if (alarmeDetectado() && 
      statusAlarme == stAtivado) {
        
    statusAlarme = stDisparou;
  }


  if (statusAlarme == stDisparou) {
    digitalWrite(pinoSirene, HIGH);
  } else {
    digitalWrite(pinoSirene, LOW);
  }


  if (statusAlarme == stDesativado) {
    digitalWrite(pinoLed, LOW);
  }
  
  if (statusAlarme == stAtivado) {
    if (millis() - tempoPiscada >= 2000) {
      tempoPiscada = millis();
      digitalWrite(pinoLed, HIGH);
      delay(80);
      digitalWrite(pinoLed, LOW);
    }
  }

  if (statusAlarme == stDisparou) {
    if (millis() - tempoPiscada >= 500) {
      tempoPiscada = millis();
      digitalWrite(pinoLed, statusLed);
      statusLed = 1 - statusLed;      
    }
  }
  
}


char leTeclado() {

  char mapa[4][4] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
  };
  
  char retorno = 'Z';

  for (byte lin = 0; lin <= 3; lin++) {
    
    digitalWrite(pinoLin0 + lin, LOW);
    
    for (byte col = 0; col <= 3; col++) {
      if (digitalRead(pinoCol0 + col) == LOW) {
        retorno = mapa[lin][col];
      }
    }
    digitalWrite(pinoLin0 + lin, HIGH);
  }
  return retorno;
}


boolean verificaSenha() {

  if (senhaDigitada[0] == senhaGravada[0] &&
      senhaDigitada[1] == senhaGravada[1] &&
      senhaDigitada[2] == senhaGravada[2] &&
      senhaDigitada[3] == senhaGravada[3]) {

    return true;
  } else {
    return false;
  }
}


boolean alarmeDetectado() {
  return analogRead(A0) < 200;
}
