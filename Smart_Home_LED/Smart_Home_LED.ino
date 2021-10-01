
#define BLYNK_PRINT Serial //digunakan unutuk monitor blynk di serial


#include <ESP8266WiFi.h> //file untuk modul wifi
#include <BlynkSimpleEsp8266.h> //file untuk blynk

char auth[] = "Gw9Fs5tqyO9knwq80J9lxn-UUhVoEu74"; //char yang dikirim oleh blynk

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Realme3";
char pass[] = "12345678";

void setup()// fungsi utama di jalankan sekali
{
  // Debug console
  Serial.begin(9600); //untuk monitor di serial print
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  Blynk.run();
}
