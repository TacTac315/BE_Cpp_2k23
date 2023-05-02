#include "Bouton.hpp"
#include <ESP8266WiFi.h>
Bouton::Bouton()
{
    pinBouton = D6;
    init();
    state_bouton=0;
}

void Bouton::init()
{
    pinMode(pinBouton, OUTPUT);
}

int Bouton::Get_pin()
{
    return pinBouton;
}

int Bouton::Get_state_sensor()
{
    
    return digitalRead(Get_pin());
}
