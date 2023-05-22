#include "Display.hpp"
Display::Display()
{
    //pinDisplay=D5;
    //init();
   display =  new Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
}
Display::~Display()
{
  delete display;
}
void Display::init()
{
    //pinMode(pinDisplay, OUTPUT);
    display->begin(SSD1306_SWITCHCAPVCC, 0x3C);
    this->clear();
}
void Display::clear()
{
  display->clearDisplay();
  display->display();
}
 void Display::afficher_message(const char* text, int size, int x, int y, int color = WHITE)
  {
      display->setTextSize(size);
      display->setTextColor(color);
      display->setCursor(x, y);
      display->println(text);
      display->display(); 
    }