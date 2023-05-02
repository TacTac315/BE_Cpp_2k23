#include <ESP8266WiFi.h>
#define MAX_SSID_LENGHT 33
#define MAX_WPA2_PWD_LENGHT 65
#ifndef WIFI_HPP
#define WIFI_HPP
class Wifi
{
public:
    Wifi();
    ~Wifi();
    void connect(int timeout);
    void disconnect();
    bool isConnected();
    void changeSsid(const char *ssid);
    void changePassword(const char *password);
    const char* Get_SSID();
    void afficheStatus();

private:
    const char *ssid = new char[MAX_SSID_LENGHT];
    const char *password = new char[MAX_WPA2_PWD_LENGHT];
};
#endif