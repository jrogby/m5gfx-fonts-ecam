// Use the ECAM fonts directly with M5GFX (no flight-ui needed).
#include <M5Unified.h>
#include <EcamFonts.h>

void setup() {
  M5.begin();
  M5.Display.fillScreen(TFT_BLACK);
  M5.Display.setTextColor(TFT_GREEN);
  M5.Display.loadFont(ecam_fonts::vlw::ECAMFontRegular22);
  M5.Display.drawString("ECAM VLW 22", 10, 10);
  M5.Display.unloadFont();
  M5.Display.setFont(&ECAMFontBold100em16pt7b);
  M5.Display.drawString("ECAM GFX 16", 10, 60);
}

void loop() {}
