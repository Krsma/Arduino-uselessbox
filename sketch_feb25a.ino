#include <VarSpeedServo.h>

extern volatile unsigned long timer0_millis;
unsigned long new_value = 0;

VarSpeedServo ruka;
VarSpeedServo krov;

int servo1=9;
int servo2=10;
int bes;
byte rnd;

boolean prekidac=false;
void setup() {
  // put your setup code here, to run once:
bes=0;
ruka.attach(servo1);
krov.attach(servo2);

ruka.write(0,100,true);
}

void loop() {
if(digitalRead(2)){
rnd= random(255);
while(rnd<145){
//vlada
  
  }
while(rnd>145){}
//brzi
 
 }
}
void angermanagment;

{
  //kontorla led dioda kao i ponasanje robota bryakov posao
  
  }

void closekrov;
{
  krov.write(0,255,true);
  
  }

void openkrov;
{
  krov.write(180,255,true);
  
  } 

void hit;
{
  ruka.write(180,255,true);
  
  }  
  void retract;
  {
    ruka.write(0,255,true);
    
    }
 void setMillis(unsigned long new_millis) {
    uint8_t oldSREG = SREG;
    cli();
    timer0_millis = new_millis;
    SREG = oldSREG;
}
void(* resetFunc) (void) = 0;
