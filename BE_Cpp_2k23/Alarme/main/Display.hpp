#ifndef DEF_DISPLAY
#define DEF_DISPLAY
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Sensor.hpp"
class Display : public Sensor
{
  private:
  int pinDisplay;
  Adafruit_SSD1306* display;
  const int SCREEN_WIDTH = 128;
  const int SCREEN_HEIGHT = 64;
  const int OLED_RESET = -1;
  public:
  Display();
  ~Display();
  void init();
  void clear();
  void afficher_message(const char* text, int size, int x, int y, int color);
 // void get_display();
};
#endif