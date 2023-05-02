#ifndef DEF_BOUTON
#define DEF_BOUTON
#include "Sensor.hpp"
class Bouton : public Sensor
{
    private:
    int state_bouton;
    int pinBouton;
    public:
    Bouton();
    //~Bouton();
    virtual void init();
    int Get_state_sensor();
    virtual int Get_pin();
};
#endif
