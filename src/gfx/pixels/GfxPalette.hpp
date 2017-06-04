/*
  Giotto
  Copyright (C) 2017 George Oros

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.

  See copyright notice at http://lidsdl.org/license.php
*/

#ifndef GfxPalette_hpp
#define GfxPalette_hpp

#include <cstdint>
#include <string>
#include <vector>

#include "GfxSdlHeader.hpp"
#include "GfxRootClass.hpp"
#include "GfxColor.hpp"

namespace gfx
{

namespace pixels
{

class GfxPalette final : public GfxRootClass
{
public:
    typedef sdl2::SDL_Palette SdlType;
    typedef sdl2::SDL_Palette* SdlTypePtr;

    static const char ClassName[];

    GfxPalette();
    explicit GfxPalette(const uint16_t nColors);
    explicit GfxPalette(const SdlTypePtr pal);
    explicit GfxPalette(std::vector<GfxColor> const& colors);

    // No copy-ctor
    GfxPalette(const GfxPalette& other) = delete;
    GfxPalette(GfxPalette&& other);

    // No copy-oprtr
    GfxPalette& operator=(const GfxPalette& other) = delete;
    GfxPalette& operator=(GfxPalette&& other);

    virtual ~GfxPalette();

    virtual explicit operator bool() const;

    void freePalette(void);

    /* Methods */
    void setPaletteColors(std::vector<GfxColor> const& vec, const uint16_t firstColor);
    std::vector<GfxColor> getPaletteColors(void) const;

    /* Getters */
    uint16_t getNumColors(void) const;
    uint32_t getVersion(void) const;
    int32_t getRefCount(void) const;

    void clear(void);

    SdlTypePtr getAsSdlTypePtr(void) const;
private:
    static constexpr uint16_t kDefaultPaletteSize = 256;
    static constexpr uint8_t kDefaultPaletteColorRed = 0xFF;
    static constexpr uint8_t kDefaultPaletteColorGreen = 0xFF;
    static constexpr uint8_t kDefaultPaletteColorBlue = 0xFF;

    SdlTypePtr pal_;
};

}  // namespace pixels

}  // namespace gfx

#endif
