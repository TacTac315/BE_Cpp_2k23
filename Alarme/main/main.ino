#include "Wifi.hpp"
#include "Buzzer.hpp"
#include "Sensor.hpp"
#include "Mail.hpp"

int delayTime = 1000;
Wifi wifi;
Mail mail_alerte;
void setup()
{
  Serial.begin(115200);
  wifi.changeSsid("OPPO Find X2 Lite");
  wifi.changePassword("grosyul315/");
  wifi.connect(10000);
  mail_alerte.sendMail();

}

void loop()
{
  delay(delayTime);
  Serial.println("###########################");
  Serial.println("Status des capteurs : ");
  wifi.afficheStatus();
}

