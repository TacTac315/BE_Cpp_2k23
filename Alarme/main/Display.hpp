#ifndef DEF_DISPLAY
#define DEF_DISPLAY
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Sensor.hpp"
/**
 * @brief      Classe de l'écran.
 * @details    L'écran permet d'afficher des messages.
 * @warning    L'écran hérite de la classe Sensor.
*/
class Display : public Sensor
{
  private:
  int pinDisplay;
  Adafruit_SSD1306* display;
  const int SCREEN_WIDTH = 128;
  const int SCREEN_HEIGHT = 64;
  const int OLED_RESET = -1;
  public:
  /**
   * @brief      Constructeur par défaut de la classe Display.
  */
  Display();
  /**
   * @brief      Destructeur par défaut de la classe Display.
  */
  ~Display();
  /**
   * @brief     Initialisation de l'écran, appellé par le constructeur
  */
  void init();
  /**
   * @brief     Vide l'écran.
  */
  void clear();
  /**
   * @brief     Affiche un message sur l'écran.
  */
  void afficher_message(const char* text, int size, int x, int y, int color);
 // void get_display();
};
#endif