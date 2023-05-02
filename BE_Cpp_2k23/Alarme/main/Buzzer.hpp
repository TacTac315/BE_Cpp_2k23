#ifndef DEF_BUZZER
#define DEF_BUZZER
#include "Sensor.hpp"

class Buzzer :public  Sensor
{
    private:
    int pinBuzzer;
    public:
    Buzzer();
   // ~Buzzer();
    virtual void init();
    virtual int Get_pin();
    void Buzz();
};
#endif
