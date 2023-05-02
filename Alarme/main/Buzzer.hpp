#ifndef DEF_BUZZER
#define DEF_BUZZER
#include "Sensor.hpp"
/**
 * @brief      Classe du buzzer.
 * @details    Le buzzer est un capteur qui permet de faire du bruit.
 * @warning    Le buzzer hérite de la classe Sensor.
*/
class Buzzer :public  Sensor
{
    private:
    int pinBuzzer;
    public:
    /**
     * @brief      Constructeur par défaut de la classe Buzzer.
    */
    Buzzer();
   // ~Buzzer();
    /**
     * @brief      Initialisation du buzzer, appellé par le constructeur
    */
    virtual void init();
    /**
     * @brief      Récupération du pin du buzzer.
     * @return    Le pin du buzzer.
    */
    virtual int Get_pin();
    /**
     * @brief      Fait sonner le buzzer.
    */
    void Buzz();
};
#endif
