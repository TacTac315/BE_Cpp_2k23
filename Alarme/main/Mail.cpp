#include "Mail.hpp"
/**
 * @brief Construct a new Mail:: Mail object
*/
Mail::Mail() {
  session.server.host_name = DEFAULT_MAIL_SERVER;
  session.server.port = DEFAULT_MAIL_PORT;
  session.login.email = DEFAULT_MAIL_SENDER_ADRESS;
  session.login.password = DEFAULT_MAIL_SENDER_PASSWORD;

  message.sender.name = "Alarme domicile";
  message.sender.email = DEFAULT_MAIL_SENDER_ADRESS;
  message.subject = DEFAULT_MAIL_SUBJECT;
  String textMsg = "Alerte ! Jerem est en danger !";
  message.text.content = textMsg.c_str();
  message.text.charSet = "us-ascii";
  message.text.transfer_encoding = Content_Transfer_Encoding::enc_7bit;
  message.addRecipient("Vincent", DEFAULT_MAIL_RECIPIENT);
}
/**
 * @brief Destroy the Mail:: Mail object
*/
Mail::~Mail() {
  smtp.closeSession();
}
/**
 * @brief Send a mail
*/
void Mail::sendMail() {
  if (!smtp.connect(&session)) {
    return;
  }
  if (!MailClient.sendMail(&smtp, &message)) {
    Serial.println("Error sending Email, " + smtp.errorReason());
  }else
  {
    Serial.println("Mail envoyé ! ");
  }
}
