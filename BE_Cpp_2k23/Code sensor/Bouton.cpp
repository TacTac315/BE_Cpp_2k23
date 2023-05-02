#include "Bouton.hpp"
Bouton::Bouton()
{
    pinBouton = 11;
    init();
};

void Bouton::init()
{
    //pinMode(pinBouton, OUTPUT);
}

int Bouton::Get_pin()
{
    return pinBouton;
}

int Bouton::Get_state_sensor()
{
    //return digitalRead(Get_pin());
    return 0;
}