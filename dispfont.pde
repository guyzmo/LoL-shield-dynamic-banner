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

#include "WProgram.h"

#include "LolGlyph_font1.h"
#include "LolGlyph.h"

/* -----------------------------------------------------------------  */
/** MAIN program Setup
 */
void setup()                    // run once, when the sketch starts
{
  LedSign::Init();
  Serial.begin(9600);
  LolGlyph::WriteText("HACK ME ON http://play.pyaler.org");
  LolGlyph::ScrollLeft_setup();
}

/* -----------------------------------------------------------------  */
/** MAIN program Loop
 */
void loop()                     // run over and over again
{ 
  LolGlyph::UpdateTextFromSerial();
  LolGlyph::WriteScrollingText();
  delay(60);
}
