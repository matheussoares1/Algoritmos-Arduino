#define LED 11

void setup(){
    pinMode(11, OUTPUT); //SAIDA 11 PARA ENERGIZAÇÃO DO LED COM  CONEXAO PROTOBOARD
}

void loop(){
    digitalWrite(11, HIGH); //ATIVADO
    delay(1000);    //1 SEGUNDO
    digitalWrite(11, LOW); //DESLIGADO
    delay(1000);    //1 SEGUNDO
}