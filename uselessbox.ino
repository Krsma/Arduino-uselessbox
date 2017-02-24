#include <VarSpeedServo.h>


VarSpeedServo ruka;

int servo1=9;
int bes;

boolean prekidac=false;
void setup() {
  // put your setup code here, to run once:
bes=0;
ruka.attach(servo1);

ruka.write(0,100,true);
}

void loop() {
angermanagment;
    if (prekidac=true)
    {
      
      inc(bes);
      delay(100);
      ruka.write(180,255,true);
      delay(50);
      ruka.write(0,255,true);
      }



if (millis()-drkan>3000)
{
  drkan=millis();
  bes=bes-1;
  
  }
  
  
  delay(5);    
}

void angermanagment;

{
  //kontorla led dioda kao i ponasanje robota bryakov posao
  
  }


