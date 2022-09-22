// Lets us use all the LED tools
#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 7
// How bright do you want it (0-255)
#define BRIGHTNESS 32
// Which pin are we going to send the data along?
#define DATA_PIN 3

// Make the array of leds and set them to be off
// This data has not been sent to the LEDs yet!
CRGB leds[NUM_LEDS] = {0};

// This function will run once then automatically call loop()
// Sets up all the essentials
void setup() { 
    // What type of LEDs are we using 
    // and what order do they expect the colours in?
    FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
    // Dim the LEDs
    FastLED.setBrightness(BRIGHTNESS); 
}

// This function will keep looping
// Makes the 0th LED gradually brighten repeatedly
void loop() { 
    // Gradually increase the brightness
    leds[0].r++; 
    leds[0].g++; 
    leds[0].b++;
    // If the brightness is too high, reset it
    if (leds[0].r == 255) {
        leds[i].setRGB( 0, 0, 0);
    }
    // Send the data to the LEDs
    FastLED.show();
    // Pause for half a second
    delay(500);
}




