#include "Wifi.hpp"

Wifi::connect()
{
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) 
    {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
Wifi::disconnect()
{
    WiFi.disconnect();
}
Wifi::isConnected()
{
    return WiFi.status() == WL_CONNECTED;
}
Wifi::ChangeSsid(const char* ssid)
{
    this->ssid = ssid;
}
Wifi::ChangePassword(const char* password)
{
    this->password = password;
}
