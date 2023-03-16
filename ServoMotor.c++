//Codigo de rotação de um motor
#include myservo;

int angle=0;

void setub(){
    myservo.attach(9);
}

void loop(){
    for (angle=0; angle<180; angle+=1){
        myservo.write(angle);
        delay(20);
    }
    for (angle=180; angle>=1){
        myservo.write(angle);
        delay(20);
    }

}