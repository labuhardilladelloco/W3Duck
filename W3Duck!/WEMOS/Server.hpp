ESP8266WebServer server(80);
#include "pags.hpp" 

 
void handleNotFound(){
 server.send(404, "text/plain", "Not found");
}

void inicio(){
  String s=p_inicio();
  server.send(200, "text/html",s );
}



void comUsb(){
 String cmd = server.arg(String("cmd"));
 Serial.print(cmd);
}

void InitServer(){
   server.on("/", inicio);
   server.on("/prueba", comUsb); 
   server.onNotFound(handleNotFound);
   server.begin();
}
