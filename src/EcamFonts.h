#pragma once
// ECAM font pack for M5GFX. Usable stand-alone:
//   VLW: canvas.loadFont(ecam_fonts::vlw::ECAMFontRegular16);
//   GFX: canvas.setFont(&ECAMFontRegular13pt7b);
// With m5gfx-flight-ui present, ecam_fonts::install() fills its ECAM font slots.
#include <M5GFX.h>
#include "EcamFontsData.h"

// GFX (Adafruit-style) fonts, defined in src/gfx_fonts.cpp
#define ECAM_GFX_REGULAR_SIZES(X) X(10) X(13) X(15) X(17)
#define ECAM_GFX_BOLD_SIZES(X) X(7) X(8) X(10) X(12) X(13) X(14) X(15) X(16) X(19)
#define ECAM_DECL_GFXR(n) extern const lgfx::GFXfont ECAMFontRegular##n##pt7b;
#define ECAM_DECL_GFXB(n) extern const lgfx::GFXfont ECAMFontBold100em##n##pt7b;
ECAM_GFX_REGULAR_SIZES(ECAM_DECL_GFXR)
ECAM_GFX_BOLD_SIZES(ECAM_DECL_GFXB)
#undef ECAM_DECL_GFXR
#undef ECAM_DECL_GFXB

#if !defined(ECAM_FONTS_NO_FLIGHTUI) && __has_include(<flightui/fonts/slots.h>)
#include <flightui/fonts/slots.h>
#define ECAM_FONTS_HAS_FLIGHTUI 1
namespace ecam_fonts {
// Point all flightui ECAM font slots at the embedded ECAM fonts.
// Call once at boot, before any page draws.
inline void install() {
  namespace f = flightui::font;
#define ECAM_SET_VLW(n)  f::ECAMFontRegular##n = vlw::ECAMFontRegular##n;
#define ECAM_SET_GFXR(n) f::ECAMFontRegular##n##pt7b = &::ECAMFontRegular##n##pt7b;
#define ECAM_SET_GFXB(n) f::ECAMFontBold100em##n##pt7b = &::ECAMFontBold100em##n##pt7b;
  FLIGHTUI_ECAM_VLW_SLOTS(ECAM_SET_VLW)
  FLIGHTUI_ECAM_GFX_REGULAR_SLOTS(ECAM_SET_GFXR)
  FLIGHTUI_ECAM_GFX_BOLD_SLOTS(ECAM_SET_GFXB)
#undef ECAM_SET_VLW
#undef ECAM_SET_GFXR
#undef ECAM_SET_GFXB
}
}  // namespace ecam_fonts
#endif
