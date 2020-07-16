#include <SPI.h>
#include <Mouse.h>
#include "RF24.h"
 
int msg[4];
int msg1;
int msg2;
int msg3;
int msg4;
int c=0;
int d=0;



 
byte address[6] = "1Node";
 

RF24 radio(7,8);  // CE, CSN
 
 
void setup(void) {
 
  Serial.begin(9600);
 
  radio.begin();
  Mouse.begin();
 
 
  radio.openReadingPipe(1, address);
 
  radio.startListening();
 
}
 
void loop(void) {
 
  if(radio.available()) {
 
 
    radio.read(&msg, sizeof(msg)); 
   
    Serial.print("Meassage (RX) = ");
     Serial.print(msg[0]);
    Serial.println(msg[1]);
    
 
    Mouse.move(msg[1], -msg[0]);
    Serial.print(msg[2]);
    Serial.print("\n");
    Serial.print(msg[3]);
    Serial.print("\n");

  
    
  }
  if(msg[2] <200)
  {
    c=c+1;
    
    if(c==1){
      Mouse.click(MOUSE_LEFT);
    }
    else if(c==12000){
      
      Mouse.click(MOUSE_LEFT);
    }
  }
   else{
    c=0;
    }
    
    if(msg[3] <300)
  {
    d=d+1;
    if(d==1){
      Mouse.click(MOUSE_RIGHT);
    }
  }
   else{
    d=0;
    }

  
    
  

}
