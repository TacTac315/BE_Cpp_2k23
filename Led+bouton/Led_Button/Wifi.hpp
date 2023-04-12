#include <ESP8266WiFi.h> 
#ifndef MAIL_HPP
#define MAIL_HPP
class Wifi 
{
    public:
    void connect();
    void disconnect();
    bool isConnected();
    void ChangeSsid(const char* ssid);
    void ChangePassword(const char* password);
    private:
        const char* ssid = "ssid";
        const char* password = "password";
}
#endif