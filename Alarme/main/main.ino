#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Wifi.hpp"
#include "Buzzer.hpp"
#include "Sensor.hpp"
//<<<<<<< Updated upstream
#include "Mail.hpp"
#include "Display.hpp"
int delayTime = 1000;
Wifi wifi;
Mail mail_alerte;
//=======
#include "Bouton.hpp"
#include "Motion.hpp"
 Bouton bouton;
 Buzzer buzzer;
 Motion motion;
 Display display;
/*#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
*/
//>>>>>>> Stashed changes
void setup()
{
  Serial.begin(115200);
//<<<<<<< Updated upstream
  wifi.changeSsid("OPPO Find X2 Lite");
  wifi.changePassword("grosyul315/");
  wifi.connect(10000);
  //mail_alerte.sendMail();
  display.init();
  
}
/*
void loop()
{
  delay(delayTime);
  Serial.println("############################");
  Serial.println("Status des capteurs : ");
  wifi.afficheStatus();
=======
}
*/
void loop()
{ 
//  if (bouton.Get_state_sensor())
 // {
 //   Serial.println("boutn ok");
 //   buzzer.Buzz();
   // digitalWrite(D5,HIGH);
 // }
 if (motion.isDetect())
 {
   display.afficher_message("degage",2,10,10,SSD1306_WHITE);
   delay(200);
 // Serial.println("dectecter");
// }
//>>>>>>> Stashed changes
}
else 
{
  display.clear();
}
}

