#ifndef DEF_SENSOR
#define DEF_SENSOR
#include <string>
class Sensor
{
    private:
    int pinSensor;
    public:
    // Sensor();
     ~Sensor();
    virtual void init();
    virtual int Get_pin();
    virtual int Get_state_sensor();
};
#endif
