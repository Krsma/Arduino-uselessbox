#include <VarSpeedServo.h>
#include <FastLED.h>

#define NUM_LEDS 24
#define DATA_PIN 3

extern volatile unsigned long timer0_millis;
unsigned long new_value = 0;

uint8_t mood=0;
unsigned rnd;

VarSpeedServo lid;

CRGB leds[NUM_LEDS];

void closelid(byte recv){
  lid.write(168,recv,true);
}

void openlid(byte recv){
  lid.write(55,recv,true);
}
uint8_t control(){
if(mood>=0 && mood<=15){
     for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      for(byte i=0;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
      }
      return 0;
}
if (mood>=15 && mood<30){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      for(byte i=255;i>200;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
    return 1;
   }
if (mood>=30 && mood<60){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Green;
      for(byte i=200;i>130;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 2;
   }
if (mood>=60 && mood<100){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      for(byte i=0;i<130;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 3;
   }
if (mood>=100 && mood<130){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      for(byte i=130;i<200;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 4;
   }
if (mood>=130 && mood<155){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      for(byte i=200;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 5;
   }
if (mood>=155 && mood<180){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      for(byte i=255;i>75;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 6;
   }
if (mood>=180 && mood<200){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Orange;
      for(byte i=255;i>75;i--){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 7;
   }
if (mood>=200 && mood<225){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Red;
      for(byte i=75;i<180;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 8;
   }
if (mood>=225){
   for(byte i=0;i<24;i++)leds[i] = CRGB::Red;
      for(byte i=180;i<255;i++){
      FastLED.setBrightness(i);
      FastLED.show();
      delay(5);
    }
 return 9;
   }   
}
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
 control();
}




void loop() {  
  if(!digitalRead(12)){
  rnd=(random(800));     
     if(rnd>=0 && rnd<50){
       openlid(150);
       delay(500);
       closelid(255);
       mood+=10;
     }
     if(rnd>=50 && rnd<75){
       lid.write(100,175,true);
       delay(500);
       lid.write(55,175,true);
       delay(500);
       openlid(255);
       delay(500);
       closelid(255);
       mood+=10;
     }
     if(rnd>=75 && rnd<100){
       lid.write(130,175,true);
       delay(500);
       lid.write(100,130,true);
       delay(500);
       lid.write(55,55,true);
       delay(500);
       closelid(75);
       mood+=10;
     }
     if(rnd>=100 && rnd<125){
       openlid(255);
       delay(750);
       closelid(50);
       mood+=15;
     }
     if(rnd>=125 && rnd<150){
       openlid(255);
       delay(500);
       lid.write(100,55,true);
       delay(1000);
       closelid(255);
       mood+=15;
     }
     if(rnd>=150 && rnd<175){
       delay(2000);
       openlid(255);
       delay(500);
       closelid(255);
       mood+=10;
     }
     if(rnd>=175 && rnd<200){
       openlid(255);
       delay(500);
       closelid(255);
       mood+=15;
     }
     if(rnd>=200 && rnd<225){
       lid.write(65,175,true);
       delay(500);
       openlid(255);
       delay(500);
       closelid(255);
       mood+=15;
     }
     if(rnd>=250 && rnd<275){
    lid.write(100,200,true);
    delay(750);
    lid.write(168,255,true);
    delay(500);
    closelid(200);
    mood+=15;
    
    }
      if(rnd>=225 && rnd<250){
    lid.write(168,200,true);
    delay(750);
    lid.write(0,50,true);
    delay(500);
    closelid(250);
    mood+=15;
    
    }
       if(rnd>=225 && rnd<250){   
  lid.write(100,255,true);
  delay(700);
      lid.write(130,235,true);
      delay(700);
      lid.write(150,120,true);
  delay(700);
      lid.write(168,100,true);
      delay(400);
      closelid(255);
      mood+=25;
  }
  if (rnd>=275 && rnd<300){
    lid.write(168,180,true);
    delay(2000);
    closelid(255);
    mood+=25;
    }
    if (rnd>=300 && rnd<325){
    lid.write(168,180,true);
    delay(400);
    lid.write(130,180,true);
    closelid(255);
    mood+=25;
    }
     if (rnd>=325 && rnd<350){
   openlid(150);
   delay(400);
   lid.write(140,255,true);
   delay(400);
    openlid(150);
    delay(400);
    mood+=25;
    closelid(255);
    }
   if (rnd>=350 && rnd<375){
   openlid(150);
   lid.write(140,255,true);
    closelid(255);
    mood+=25;
    } 
    if (rnd>=375 && rnd<400){
   openlid(150);
   delay(1000);
   lid.write(50,255,true);
   delay(500);
   openlid(150);
   delay(1000);
    closelid(255);
    mood+=25;
    } 
    if (rnd>=400 && rnd<450){
   openlid(250);
   lid.write(140,255);
   closelid(40);
       mood+=25;

    }
    if (rnd>=450 && rnd<475){
   lid.write(150,150,true);
   delay(500);
   openlid(255);
   delay(500);
   closelid(255);
       mood+=25;

    }
    if (rnd>=475 && rnd<500){
   openlid(250);
   delay(500);
   lid.write(140,255);
   delay(500);
   closelid(40);
   delay(500);
        mood+=25;

    }
    
    
    
  if(rnd>=500 ){ 
  openlid(255);
  delay(500);
  closelid(255);

      
  }
  control();
  }
 }



