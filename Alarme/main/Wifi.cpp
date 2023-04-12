#include "Wifi.hpp"
Wifi::Wifi()
{
}
Wifi::~Wifi()
{
    if (WiFi.status() == WL_CONNECTED)
    {
        WiFi.disconnect();
    }
}
void Wifi::connect(int timeout)
{
    WiFi.begin(ssid, password);
    unsigned long start = millis();
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
        if (millis() - start > timeout)
        {
            Serial.println("Connection timed out");
            return;
        }
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
void Wifi::disconnect()
{
    WiFi.disconnect();
}
bool Wifi::isConnected()
{
    return WiFi.status() == WL_CONNECTED;
}
void Wifi::changeSsid(const char *ssid)
{
    this->ssid = ssid;
}
void Wifi::changePassword(const char *password)
{
    this->password = password;
}
void Wifi::printStatus()
{
    int delai = 500;
    while (1)
    {
        if (delai == 500)
        {
            Serial.print("Status: ");
            Serial.println(WiFi.status());
            delai = 0;
        }
    }
    delai++;
}
