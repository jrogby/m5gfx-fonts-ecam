// GFX font definitions. EcamFonts.h's extern declarations give them external linkage.
#include <M5GFX.h>  // first: the data headers include it again, inside the namespace (no-op, #pragma once)
#include "EcamFonts.h"

namespace ecam_fonts::gfx {
#include "gfx_ECAMFontRegular/ECAMFontRegular.h"
#include "gfx_ECAMFontBold100em/ECAMFontBold100em.h"
}  // namespace ecam_fonts::gfx
