# m5gfx-fonts-ecam

[![build examples](https://github.com/jrogby/m5gfx-fonts-ecam/actions/workflows/ci.yml/badge.svg?event=status)](https://github.com/jrogby/m5gfx-fonts-ecam/actions/workflows/ci.yml)

ECAM font pack for `m5gfx-flight-ui`. Kept separate because the font is **GPL-2.0-or-later**
(from the FlightGear A320-family aircraft, github.com/legoboyvdlp/A320-family `Fonts/`;
"Copyright (c) 2025 Josh Davidson, Jonathan Redpath, merspieler, Matthew Maring, Thorsten Herrmann, Semir Gebran").
Linking it into a firmware makes that firmware GPL - fine for private use, mind it when distributing.

```cpp
#include <EcamFonts.h>
ecam_fonts::install();   // in setup(), before pages draw
```

- `assets/fonts/*.vlw` -> `src/vlw/*.cpp` + `src/EcamFontsData.h` via `python3 tools/vlw2h.py`
- `src/gfx_*` Adafruit-GFX versions (hand-converted)

## Install

```ini
lib_deps =
  https://github.com/jrogby/m5gfx-flight-ui.git#v0.1.0
  https://github.com/jrogby/m5gfx-fonts-ecam.git#v0.2.0
```

Example: [examples/install](examples/install/install.ino). License: GPL-2.0-or-later ([LICENSE](LICENSE)).
