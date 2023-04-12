#ifndef DEF_BUZZER
#define DEF_BUZZER
class Buzzer
{
    private:
    int pinMotion;
    public:
    Buzzer();
    ~Buzzer();
    virtual void init();
    virtual int Get_pin();
    void Buzz();
};
#endif