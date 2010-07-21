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



#include <inttypes.h>

#ifndef __LOLGLYPH_NEW_FONT__H_
#define __LOLGLYPH_NEW_FONT__H_

namespace LolGlyph {

const uint8_t GLYPH_0[] = { 6, 63, 63, 63, 63, 63, 63, 63, 63, 63 }; // FULL char (which is also \0)
const uint8_t GLYPH_32[] = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // ' ' 
const uint8_t GLYPH_33[] = { 4, 0, 6, 6, 6, 6, 2, 0, 6, 0 }; // !
const uint8_t GLYPH_39[] = { 4, 0, 6, 2, 4, 0, 0, 0, 0, 0 }; // '
const uint8_t GLYPH_44[] = { 4, 0, 0, 0, 0, 0, 0, 6, 6, 2 }; // ,
const uint8_t GLYPH_46[] = { 4, 0, 0, 0, 0, 0, 0, 6, 6, 0 }; // .
const uint8_t GLYPH_47[] = { 6, 2, 2, 4, 4, 8, 8, 16, 16, 0 }; // /
const uint8_t GLYPH_48[] = { 6, 0, 12, 18, 22, 26, 18, 18, 12, 0 }; // 0
const uint8_t GLYPH_49[] = { 5, 0, 4, 12, 4, 4, 4, 4, 14, 0 }; // 1
const uint8_t GLYPH_50[] = { 6, 0, 12, 18, 4, 8, 16, 16, 30, 0 }; // 2
const uint8_t GLYPH_51[] = { 6, 0, 30, 2, 4, 12, 2, 18, 12, 0 }; // 3
const uint8_t GLYPH_52[] = { 6, 0, 16, 16, 16, 20, 30, 4, 4, 0 }; // 4
const uint8_t GLYPH_53[] = { 6, 0, 30, 16, 16, 30, 2, 18, 12, 0 }; // 5
const uint8_t GLYPH_54[] = { 6, 0, 12, 18, 16, 28, 18, 18, 12, 0 }; // 6
const uint8_t GLYPH_55[] = { 6, 0, 30, 2, 2, 4, 8, 16, 16, 0 }; // 7
const uint8_t GLYPH_56[] = { 6, 0, 12, 18, 18, 12, 18, 18, 12, 0 }; // 8
const uint8_t GLYPH_57[] = { 6, 0, 12, 18, 18, 14, 2, 18, 12, 0 }; // 9
const uint8_t GLYPH_58[] = { 4, 0, 0, 6, 6, 0, 6, 6, 0, 0 }; // :
const uint8_t GLYPH_59[] = { 4, 0, 0, 6, 6, 0, 6, 2, 2, 4 }; // ;
const uint8_t GLYPH_63[] = { 6, 0, 12, 18, 6, 4, 4, 0, 12, 0 }; // ?
const uint8_t GLYPH_65[] = { 6, 0, 12, 18, 18, 30, 18, 18, 18, 0 }; // A
const uint8_t GLYPH_66[] = { 6, 0, 28, 18, 18, 20, 18, 18, 28, 0 }; // B
const uint8_t GLYPH_67[] = { 6, 0, 12, 18, 16, 16, 16, 18, 12, 0 }; // C
const uint8_t GLYPH_68[] = { 6, 0, 28, 18, 18, 18, 18, 18, 28, 0 }; // D
const uint8_t GLYPH_69[] = { 6, 0, 30, 16, 16, 28, 16, 16, 30, 0 }; // E
const uint8_t GLYPH_70[] = { 6, 0, 30, 16, 16, 28, 16, 16, 16, 0 }; // F
const uint8_t GLYPH_71[] = { 6, 0, 12, 18, 16, 22, 18, 12, 0 }; // G
const uint8_t GLYPH_72[] = { 6, 0, 18, 18, 18, 30, 18, 18, 18, 0 }; // H
const uint8_t GLYPH_73[] = { 5, 0, 14, 4, 4, 4, 4, 4, 14, 0 }; // I
const uint8_t GLYPH_74[] = { 6, 0, 6, 2, 2, 2, 2, 18, 14, 0 }; // J
const uint8_t GLYPH_75[] = { 6, 0, 18, 20, 24, 24, 20, 20, 18, 0 }; // K
const uint8_t GLYPH_76[] = { 6, 0, 16, 16, 16, 16, 16, 18, 30, 0 }; // L
const uint8_t GLYPH_77[] = { 6, 0, 34, 54, 42, 34, 34, 34, 34, 0 }; // M
const uint8_t GLYPH_78[] = { 6, 0, 18, 26, 22, 18, 18, 18, 18, 0 }; // N
const uint8_t GLYPH_79[] = { 6, 0, 12, 18, 18, 18, 18, 18, 12, 0 }; // O
const uint8_t GLYPH_80[] = { 6, 0, 28, 18, 20, 24, 16, 16, 16, 0 }; // P
const uint8_t GLYPH_81[] = { 6, 0, 12, 18, 18, 18, 18, 22, 15, 0 }; // Q
const uint8_t GLYPH_82[] = { 6, 0, 28, 18, 28, 24, 20, 18, 18, 0 }; // R
const uint8_t GLYPH_83[] = { 6, 0, 12, 18, 8, 4, 2, 18, 12, 0 }; // S
const uint8_t GLYPH_84[] = { 6, 0, 31, 4, 4, 4, 4, 4, 4, 0 }; // T
const uint8_t GLYPH_85[] = { 6, 0, 18, 18, 18, 18, 18, 18, 12, 0 }; // U
const uint8_t GLYPH_86[] = { 6, 0, 18, 18, 18, 18, 18, 12, 4, 0 }; // V
const uint8_t GLYPH_87[] = { 6, 0, 42, 42, 42, 42, 42, 42, 20, 0 }; // W
const uint8_t GLYPH_88[] = { 6, 0, 18, 18, 12, 4, 12, 18, 18, 0 }; // X
const uint8_t GLYPH_89[] = { 6, 0, 18, 18, 18, 12, 4, 4, 4, 0 }; // Y
const uint8_t GLYPH_90[] = { 6, 0, 30, 2, 4, 8, 16, 16, 30, 0 }; // Z
const uint8_t GLYPH_97[] = { 6, 0, 0, 0, 28, 2, 14, 18, 14, 0 }; // a
const uint8_t GLYPH_98[] = { 6, 0, 16, 16, 16, 28, 18, 18, 28, 0 }; // b
const uint8_t GLYPH_99[] = { 6, 0, 0, 0, 0, 14, 16, 16, 14, 0 }; // c
const uint8_t GLYPH_100[] = { 6, 0, 0, 2, 2, 14, 18, 18, 14, 0 }; // d
const uint8_t GLYPH_101[] = { 6, 0, 0, 0, 28, 18, 28, 16, 14, 0 }; // e
const uint8_t GLYPH_102[] = { 5, 0, 0, 4, 10, 8, 12, 8, 8, 0 }; // f
const uint8_t GLYPH_103[] = { 6, 0, 0, 0, 12, 18, 14, 2, 18, 14 }; // g
const uint8_t GLYPH_104[] = { 6, 0, 0, 16, 16, 16, 28, 18, 18, 0 }; // h
const uint8_t GLYPH_105[] = { 4, 0, 0, 0, 6, 0, 4, 4, 6, 0 }; // i
const uint8_t GLYPH_106[] = { 5, 0, 2, 0, 2, 2, 10, 10, 6, 0 }; // j
const uint8_t GLYPH_107[] = { 5, 0, 0, 8, 8, 8, 10, 12, 10, 0 }; // k
const uint8_t GLYPH_108[] = { 5, 0, 0, 4, 4, 4, 4, 4, 6, 0 }; // l
const uint8_t GLYPH_109[] = { 6, 0, 0, 0, 0, 26, 21, 21, 21, 0 }; // m
const uint8_t GLYPH_110[] = { 5, 0, 0, 0, 0, 12, 10, 10, 10, 0 }; // n
const uint8_t GLYPH_111[] = { 5, 0, 0, 0, 4, 10, 10, 10, 4, 0 }; // o
const uint8_t GLYPH_112[] = { 5, 0, 0, 0, 14, 10, 10, 12, 8, 8 }; // p
const uint8_t GLYPH_113[] = { 5, 0, 0, 0, 14, 10, 10, 6, 2, 2 }; // q
const uint8_t GLYPH_114[] = { 5, 0, 0, 0, 0, 14, 8, 8, 8, 0 }; // r
const uint8_t GLYPH_115[] = { 5, 0, 0, 0, 4, 8, 4, 2, 12, 0 }; // s
const uint8_t GLYPH_116[] = { 5, 0, 0, 4, 14, 4, 4, 4, 6, 0 }; // t
const uint8_t GLYPH_117[] = { 6, 0, 0, 0, 0, 0, 18, 18, 14, 0 }; // u
const uint8_t GLYPH_118[] = { 6, 0, 0, 0, 0, 0, 18, 10, 6, 0 }; // v
const uint8_t GLYPH_119[] = { 6, 0, 0, 0, 0, 0, 21, 21, 10, 0 }; // w
const uint8_t GLYPH_120[] = { 5, 0, 0, 0, 0, 10, 4, 4, 10, 0 }; // x
const uint8_t GLYPH_121[] = { 5, 0, 0, 0, 0, 10, 14, 2, 10, 6 }; // y
const uint8_t GLYPH_122[] = { 6, 0, 0, 0, 0, 30, 2, 4, 30, 0 }; // z
const void* glyphs[] = { &GLYPH_0 /* '\x00' */, &GLYPH_0 /* '\x01' */, &GLYPH_0 /* '\x02' */, &GLYPH_0 /* '\x03' */, &GLYPH_0 /* '\x04' */, &GLYPH_0 /* '\x05' */, &GLYPH_0 /* '\x06' */, &GLYPH_0 /* '\x07' */, &GLYPH_0 /* '\x08' */, &GLYPH_0 /* '\t' */, &GLYPH_0 /* '\n' */, &GLYPH_0 /* '\x0b' */, &GLYPH_0 /* '\x0c' */, &GLYPH_0 /* '\r' */, &GLYPH_0 /* '\x0e' */, &GLYPH_0 /* '\x0f' */, &GLYPH_0 /* '\x10' */, &GLYPH_0 /* '\x11' */, &GLYPH_0 /* '\x12' */, &GLYPH_0 /* '\x13' */, &GLYPH_0 /* '\x14' */, &GLYPH_0 /* '\x15' */, &GLYPH_0 /* '\x16' */, &GLYPH_0 /* '\x17' */, &GLYPH_0 /* '\x18' */, &GLYPH_0 /* '\x19' */, &GLYPH_0 /* '\x1a' */, &GLYPH_0 /* '\x1b' */, &GLYPH_0 /* '\x1c' */, &GLYPH_0 /* '\x1d' */, &GLYPH_0 /* '\x1e' */, &GLYPH_0 /* '\x1f' */, &GLYPH_32 /* ' ' */, &GLYPH_33 /* '!' */, &GLYPH_0 /* '"' */, &GLYPH_0 /* '#' */, &GLYPH_0 /* '$' */, &GLYPH_0 /* '%' */, &GLYPH_0 /* '&' */, &GLYPH_39 /* "'" */, &GLYPH_0 /* '(' */, &GLYPH_0 /* ')' */, &GLYPH_0 /* '*' */, &GLYPH_0 /* '+' */, &GLYPH_44 /* ',' */, &GLYPH_0 /* '-' */, &GLYPH_46 /* '.' */, &GLYPH_47 /* '/' */, &GLYPH_48 /* '0' */, &GLYPH_49 /* '1' */, &GLYPH_50 /* '2' */, &GLYPH_51 /* '3' */, &GLYPH_52 /* '4' */, &GLYPH_53 /* '5' */, &GLYPH_54 /* '6' */, &GLYPH_55 /* '7' */, &GLYPH_56 /* '8' */, &GLYPH_57 /* '9' */, &GLYPH_58 /* ':' */, &GLYPH_59 /* ';' */, &GLYPH_0 /* '<' */, &GLYPH_0 /* '=' */, &GLYPH_0 /* '>' */, &GLYPH_63 /* '?' */, &GLYPH_0 /* '@' */, &GLYPH_65 /* 'A' */, &GLYPH_66 /* 'B' */, &GLYPH_67 /* 'C' */, &GLYPH_68 /* 'D' */, &GLYPH_69 /* 'E' */, &GLYPH_70 /* 'F' */, &GLYPH_71 /* 'G' */, &GLYPH_72 /* 'H' */, &GLYPH_73 /* 'I' */, &GLYPH_74 /* 'J' */, &GLYPH_75 /* 'K' */, &GLYPH_76 /* 'L' */, &GLYPH_77 /* 'M' */, &GLYPH_78 /* 'N' */, &GLYPH_79 /* 'O' */, &GLYPH_80 /* 'P' */, &GLYPH_81 /* 'Q' */, &GLYPH_82 /* 'R' */, &GLYPH_83 /* 'S' */, &GLYPH_84 /* 'T' */, &GLYPH_85 /* 'U' */, &GLYPH_86 /* 'V' */, &GLYPH_87 /* 'W' */, &GLYPH_88 /* 'X' */, &GLYPH_89 /* 'Y' */, &GLYPH_90 /* 'Z' */, &GLYPH_0 /* '[' */, &GLYPH_0 /* '\\' */, &GLYPH_0 /* ']' */, &GLYPH_0 /* '^' */, &GLYPH_0 /* '_' */, &GLYPH_0 /* '`' */, &GLYPH_97 /* 'a' */, &GLYPH_98 /* 'b' */, &GLYPH_99 /* 'c' */, &GLYPH_100 /* 'd' */, &GLYPH_101 /* 'e' */, &GLYPH_102 /* 'f' */, &GLYPH_103 /* 'g' */, &GLYPH_104 /* 'h' */, &GLYPH_105 /* 'i' */, &GLYPH_106 /* 'j' */, &GLYPH_107 /* 'k' */, &GLYPH_108 /* 'l' */, &GLYPH_109 /* 'm' */, &GLYPH_110 /* 'n' */, &GLYPH_111 /* 'o' */, &GLYPH_112 /* 'p' */, &GLYPH_113 /* 'q' */, &GLYPH_114 /* 'r' */, &GLYPH_115 /* 's' */, &GLYPH_116 /* 't' */, &GLYPH_117 /* 'u' */, &GLYPH_118 /* 'v' */, &GLYPH_119 /* 'w' */, &GLYPH_120 /* 'x' */, &GLYPH_121 /* 'y' */, &GLYPH_122 /* 'z' */, &GLYPH_0 /* '{' */, &GLYPH_0 /* '|' */, &GLYPH_0 /* '}' */, &GLYPH_0 /* '~' */ };

};

#endif

