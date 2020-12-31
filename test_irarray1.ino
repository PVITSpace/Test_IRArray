

//copyright 2020 Alexander I Rusich

/*
 * copyright 2020 Alexander I Rusich
  https://www.sparkfun.com/products/14568
  */


#include <Wire.h>
#include "grideye.h"
#include "irarray.h"



CGridEye ge;
CIRArray IRarray;

void setup(){
      Serial.begin(115200);
  Serial.println("Setup Complete");
    Wire.setClock(400000);
  Wire.begin();
    //ge.setup();
    IRarray.setup();
    }
void loop(){
  Serial.println("hello");
  //ge.loop();
  IRarray.loop();
  }
