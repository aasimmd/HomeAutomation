#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "";//auth code from Blynk

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";//ssid of router
char pass[] = "YourPassword";//password

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}

