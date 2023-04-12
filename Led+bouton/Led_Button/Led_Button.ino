#include <iostream>
using namespace std;
int led = D6;
int bouton = D8;

void setup()
{
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // LED
  digitalWrite(led, LOW);
  pinMode(bouton, INPUT_PULLUP); // Bouton
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(bouton) == 0)
  {
    digitalWrite(led, LOW);
  }
  else
  {
    digitalWrite(led, HIGH);
  }
  cout << "Etat bouton: " << digitalRead(bouton) << endl;
}
