#include "Mail.hpp"

Mail::Mail()
{
    mail_adress = "modifier @gmail.com";
    mail_password = "modifier";
    mail_server = "smtp.gmail.com";
    mail_port = 587;
}
~Mail::Mail()
{
    delete mail_adress;
    delete mail_password;
    delete mail_server;
}

void Mail::Set_Mail_adress(char* mail_adress)
{
    this->mail_adress = mail_adress;
}
void Mail::Set_Mail_password(char* mail_password)
{
    this->mail_password = mail_password;
}
void Mail::Set_Mail_server(char* mail_server)
{
    this->mail_server = mail_server;
}
void Mail::Set_Mail_port(int mail_port)
{
    this->mail_port = mail_port;
}
void Mail::Send_Mail()
{
    if(isConnected())
    {
        WiFiClientSecure client;
        client.setInsecure();
        if (!client.connect(mail_server, mail_port))
        {
            Serial.println("Connection failed");
            return;
        }
        Serial.println("Connected to server");
        if (client.verify(mail_server, mail_port))
        {
            Serial.println("Certificate matches");
        }
        else
        {
            Serial.println("Certificate doesn't match");
        }
        client.println("EHLO smtp.gmail.com");
        client.println("AUTH LOGIN");
        client.println(base64::encode(mail_adress));
        client.println(base64::encode(mail_password));
        client.println("MAIL FROM: <" + String(mail_adress) + ">");
        client.println("RCPT TO: <" + String(mail_adress) + ">");
        client.println("DATA");
        client.println("From: Alarme <" + String(mail_adress) + ">");
        client.println("To: <" + String(mail_adress) + ">");
        client.println("Subject: Alarme");
        client.println("Content-Type: text/html");
        client.println("");
        client.println(DEFAULT_MESSAGE);
        client.println(".");
        client.println("QUIT");
        client.stop();
        Serial.println("Mail sent");
    }
    else
    {
        Serial.println("Wifi not connected");
        return;
    }

}