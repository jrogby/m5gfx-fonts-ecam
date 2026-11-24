#pragma once
#include <M5GFX.h>

// Not so nice?
#include "ECAMFontBold100em7pt7bData.h" // Approx. 1185 bytes
const GFXfont ECAMFontBold100em7pt7b PROGMEM = {(uint8_t *)ECAMFontBold100em7pt7bBitmaps, (GFXglyph*) ECAMFontBold100em7pt7bGlyphs, 0x20, 0x7E, 15};

// OK
#include "ECAMFontBold100em8pt7bData.h" // Approx. 1310 bytes
const GFXfont ECAMFontBold100em8pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em8pt7bBitmaps, (GFXglyph *)ECAMFontBold100em8pt7bGlyphs, 0x20, 0x7E, 17};



#include "ECAMFontBold100emData.h"
// 9pt NJA
// 10pt OK
const GFXfont ECAMFontBold100em10pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em10pt7bBitmaps, (GFXglyph *)ECAMFontBold100em10pt7bGlyphs, 0x20, 0x7E, 21}; // Approx. 1561 bytes

// 11pt BAD
// 12pt OK BÄST!
const GFXfont ECAMFontBold100em12pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em12pt7bBitmaps, (GFXglyph *)ECAMFontBold100em12pt7bGlyphs, 0x20, 0x7E, 26}; // Approx. 1947 bytes

// 13pt BAD ..men använd i klockan!
const GFXfont ECAMFontBold100em13pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em13pt7bBitmaps, (GFXglyph *)ECAMFontBold100em13pt7bGlyphs, 0x20, 0x7E, 28}; // Approx. 2077 bytes

// 14pt OK
const GFXfont ECAMFontBold100em14pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em14pt7bBitmaps, (GFXglyph *)ECAMFontBold100em14pt7bGlyphs, 0x20, 0x7E, 30}; // Approx. 2325 bytes

// 15pt OK NÄST BÄST
const GFXfont ECAMFontBold100em15pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em15pt7bBitmaps, (GFXglyph *)ECAMFontBold100em15pt7bGlyphs, 0x20, 0x7E, 32}; // Approx. 2540 bytes

// 16pt OK BÄST!
const GFXfont ECAMFontBold100em16pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em16pt7bBitmaps, (GFXglyph *)ECAMFontBold100em16pt7bGlyphs, 0x20, 0x7E, 34}; // Approx. 2822 bytes

// 17pt
// 18pt
// 19pt ..anv 10ggr..
const GFXfont ECAMFontBold100em19pt7b PROGMEM =
  {(uint8_t *)ECAMFontBold100em19pt7bBitmaps, (GFXglyph *)ECAMFontBold100em19pt7bGlyphs, 0x20, 0x7E, 41}; // Approx. 3697 bytes

