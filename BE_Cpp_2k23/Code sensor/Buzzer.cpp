#include "Buzzer.hpp"
Buzzer::Buzzer()
{
    pinMotion=14;
    init();
}
void Buzzer::init()
{
    ///pinMode(pinBouton, OUTPUT);
}
int Buzzer::Get_pin()
{
    return pinMotion;
}
void Buzzer::Buzz()
{
    //DigitalWrite(Get_pin(),HIGH);
}
