#include "Wifi.hpp"
#include "Buzzer.hpp"
#include "Sensor.hpp"
<<<<<<< Updated upstream
#include "Mail.hpp"

int delayTime = 1000;
Wifi wifi;
Mail mail_alerte;
=======
#include "Bouton.hpp"
#include "Motion.hpp"
 Bouton bouton;
 Buzzer buzzer;
 Motion motion;
>>>>>>> Stashed changes
void setup()
{
  Serial.begin(115200);
<<<<<<< Updated upstream
  wifi.changeSsid("OPPO Find X2 Lite");
  wifi.changePassword("grosyul315/");
  wifi.connect(10000);
  mail_alerte.sendMail();

}

void loop()
{
  delay(delayTime);
  Serial.println("############################");
  Serial.println("Status des capteurs : ");
  wifi.afficheStatus();
=======
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
  Serial.println("dectecter");
 }
>>>>>>> Stashed changes
}

