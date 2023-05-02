#ifndef DEF_SENSOR
#define DEF_SENSOR

#include <string>
/**
 * @brief      Classe du capteur.
*/
class Sensor
{
    private:
    int pinSensor;
    public:
    // Sensor();
    // ~Sensor();
    /**
     * @brief      Initialisation du capteur
    */
    virtual void init();
    /**
     * @brief      Récupération du pin du capteur.
     * @return    Le pin du capteur.
    */
    virtual int Get_pin();
    /**
     * @brief      Récupération de l'état du capteur.
     * @return    L'état du capteur.
    */
    virtual int Get_state_sensor();
};
#endif
