#pragma once

namespace ecam_fonts {
// Point all flightui ECAM font slots (flightui/fonts/slots.h) at the embedded ECAM fonts.
// Call once at boot, before any page draws.
void install();
}
