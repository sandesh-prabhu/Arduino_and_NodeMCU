#include "ESP8266WiFi.h"


const char* ssid = "";//wifi name
const char* password = "";//wifi password

void setup(void)
{ 
  Serial.begin(9600);
  // Connect to WiFi
  WiFi.begin(ssid, password);

}
void loop() {
  // Nothing
}
