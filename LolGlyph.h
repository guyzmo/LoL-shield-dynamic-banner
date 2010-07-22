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
#ifndef __LOLGLYPH__H_
#define __LOLGLYPH__H_

namespace LolGlyph {

/* Function that draws character c at position x_off:y_off on the lolshield */
void WriteChar(char c, int x_off, int y_off);

/* Function that writes str at position x_off:y_off on the lolshield (with an offset of LolGlyph::x_offset) */
void WriteString(char* str, int x_off, int y_off);

/* Function that writes a text on the lolshield at current position */
void WriteText(char * text);

/* Function that sets the text to scroll towards the left
 * This function is to be called in setup() function */
void ScrollLeft_setup();
/* Function that sets the text to scroll towards the right
 * This function is to be called in setup() function */
void ScrollRight_setup();

/* Function that gets the text from serial line
 * To be called inside loop() function */
void UpdateTextFromSerial();

/* Function that scrolls the text to the next step
 * To be called inside the loop() function */
void Scroll();

/* Function that updates the text on the lolshield and scrolls it (by calling Scroll())
 * To be called inside loop() function */
void WriteScrollingText ();

}; // namespace LolGlyph

#endif
