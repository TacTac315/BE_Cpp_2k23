#include "Sensor.hpp"
#include <ESP8266WiFi.h>
void Sensor::init()
{
    pinMode(pinSensor, OUTPUT);
}

int Sensor::Get_pin()
{
    return pinSensor;
}

int Sensor::Get_state_sensor()
{
    return digitalRead(Get_pin());
    
}
