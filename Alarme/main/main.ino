#include "Wifi.hpp"
#include "Buzzer.hpp"
#include "Sensor.hpp"
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Wifi wifi;
  wifi.changeSsid("OPPO Find X2 Lite");
  wifi.changePassword("grosyul315/");
  wifi.connect(10000);
  wifi.printStatus();
}

void loop()
{
  // put your main code here, to run repeatedly:
}
