/*
  TEXT SAMPLE CODE for LOL Shield for Arduino
 Copyright 2009/2010 Benjamin Sonntag <benjamin@sonntag.fr> http://benjamin.sonntag.fr/
 and copyright 2010 Guyzmo <guyzmo_AT_m0g.net> http://i.got.nothing.to/post/2010/07/13/Hacking-the-arduino-s-LoLshield
 
 History:
        2010-07-11 - V2.0 dynamic FONT Drawing from serial line, at Bordeaux after 11th RMLL ;)
 	2009-12-31 - V1.0 FONT Drawing, at Berlin after 26C3 ;) 
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330,
 Boston, MA 02111-1307, USA.
 */

//#include "MemoryFree.h"
#include "Charliplexing.h"
#include "Font.h"

#include "WProgram.h"

#define MAX_STR 128
//#define DEFAULT_TEXT "HACK ME ON HTTP://192.168.69.163/"

char* disp;

/* -----------------------------------------------------------------  */
/** MAIN program Setup
 */
void setup()                    // run once, when the sketch starts
{
  LedSign::Init();
  Serial.begin(9600);
  
  //Serial.write("init");
  //disp = (char*)calloc(1, MAX_STR);
  //Serial.write("malloc");
  //strlcpy(disp, DEFAULT_TEXT, sizeof(DEFAULT_TEXT));
  //Serial.write("strcpy");
}

void display (char* test, int size) {
  int8_t x=0,x2=0;
  for(int8_t j=13;j>-100;j--) {
    x=j;
    LedSign::Clear();
    for(int i=0;i<size;i++) {
      x2=Font::Draw(test[i],x,0);
      //Serial.write(test[i]);
      x+=x2;
      if (x>=13) break;
    }  
    delay(80);
  }
  LedSign::Clear();
}

/* -----------------------------------------------------------------  */
/** MAIN program Loop
 */
void loop()                     // run over and over again
{
    int i = 0;
    char c;
    char disp[MAX_STR];

    while (Serial.available()>0 && i < MAX_STR) {
        c = Serial.read();
        
        if (c >= 97 && c <= 122) c -= 32; // Make all lowercase to uppercase
           
        Serial.write(c);
        disp[i++] = c;
        
        delay(1);
    }
    
    //Serial.write('\n in stack');
    //Serial.write(disp);
    //Serial.write('\n in display()');
    if (i != 0)
        while (Serial.available() == 0)
            display(disp,i);
}


