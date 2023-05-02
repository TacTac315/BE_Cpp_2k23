#include "Sensor.hpp"

void Sensor::init()
{
    //pinMode(pinBouton, OUTPUT);
}

int Sensor::Get_pin()
{
    return pinSensor;
}

int Sensor::Get_state_sensor()
{
    //return digitalRead(Get_pin());
    return 0;
}