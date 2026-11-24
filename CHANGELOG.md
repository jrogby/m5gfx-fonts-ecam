# Changelog

Format: [Keep a Changelog](https://keepachangelog.com/), versions: [SemVer](https://semver.org/).

## [Unreleased]

## [0.2.0]
### Changed
- **Breaking:** no longer depends on `m5gfx-flight-ui`; list it in `lib_deps` yourself to use `install()`.
- `ecam_fonts::install()` now inline in `EcamFonts.h`, available only when `flightui/fonts/slots.h` is found
  (opt out: `ECAM_FONTS_NO_FLIGHTUI`).
### Added
- Fonts usable with plain M5GFX: `ecam_fonts::vlw::*`, `ECAMFontRegular*pt7b`, `ECAMFontBold100em*pt7b`.
- `examples/standalone`.

## [0.1.0]
### Added
- ECAM Regular VLW fonts 8-34 px (embedded, no filesystem) + Adafruit-GFX Regular/Bold.
- `ecam_fonts::install()` fills the `m5gfx-flight-ui` ECAM font slots.
- `tools/vlw2h.py` regenerates `src/vlw/` from `assets/fonts/`.
