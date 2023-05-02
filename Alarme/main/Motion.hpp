#ifndef DEF_MOTION
#define DEF_MOTION
#include "Sensor.hpp"
/**
 * @brief      Classe du capteur de mouvement.
 * @details    Le capteur de mouvement est un capteur qui permet de détecter un mouvement.
 * @warning    Le capteur de mouvement hérite de la classe Sensor.
*/
class Motion: public Sensor
{
    private:
    int pinMotion;
    int current_state;
    int old_state;
    public:
    /**
     * @brief      Constructeur par défaut de la classe Motion.
    */
    Motion();
   // ~Motion();
    /**
     * @brief      Initialisation du capteur de mouvement, appellé par le constructeur
    */
    virtual void init();
    /**
     * @brief      Récupération du pin du capteur de mouvement.
     * @return    Le pin du capteur de mouvement.
    */
    virtual int Get_pin();
    /**
     * @brief      Récupération de l'état du capteur de mouvement.
     * @return    L'état actuel du capteur de mouvement.
     * @return   Ancien état du capteur de mouvement.
    */
    int Get_state_sensor();
    /**
     * @brief      Detection d'un mouvement.
     * @return    Vrai si un mouvement est détecté
     * @return    Faux si aucun mouvement n'est détecté
    */
    bool isDetect();
};

#endif
