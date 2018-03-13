#include <VarSpeedServo.h>
#include <FastLED.h>

#define DATA_PIN 3
#define switchpin 2
#define servopin 11

#define NUM_LEDS 24

uint8_t i;
 
VarSpeedServo lid; 
 
CRGB leds[NUM_LEDS];

void setup() {
 FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS); 
 pinMode(switchpin, INPUT_PULLUP); 
 setPwmFrequency(DATA_PIN, 1); //Reduces LED flicker
 for(i = 0; i < 24; i++) leds[i] = CRGB::Green;
 FastLED.setBrightness(255);
 FastLED.show();
 lid.attach(servopin);
 closelid(255);
}

void(* resetFunc) (void) = 0;
 
void loop() { 
  while(digitalRead(switchpin));
    openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
    
  closelid(255);
  anim(255, 65, 5);
  resetck();
  
  while(digitalRead(switchpin));
    openlid(40);
    
  delay(800);
  closelid(255);
  anim(80, 45, 15);
  resetck();
  
  while(digitalRead(switchpin));
  FastLED.setBrightness(45);
  
  FastLED.show();
  delay(450);
  FastLED.setBrightness(0);
  FastLED.show();
  delay(1000);
  openlid(255);
  
  while(!digitalRead(switchpin));
  delay(300);
  
  closelid(255);
  delay(500);
  
  for(i = 0; i < 24; i++) 
    leds[i] = CRGB::Yellow;
  
  FastLED.setBrightness(255);
  FastLED.show();
  resetck();
  
  while(digitalRead(switchpin));
    lid.write(95,25,true);
    
  delay(950);
  openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
    
  closelid(255);
  resetck();
  anim(130, 80, 0);
  
  while(digitalRead(switchpin));
    delay(1500);
    
  openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
    
  closelid(150);
  
  for(i = 0; i < 24; i++) 
    leds[i] = CRGB::Orange;
    
  FastLED.setBrightness(80);
  FastLED.show();
  resetck();
  
  while(digitalRead(switchpin));
    lid.write(110,255,true);
    
  delay(800);
  openlid(20);
  delay(800);
  lid.write(110,25,true);
  delay(800);
  FastLED.setBrightness(40);
  FastLED.show();
  delay(800);
  closelid(255);
  resetck();
  
  while(digitalRead(switchpin));
    openlid(255);
    
  while(!digitalRead(switchpin));
    delay(300);
    
  closelid(255);
  anim(40, 0, 15);
  
  for(i = 0; i < 24; i++) 
    leds[i] = CRGB::Red;
    
  animp(0, 40, 15);
  resetck();
  
  while(digitalRead(switchpin));
    delay(1500);
    
  FastLED.setBrightness(0);
  FastLED.show();
  delay(1250);
  FastLED.setBrightness(100);
  FastLED.show();
  openlid(255);
  delay(1500);
  closelid(255);
  resetck();
  
  while(digitalRead(switchpin));
    delay(1500);
    
  FastLED.setBrightness(255);
  FastLED.show();
  delay(850);
  openlid(255);
  while(!digitalRead(switchpin));
    delay(300);
    
  lid.write(90, 10, true);
  delay(800);
  openlid(255);
  delay(250);
  lid.write(90, 10, true);
  delay(800);
  openlid(255);
  delay(1000);
  closelid(255);
  resetck();
  
  while(digitalRead(switchpin));
    delay(850);
  for(i = 0; i < 24; i++) 
  leds[i] = CRGB::Green;
  
  FastLED.show();
  delay(1500);
  
  for(i = 0; i < 24; i++) leds[i] = CRGB::Red;
    openlid(255);
  
  FastLED.show();
  openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
  
  closelid(10);
  resetck();
  while(digitalRead(switchpin));
    openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
  
  closelid(255);
  delay(800);
  resetck();
  
  while(digitalRead(switchpin));
    delay(250);
  
  FastLED.setBrightness(100);
  FastLED.show();
  delay(850);
  openlid(255);
  
  while(!digitalRead(switchpin));
    delay(300);
  
  closelid(255);
  resetck();
  
  while(digitalRead(switchpin));
    delay(250);
  
  anim(100, 23, 20);
  openlid(45);
  delay(1250);
  closelid(45);
  delay(1250);
  resetck();
  
  while(digitalRead(switchpin));
    openlid(10);
  
  delay(1500);
  anim(23, 0, 20);
  delay(1500);
  closelid(10);
  delay(1500);
  
  for(i = 0; i < 24; i++) 
    leds[i] = CRGB::Green;
  
  FastLED.setBrightness(25);
  FastLED.show();
  delay(650);
  
  FastLED.setBrightness(80);
  FastLED.show();
  delay(650);
  
  FastLED.setBrightness(140);
  FastLED.show();
  delay(650);
  
  FastLED.setBrightness(170);
  FastLED.show();
  delay(650);
  
  FastLED.setBrightness(210);
  FastLED.show();
  delay(650);
  
  FastLED.setBrightness(255);
  FastLED.show();
  delay(650);
  
  openlid(255);
  delay(1000);
  closelid(255);
 }


void closelid(byte recv){ 
  lid.write(170,recv,true);
}
 
void openlid(byte recv){ 
  lid.write(65,recv,true);
}

void anim(byte st, byte en, byte d){
  for(i = st; i != en; i--){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(d); 
  }
}

void animp(byte st, byte en, byte d){
  for(i = st; i != en; i++){
    FastLED.setBrightness(i);
    FastLED.show();
    delay(d); 
  }
}

void resetck(){
  unsigned long lastmillis = millis();
  while(digitalRead(switchpin)) if (millis() - lastmillis > 10000) resetFunc();
}

void setPwmFrequency(int pin, int divisor) {
  byte mode;
  if(pin == 5 || pin == 6 || pin == 9 || pin == 10) {
    switch(divisor) {
      case 1: mode = 0x01; break;
      case 8: mode = 0x02; break;
      case 64: mode = 0x03; break;
      case 256: mode = 0x04; break;
      case 1024: mode = 0x05; break;
      default: return;
    }
    if(pin == 5 || pin == 6) {
      TCCR0B = TCCR0B & 0b11111000 | mode;
    } else {
      TCCR1B = TCCR1B & 0b11111000 | mode;
    }
  } else if(pin == 3 || pin == 11) {
    switch(divisor) {
      case 1: mode = 0x01; break;
      case 8: mode = 0x02; break;
      case 32: mode = 0x03; break;
      case 64: mode = 0x04; break;
      case 128: mode = 0x05; break;
      case 256: mode = 0x06; break;
      case 1024: mode = 0x07; break;
      default: return;
    }
    TCCR2B = TCCR2B & 0b11111000 | mode;
  }
}

