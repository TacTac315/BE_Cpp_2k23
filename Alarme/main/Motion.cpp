#include "Motion.hpp"
#include <ESP8266WiFi.h>
Motion::Motion()
{
    pinMotion=D5;
    current_state=0;
    old_state=0;
    init();
}
void Motion::init()
{
    pinMode(pinMotion, OUTPUT);
}
int Motion::Get_pin()
{
    return pinMotion;
}
int Motion::Get_state_sensor()
{
   old_state=current_state;
   current_state=digitalRead(Get_pin());
   return old_state, current_state;
}
/*bool Motion::isDetect()
{
   old_state=current_state;
   current_state=digitalRead(Get_pin());;
  if(old_state==LOW && current_state==HIGH)
  {
    return true;
  }
  else 
  {
    return false;
  }
}*/
bool Motion::isDetect()
{
  int current_state = digitalRead(Get_pin());
  if(current_state == HIGH)
  {
    return true;
  }
  else
  {
    return false;
  }
}
