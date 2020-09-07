  /***************************************
   * 
   *  W3Duck!  Version 1.0   06-09-2020
   *  https://LaBuhardillaDelLoco.xyz
   *  
   **************************************/
  
  
  #include "Keyboard.h"
  String cmd,accion;
  String buffer="";
  int i=0;
  String linea;

  
void setup() {
  Keyboard.begin();

  Serial1.begin(115200);
  while (!Serial1) {

  }

 pinMode(LED_BUILTIN,OUTPUT);



}

void loop() { 


  if (Serial1.available()>0) {
    String s = Serial1.readString();

    if(s.indexOf("END")>-1){
      cmd = s.substring(0,1);
      accion = s.substring(1,s.length()-3);

      //Escribimos un digito
      if(cmd == "L"){
        Keyboard.write(accion[0]);
      }

      //Pulsamos una tecla
      if(cmd == "K"){
         pressKey(accion);
        //delay(100);
        Keyboard.releaseAll(); 
      }


      //Escribimos un texto letra a letra
      if (cmd == "T"){
        for(int i = 0; i < accion.length();i++){
          Keyboard.write(accion[i]);
          delay(100); 
        }

      }



      //Leemos un script ducky
      if (cmd == "C"){
         
          for (i=0; i< accion.length(); i++){
            buffer += accion[i];
            if(accion[i] == '|'){
             Serial.println(buffer);
              linea = buffer.substring(0,buffer.length()-1);
              
              //Tecla windows
              if(linea.indexOf("GUI") > -1 || linea.indexOf("WINDOWS") > -1){
                 Keyboard.press(KEY_LEFT_GUI);
                if(linea.indexOf(" ")>-1){
                  String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                  pressKey(arg);
                }
              }


             //Pausa
             if(linea.indexOf("DELAY")>-1){  
                String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                delay(arg.toInt());   
             }

             //Tecla Enter
             if(linea.indexOf("ENTER")>-1){  
                 Keyboard.press(KEY_RETURN); 
             }

              //Tecla Shift
              if(linea.indexOf("SHIFT") > -1){
                 Keyboard.press(KEY_LEFT_SHIFT);
                if(linea.indexOf(" ")>-1){
                  String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                  if(arg.length()>0){
                    pressKey(arg);                                      
                  }
                }
              }

              //Tecla Alt
              if(linea.indexOf("ALT") > -1){
                 Keyboard.press(KEY_LEFT_ALT);
                if(linea.indexOf(" ")>-1){
                  String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                  if(arg.length()>0){                                       
                    pressKey(arg);
                  }
                }
              }



              //Tecla TAB
              if(linea.indexOf("TAB") > -1){
                 Keyboard.press(KEY_TAB);
              }


              //Tecla Control
              if(linea.indexOf("CTRL") > -1){
                 Keyboard.press(KEY_LEFT_CTRL);
                if(linea.indexOf(" ")>-1){
                  String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                  if(arg.length()>0){                                      
                    pressKey(arg);
                  }
                }
              }

             //Tecla ESCAPE
             if(linea.indexOf("ESC")>-1){  
                 Keyboard.press(KEY_ESC); 
             }

             //Tecla FLECHA ABAJO
             if(linea.indexOf("DOWNARROW")>-1 || linea.indexOf("DOWN")>-1    ){  
                 Keyboard.press(KEY_DOWN_ARROW); 
             }
             //Tecla FLECHA ARRIBA
             if(linea.indexOf("UPARROW")>-1 || linea.indexOf("UP")>-1 ){  
                 Keyboard.press(KEY_UP_ARROW); 
             }

             //Tecla FLECHA DERECHA
             if(linea.indexOf("RIGHTARROW")>-1 || linea.indexOf("RIGHT")>-1 ){  
                 Keyboard.press(KEY_RIGHT_ARROW); 
             }

             //Tecla FLECHA IZQUIERDA
             if(linea.indexOf("LEFTARROW")>-1 || linea.indexOf("LEFT")>-1 ){  
                 Keyboard.press(KEY_LEFT_ARROW); 
             }


                           
              //Tecla Menu o App
              if(linea.indexOf("MENU") > -1){
                 Keyboard.press(KEY_LEFT_SHIFT);
                 Keyboard.press(KEY_F10);
              }


             //Escribir texto
             if(linea.indexOf("STRING")>-1){  
                if(linea.indexOf(" ")>-1){
                  String arg = linea.substring(linea.indexOf(" ")+1,linea.length());
                  if(arg.length()>0){
                    for(int i = 0; i < arg.length();i++){
                      Keyboard.write(arg[i]);
                      //delay(100); 
                    }
                  }
                }
             }




              buffer="";
              
            }
       
          Keyboard.releaseAll();
          }

           
      
      }


     
    }
  
  }

}




         
void pressKey(String arg){
  
  if(arg == "F1" ){Keyboard.press(KEY_F1);}else
  if(arg == "F2" ){Keyboard.press(KEY_F2);}else
  if(arg == "F3" ){Keyboard.press(KEY_F3);}else
  if(arg == "F4" ){Keyboard.press(KEY_F4);}else
  if(arg == "F5" ){Keyboard.press(KEY_F5);}else
  if(arg == "F6" ){Keyboard.press(KEY_F6);}else
  if(arg == "F7" ){Keyboard.press(KEY_F7);}else
  if(arg == "F8" ){Keyboard.press(KEY_F8);}else
  if(arg == "F9" ){Keyboard.press(KEY_F9);}else
  if(arg == "F10" ){Keyboard.press(KEY_F10);}else
  if(arg == "F11" ){Keyboard.press(KEY_F11);}else
  if(arg == "F12" ){Keyboard.press(KEY_F12);}else
  if(arg == "ESC" ){Keyboard.press(KEY_ESC);}else
  if(arg == "ENTER" ){Keyboard.press(KEY_RETURN);}else
  if(arg == "CTRL" || arg == "CONTROL" ){Keyboard.press(KEY_LEFT_CTRL);}else
  if(arg == "GUI" || arg == "WINDOWS" ){Keyboard.press(KEY_LEFT_GUI);}else
  if(arg == "ALT" ){Keyboard.press(KEY_LEFT_ALT);}else
  if(arg == "SPACE"){Keyboard.press(' ');}else
  if(arg == "SHIFT" ){Keyboard.press(KEY_LEFT_SHIFT);}else
  if(arg == "DELETE" ){Keyboard.press(KEY_DELETE);}else
  if(arg == "HOME" ){Keyboard.press(KEY_HOME);}else
  if(arg == "INSERT" ){Keyboard.press(KEY_INSERT);}else
  if(arg == "PAGEUP" ){Keyboard.press(KEY_PAGE_UP);}else
  if(arg == "PAGEDOWN" ){Keyboard.press(KEY_PAGE_DOWN);}else 
  if(arg == "UPARROW" || arg == "UP" ){Keyboard.press(KEY_UP_ARROW);}else
  if(arg == "DOWNARROW" || arg == "DOWN" ){Keyboard.press(KEY_DOWN_ARROW);}else
  if(arg == "LEFTARROW" || arg == "LEFT" ){Keyboard.press(KEY_LEFT_ARROW);}else
  if(arg == "RIGHTARROW" || arg == "RIGHT" ){Keyboard.press(KEY_RIGHT_ARROW);}else
  if(arg == "END" ){Keyboard.press(KEY_END);}else
  if(arg == "TAB" ){Keyboard.press(KEY_TAB);}else
  if(arg == "BACKSPACE" ){Keyboard.press(KEY_BACKSPACE);}else
  if(arg == "ESC" ){Keyboard.press(KEY_ESC);}else{
    for(int i = 0; i < arg.length();i++){
      Keyboard.write(arg[i]);
    }
  }

}
