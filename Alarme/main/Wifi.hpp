#include <ESP8266WiFi.h>
#define MAX_SSID_LENGHT 33
#define MAX_WPA2_PWD_LENGHT 65
#ifndef WIFI_HPP
#define WIFI_HPP
/**
 * @brief Classe du wifi.
 * 
 */
class Wifi
{
public:
    /**
     * @brief Constructeur par défaut de la classe Wifi
     * 
     */
    Wifi();
    /**
     * @brief Destructeur par défaut de la classe Wifi
     * 
     */
    ~Wifi();
    /**
     * @brief Connexion au wifi
     * @param timeout Durée maximale de tentative de connexion
     */
    void connect(int timeout);
    /**
     * @brief Déconnexion du wifi
     * 
     */
    void disconnect();
    /**
     * @brief verifie si le wifi est connecté
     * @return true if connected
     * @return false if not connected
     */
    bool isConnected();
    /**
     * @brief Changer le SSID
     * 
     * @param ssid 
     */
    void changeSsid(const char *ssid);
    /**
     * @brief Changer le mot de passe
     * 
     * @param password 
     */
    void changePassword(const char *password);
    /**
     * @brief Retourne le SSID
     * 
     * @return const char* 
     */
    const char* Get_SSID();
    /**
     * @brief Retourne l'état du wifi
     * 
     * @return vrai if connected
     * @return faux if not connected
     */
    void afficheStatus();

private:
    const char *ssid = new char[MAX_SSID_LENGHT];
    const char *password = new char[MAX_WPA2_PWD_LENGHT];
};
#endif