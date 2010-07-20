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

for letter in letters:
    glyph = d[letter]
    letter = letter.strip()
    print "const uint8_t GLYPH_"+str(ord(letter))+"[] = { "+", ".join(glyph.strip().split(" "))+" }; // "+letter

for i in range(0,127):
    if not " "+chr(i)+" " in letters:
        glyph_l += ["&GLYPH_0 /* "+repr(chr(i))+" */"]
    else:
        glyph_l += ["&GLYPH_"+str(i)+" /* "+repr(chr(i))+" */"]

print
print "#ifndef __LOLGLYPH_NEW_FONT__H_"
print "#define __LOLGLYPH_NEW_FONT__H_"
print

print "namespace LolGlyph {"
print

print "const void* glyphs[] = { "+", ".join(glyph_l)+" };"

print
print "};"

print
print "#endif"
