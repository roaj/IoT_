#include <ESP8266WiFi.h>
 
void setup(){
 
   Serial.begin(9600);
   delay(500);
 
   Serial.println();
   Serial.print("MAC: ");
   Serial.println(WiFi.macAddress());
 
}
 
void loop(){}
