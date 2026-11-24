#include <M5GFX.h>
#include <flightui/fonts/slots.h>
#include "EcamFonts.h"
#include "EcamFontsData.h"
// GFX font data: header-defined consts, only included in this TU
#include "gfx_ECAMFontRegular/ECAMFontRegular.h"
#include "gfx_ECAMFontBold100em/ECAMFontBold100em.h"

namespace ecam_fonts {

void install() {
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
