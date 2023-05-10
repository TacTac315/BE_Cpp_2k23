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
void setup()
{
  Serial.begin(115200);
  wifi.changeSsid("OPPO Find X2 Lite");
  wifi.changePassword("grosyul315/");
  wifi.connect(10000);
  display.init();
  
}

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
   display.afficher_message("intrus detecte !",2,10,10,SSD1306_WHITE);
   buzzer.Buzz();
   //mail_alerte.sendMail();
}
 if (bouton.Get_state_sensor()==1)
   {
     display.clear();
     buzzer.Buzz_off();
   }
}

