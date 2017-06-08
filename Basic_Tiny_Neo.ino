#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

//defines Neopixels
#define PIN           4
#define NUMPIXELS      95


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  #if defined (__AVR_ATtiny45__)
    if (F_CPU == 8000000) clock_prescale_set(clock_div_1);
  #endif  
pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

for(int i = 0;i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(58,191,239));
   pixels.show();
   delay(35); 
} 
delay(300000);

for(int i = 0;i<NUMPIXELS;i++){
  pixels.setPixelColor(i, pixels.Color(58/2,191/2,239/2));
  pixels.show();
  delay(35);
}
delay(300000);















  
}
