#pragma once

#include <M5GFX.h>
#include "ECAMFontRegular10pt7b.h"
#include "ECAMFontRegular13pt7b.h"
#include "ECAMFontRegular15pt7b.h"
#include "ECAMFontRegular17pt7b.h"

// 9pt BAD
// 10pt OK
const GFXfont ECAMFontRegular10pt7b PROGMEM =
    {(uint8_t *)ECAMFontRegular10pt7bBitmaps, (GFXglyph *)ECAMFontRegular10pt7bGlyphs, 0x20, 0x7E, 0x21}; // Approx. 1490 bytes

// 11pt BAD
// 12pt BAD

// 13pt OK
const GFXfont ECAMFontRegular13pt7b PROGMEM =
    {(uint8_t *)ECAMFontRegular13pt7bBitmaps, (GFXglyph *)ECAMFontRegular13pt7bGlyphs, 0x20, 0x7E, 28}; // Approx. 1983 bytes

// 14pt BAD!
// 15pt OK
const GFXfont ECAMFontRegular15pt7b PROGMEM =
    {(uint8_t *)ECAMFontRegular15pt7bBitmaps, (GFXglyph *)ECAMFontRegular15pt7bGlyphs, 0x20, 0x7E, 32}; // Approx. 2416 bytes

// 16pt BAD
// 17pt OK BEST
const GFXfont ECAMFontRegular17pt7b PROGMEM =
    {(uint8_t *)ECAMFontRegular17pt7bBitmaps, (GFXglyph *)ECAMFontRegular17pt7bGlyphs, 0x20, 0x7E, 36}; // Approx. 2915 bytes

// 18pt BAD
// 19pt NJ
// 20pt NJ




