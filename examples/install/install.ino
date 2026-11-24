// Install the ECAM font pack into the flight-ui font slots, then draw with it.
#include <M5Unified.h>
#include <EcamFonts.h>
#include <flightui/fonts/slots.h>

void setup() {
  M5.begin();
  ecam_fonts::install();  // before anything draws
  M5.Display.fillScreen(TFT_BLACK);
  M5.Display.setTextColor(TFT_GREEN);
  M5.Display.loadFont(flightui::font::ECAMFontRegular22);
  M5.Display.drawString("ECAM 22", 10, 10);
}

void loop() {}
