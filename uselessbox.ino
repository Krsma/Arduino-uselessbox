#include <VarSpeedServo.h>



VarSpeedServo krov;
VarSpeedServo ruka;

int servo1=9;
int servo2=10;

boolean prekidac=false;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
krov.attach(servo1);
ruka.attach(servo2);

krov.write(0,100,true);
ruka.write(0,100,true);
}

void loop() {
  // put your main code here, to run repeatedly:
    if (prekidac=true)
    {
      delay(300);
      krov.write(180, 200, true);
      delay(50);
      ruka.write(180,255,true);
      delay(75);
      ruka.write(0,255,true);
      delay(50);
      krov.write(0,255,true);
      }


  delay(20);    
}
