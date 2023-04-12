#define MAX_MAIL_ADRESS_LENGHT 65
#define MAX_MAIL_PASSWORD_LENGHT 65
#define MAX_MAIL_SERVER_LENGHT 65
#define MAX_MAIL_PORT_LENGHT 65
#include "Wifi.hpp"
#define DEFAULT_MESSAGE "Alarme déclenchée"
#ifndef DEF_MAIL
#define DEF_MAIL
public class Mail
{
    private:
    char* mail_adress = new char[MAX_MAIL_ADRESS_LENGHT];
    char * mail_password = new char[MAX_MAIL_PASSWORD_LENGHT];
    char * mail_server = new char[MAX_MAIL_SERVER_LENGHT];
    int mail_port;
    public:
    Mail();
    ~Mail();
    void Set_Mail_adress(char* mail_adress);
    void Set_Mail_password(char* mail_password);
    void Set_Mail_server(char* mail_server);
    void Set_Mail_port(int mail_port);
    void Send_Mail();
    
};
#endif