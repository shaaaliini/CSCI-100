// a minimal sketch to control one NeoPixel
// Make the NeoPixel cycle through the 7 colors of the rainbow repeatdely
// Shalini Chandrakumar
// Assignment 8
#include <Adafruit_NeoPixel.h>

int num_pixels = 1;
int pixel_pin = 8;
Adafruit_NeoPixel ring = Adafruit_NeoPixel(num_pixels, pixel_pin);

void setup()
{
  ring.begin();
}

void loop()
{
  ring.setPixelColor(0, ring.Color(255, 0, 0));   // The color red is first
  ring.show();
  delay(1000);  // wait one second before changing colors

  ring.setPixelColor(0, ring.Color(255, 217, 0));  // The color orange is second, after red
  ring.show();
  delay(1000);  // wait one second before changing colors

  ring.setPixelColor(0, ring.Color(255, 255, 0));   // The color yellow is third, after orange
  ring.show();
  delay(1000);  // wait one second before changing colors

  ring.setPixelColor(0, ring.Color(0, 255, 0));  // The color green is fourth, after yellow
  ring.show();
  delay(1000);  // wait one second before changing colors

  ring.setPixelColor(0, ring.Color(0, 0, 255));  // The color blue is fifth, after green
  ring.show();
  delay(1000);  // wait one second before changing colors

  ring.setPixelColor(0, ring.Color(75, 0, 130));  // The color indigo is sixth, after blue
  ring.show();
  delay(1000);  //wait one second before changing colors

  ring.setPixelColor(0, ring.Color(139, 0, 255));  // The color violet is last, after indigo
  ring.show();
  delay(1000);  // wait one second before starting from the beginning
}


