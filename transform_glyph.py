#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys

s = sys.stdin.readlines()
s = " ".join(s)
s = "".join(s.splitlines())
s = s.split(";;")

d = dict([l.split("::") for l in s])
glyph_l = []

letters = d.keys()
letters.sort()

print """
/*
  TEXT SAMPLE FONT CODE for LOL Shield for Arduino
 Originally, copyright 2009/2010 Benjamin Sonntag <benjamin@sonntag.fr> http://benjamin.sonntag.fr/
 Since then copyright 2010 Guyzmo <guyzmo_AT_m0g.net> http://i.got.nothing.to/post/2010/07/13/Hacking-the-arduino-s-LoLshield
 
 This file has been generated using transform_glyph.py script

 History:
    2010-07-21 - V2.1 supports font generation out of glyph file
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

"""
print

print "#include <inttypes.h>"
print
print "#ifndef __LOLGLYPH_NEW_FONT__H_"
print "#define __LOLGLYPH_NEW_FONT__H_"
print

print "namespace LolGlyph {"
print


print "const uint8_t GLYPH_0[] = { 6, 63, 63, 63, 63, 63, 63, 63, 63, 63 }; // FULL char (which is also \\0)"

print "const uint8_t GLYPH_32[] = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // ' ' "

for letter in letters:
    glyph = d[letter]
    letter = letter.strip()
    print "const uint8_t GLYPH_"+str(ord(letter))+"[] = { "+", ".join(glyph.strip().split(" "))+" }; // "+letter

for i in range(0,127):
    if not " "+chr(i)+" " in letters+['   ']:
        glyph_l += ["&GLYPH_0 /* "+repr(chr(i))+" */"]
    else:
        glyph_l += ["&GLYPH_"+str(i)+" /* "+repr(chr(i))+" */"]


print "const void* glyphs[] = { "+", ".join(glyph_l)+" };"

print
print "};"

print
print "#endif"
