#include <ESP_Mail_Client.h>
#ifndef DEF_MAIL
#define DEF_MAIL
#define MAX_MAIL_ADRESS_LENGHT 65
#define MAX_MAIL_PASSWORD_LENGHT 65
#define MAX_MAIL_SERVER_LENGHT 65
#define MAX_MAIL_PORT_LENGHT 65
//#define DEFAULT_MESSAGE "Alarme déclenchée ! Jerem est en danger !"
#define DEFAULT_MAIL_SENDER_ADRESS "Alarme@caramail.fr"
#define DEFAULT_MAIL_SENDER_PASSWORD "v5pGdtRVxrS6gEU"
#define DEFAULT_MAIL_SERVER "mail.gmx.com"
#define DEFAULT_MAIL_PORT 587
#define DEFAULT_MAIL_SUBJECT "Alarme déclenchée à l'instant ! "
#define DEFAULT_MAIL_RECIPIENT "veychenn@etud.insa-toulouse.fr"
class Mail
{
public:
    Mail();
    ~Mail();
    void sendMail(void);

private:
    SMTPSession smtp;
    ESP_Mail_Session session;
    ESP_Mail_Client mailClient;
    ESP_Mail_Message message;
    };
#endif