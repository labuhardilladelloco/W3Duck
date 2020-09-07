/***************************************
 * 
 *  W3Duck!  Version 1.0   06-09-2020
 *  https://LaBuhardillaDelLoco.xyz
 *  
 **************************************/

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "config.h" 
#include "Server.hpp"
#include "ESP8266_Utils.hpp"

void setup(void) {
  Serial.begin(115200);
   ConnectWiFi_AP();
   InitServer();
}

 
void loop(){
   server.handleClient();
}
