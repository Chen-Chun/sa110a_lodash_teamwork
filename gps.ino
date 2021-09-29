#include <TinyGPS++.h>
TinyGPSPlus gps;
float lattitude,longitude;

void setup() {

 Serial2.begin(9600);
 Serial.begin(9600);
  
  }

void loop()
{
  while (Serial2.available())
  {
    int data = Serial2.read();
    if (gps.encode(data))
    {
      lattitude = (gps.location.lat());
      longitude = (gps.location.lng());
      Serial.print ("lattitude: ");
      Serial.println (lattitude, 10);
      Serial.print ("longitude: ");
      Serial.println (longitude, 10);
    }
  }
  delay(1000);
}