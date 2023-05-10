#include "Motion.hpp"
#include <ESP8266WiFi.h>

Motion::Motion() : pinMotion(D5), current_state(0), old_state(0)
{
    init();
}

void Motion::init()
{
    pinMode(pinMotion, INPUT);
}
int Motion::Get_state_sensor()
{
   old_state=current_state;
   current_state=digitalRead(Get_pin());
   return old_state, current_state;
}
bool Motion::operator==(int state)
{
    return digitalRead(pinMotion) == state;
}

bool Motion::operator!=(int state)
{
    return digitalRead(pinMotion) != state;
}

bool Motion::isDetect()
{
    return digitalRead(pinMotion) == HIGH;
}
int Motion::Get_pin() const
{
    return pinMotion;
}