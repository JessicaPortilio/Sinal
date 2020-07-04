
int  ledvermelho = 7;
int  ledamarelo = 6;
int  ledverde = 5;
int  pledvermelho = 4;
int  pledverde = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(pledvermelho, OUTPUT);
  pinMode(pledverde, OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //liga o vermelho do sinal do carro e o verde do pedestre
  digitalWrite(ledvermelho, HIGH);
  digitalWrite(pledverde, HIGH);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledverde, LOW);
  digitalWrite(pledvermelho, LOW);
  delay(3000);
  for(int i = 0; i<10; i++)
  {
     digitalWrite(pledverde, HIGH);
     delay(100);
     digitalWrite(pledverde, LOW);
     delay(100);
  }

  //liga o amarelo do sinal e desliga tudo
  digitalWrite(ledamarelo, HIGH);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(ledverde, LOW);
  digitalWrite(pledvermelho, HIGH);
  digitalWrite(pledverde, LOW);  
  delay(2000);  
   
  //liga o sinal verde do carro e o vermelho do pedestre 
  digitalWrite(ledverde, HIGH);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, LOW);
  digitalWrite(pledvermelho, HIGH);
  digitalWrite(pledverde, LOW);
  delay(3000);
}
