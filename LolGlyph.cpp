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
#include "LolGlyph.h"

#include "WProgram.h"

#include "Charliplexing.h"

#include <inttypes.h>
#include <string.h>
#include "LolGlyph.h"

namespace LolGlyph {
  
extern const void* glyphs[];


// Mutable global variables
char disp[140];
int x_offset, disp_len, x_direction, x_stop, x_start;


void WriteChar(char c, int x_off, int y_off) {
    uint8_t* character;

    character = (uint8_t*)glyphs[c];

    int y;
    for (y=1; y<10; ++y) {
      int mask=2<<(character[0]-1);
      int x=0;
      while (mask>0) {
        if (x+x_off <= 13 && x+x_off >= 0)
            LedSign::Set(x+x_off,(y-1)+y_off,(mask&character[y])>0?1:0);
    
        mask>>=1;
        ++x;
      }
    }
}

void WriteString(char* str, int x_off, int y_off) {
    const int c_off = 6;
    
    LedSign::Clear();
  
    int i = 0;
    char c = str[i];
    while (c != '\0') {
      WriteChar(c, x_off+(c_off*i++), y_off);
      
      c = str[i];
    } 
}

void ScrollLeft_setup() {
   x_offset=disp_len+10;
   x_direction=-1;
   x_stop=0;
   x_start=disp_len+10;
}
void ScrollRight_setup() {
   x_offset=disp_len+10;
   x_direction=+1;
   x_stop=(disp_len+10);
   x_start=0;
}

void Scroll() {
  if (x_offset == x_stop)
      x_offset=x_start;
  
  x_offset += x_direction;
};

void UpdateTextFromSerial() {
  int i=0;
  char c;
   while (Serial.available() > 0 && i < 140) {
      c = Serial.read();
      Serial.write(c);
      disp[i++] = c;
      delay(1);
  }
  if (i != 0) { 
      disp_len = strlen(disp)*6;
      disp[i] = '\0';
  }
}

void WriteScrollingText () {
  Scroll();
  WriteString(disp, x_offset-(disp_len), 0);
}

void WriteText(char * text) {
  strcpy(disp,text);
  disp_len = strlen(disp)*6;
  WriteString(disp, x_offset, 0);
}

}; // namespace LolGlyph
