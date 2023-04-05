// #include <Adafruit_NeoPixel.h>
#include <FastLED.h>
#define LED_PIN 23
#define LED_COUNT 24

CRGB leds[LED_COUNT];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, LED_COUNT);
  FastLED.clear(); // 初始化所有像素为黑色
}

void loop() {
  // 设置所有像素为白色
  for (int i = 0; i < LED_COUNT; i++) {
    leds[i] = CRGB::White;
  }
  FastLED.show();
  delay(500);
}


// Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// void setup() {
//   strip.begin();
//   strip.show(); // 初始化所有像素为黑色
// }

// void loop() {
//   // 设置所有像素为白色
//   for (int i = 0; i < LED_COUNT; i++) {
//     strip.setPixelColor(i, 255, 255, 255);
//   }
//   strip.show();
//   delay(500);
//   // // 设置所有像素为蓝色
//   // for (int i = 0; i < LED_COUNT; i++) {
//   //   strip.setPixelColor(i, 0, 0, 255);
//   // }
//   // strip.show();
//   // delay(500);

//   // // 设置所有像素为红色
//   // for (int i = 0; i < LED_COUNT; i++) {
//   //   strip.setPixelColor(i, 255, 0, 0);
//   // }
//   // strip.show();
//   // delay(500);

//   // // 设置所有像素为绿色
//   // for (int i = 0; i < LED_COUNT; i++) {
//   //   strip.setPixelColor(i, 0, 255, 0);
//   // }
//   // strip.show();
//   // delay(500);
// }
