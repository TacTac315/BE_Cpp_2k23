#include "Buzzer.hpp"
#include <ESP8266WiFi.h>
Buzzer::Buzzer()
{
    pinBuzzer=D5;
    init();
}
void Buzzer::init()
{
   pinMode(pinBuzzer, OUTPUT);
}
int Buzzer::Get_pin()
{
    return pinBuzzer;
}
void Buzzer::Buzz()
{
 
    tone(Get_pin(),500);
    delay(800);
    noTone(Get_pin());
}
