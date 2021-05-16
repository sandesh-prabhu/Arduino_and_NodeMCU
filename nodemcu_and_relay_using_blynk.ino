#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon). 
char auth[] = "";
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";
char pass[] = "";

const int Relay1 = 16;

void setup()
{
  pinMode(Relay1,OUTPUT);
  digitalWrite(Relay1,HIGH);
  // Debug console
  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V0)
{
  int pinValue = param.asInt();
  
  if(pinValue == 1)
  {
    digitalWrite(Relay1,HIGH);
    Serial.println("relay on");
  }
  else if(pinValue == 0)
  {
    digitalWrite(Relay1,LOW);
    Serial.println("relay off");
  }
}
