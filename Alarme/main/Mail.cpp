#include "Mail.hpp"

Mail::Mail() {
  //void smtpCallback(SMTP_Status status);
  //smtp.debug(1);
  //smtp.callback(smtpCallback);
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
Mail::~Mail() {
  smtp.closeSession();
}

void Mail::sendMail() {
  if (!smtp.connect(&session)) {
    return;
  }
  if (!MailClient.sendMail(&smtp, &message)) {
    Serial.println("Error sending Email, " + smtp.errorReason());
  }
}
