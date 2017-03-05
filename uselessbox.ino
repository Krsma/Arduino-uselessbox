#include <VarSpeedServo.h>
#include <FastLED.h>
 
#define NUM_LEDS 24
#define DATA_PIN 3
 
void(* resetFunc) (void) = 0;
 
extern volatile unsigned long timer0_millis;
unsigned long new_value = 0;
 
byte mood=0,rnd,rnd1;
 
VarSpeedServo lid;
 
CRGB leds[NUM_LEDS];
 
void setup() {
 FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
 pinMode(12,INPUT_PULLUP);
 lid.attach(9);
 closelid(15);
 for(byte i=0;i<24;i++)leds[i] = CRGB::Blue;
 FastLED.show();
 while(digitalRead(12));
 openlid(255);
 delay(500);
 closelid(255);
 for(byte i=255;i>0;i--){
  FastLED.setBrightness(i);
  FastLED.show();
  delay(5);
 }
}
 
 
 
 
void loop() {  
  if(timer0_millis>30000)resetFunc();
  while(digitalRead(12));
  setMillis(0);
  rnd=(random(255));
  if(control()==0){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==1){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==2){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==3){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==4){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==5){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==6){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==7){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==8){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
  if(control()==9){
     if(rnd>=0 && rnd<50){
       
     }
     if(rnd>=50 && rnd<75){
       
     }
     if(rnd>=75 && rnd<100){
       
     }
     if(rnd>=100 && rnd<125){
       
     }
     if(rnd>=125 && rnd<150){
       
     }
     if(rnd>=150 && rnd<175){
       
     }
     if(rnd>=175 && rnd<200){
       
     }
     if(rnd>=200 && rnd<225){
       
     }
     if(rnd>=225){
       
     }
  }
 
}
 
 
 
byte control(){
if(mood>=0 && mood<=15){
     for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      FastLED.show();
      for(byte i=0;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
 return 0;
      }
}
if (mood>15 && mood<30){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      FastLED.show();
      for(byte i=255;i>200;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 1;
   }
if (mood>30 && mood<60){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      FastLED.show();
      for(byte i=200;i>130;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 2;
   }
if (mood>60 && mood<100){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      FastLED.show();
      for(byte i=0;i<130;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 3;
   }
if (mood>100 && mood<130){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      FastLED.show();
      for(byte i=130;i<200;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 4;
   }
if (mood>130 && mood<155){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      FastLED.show();
      for(byte i=200;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 5;
   }
if (mood>155 && mood<180){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      FastLED.show();
      for(byte i=255;i>75;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 6;
   }
if (mood>180 && mood<200){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      FastLED.show();
      for(byte i=255;i>75;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 7;
   }
if (mood>200 && mood<225){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Red;
      FastLED.show();
      for(byte i=75;i<180;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 8;
   }
if (mood>225){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Red;
      FastLED.show();
      for(byte i=180;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 9;
   }  
}
void closelid(byte recv){
  lid.write(166,recv,true);
}
 
void openlid(byte recv){
  lid.write(55,recv,true);
}
 
void fullop(byte recv){
  closelid(recv);
  openlid(recv);
}
void setMillis(unsigned long new_millis) {
    uint8_t oldSREG = SREG;
    cli();
    timer0_millis = new_millis;
    SREG = oldSREG;
}
