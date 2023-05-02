#ifndef DEF_BOUTON
#define DEF_BOUTON
#include "Sensor.hpp"
/**
 * @brief      Classe du bouton.
*/
class Bouton : public Sensor
{
    private:
    int state_bouton;
    int pinBouton;
    public:
    /**
     * @brief      Constructeur par défaut de la classe Bouton.
    */
    Bouton();
    //~Bouton();
    /**
     * @brief      Initialisation du bouton, appellé par le constructeur
    */
    virtual void init();
    /**
     * @brief      Récupération de l'état du bouton.
     * @return   L'état du bouton.
    */
    int Get_state_sensor();
    /**
     * @brief      Récupération du pin du bouton.
     * @return   Le pin du bouton.
    */
    virtual int Get_pin();
};
#endif
