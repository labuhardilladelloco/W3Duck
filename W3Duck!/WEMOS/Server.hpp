ESP8266WebServer server(80);
#include "pags.hpp" 

 
void handleNotFound(){
 server.send(404, "text/plain", "Not found");
}

void inicio(){
  String s=p_inicio();
  server.send(200, "text/html",s );
}

void InitServer(){
   server.on("/", inicio);
   server.onNotFound(handleNotFound);
   server.begin();
   Serial.println("HTTP server started");
}
