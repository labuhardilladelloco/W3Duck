ESP8266WebServer server(80);
#include "pags.hpp" 

 
void handleNotFound(){
 server.send(404, "text/plain", "Not found");
}



void comUsb(){
 String cmd = server.arg(String("cmd"));
 Serial.print(cmd);
}

void InitServer(){
   server.on("/", p_inicio);
   server.on("/prueba", comUsb); 
   server.onNotFound(handleNotFound);
   server.begin();
}
