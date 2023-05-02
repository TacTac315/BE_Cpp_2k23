#ifndef DEF_MOTION
#define DEF_MOTION
#include "Sensor.hpp"
class Motion: public Sensor
{
    private:
    int pinMotion;
    public:
    Motion();
    ~Motion();
    virtual void init();
    virtual int Get_pin();
    int Get_state_sensor();
};

#endif