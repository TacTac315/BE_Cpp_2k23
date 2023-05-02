#include "Motion.hpp"
Motion::Motion()
{
    pinMotion=13;
    init();
}
void Motion::init()
{
    ///pinMode(pinBouton, OUTPUT);
}
int Motion::Get_pin()
{
    return pinMotion;
}
int Motion::Get_state_sensor()
{
    //return digitalRead(Get_pin());
    return 0;
}
