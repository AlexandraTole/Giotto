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

#include <cassert>
#include <cstdint>
#include <string>

#include "GfxDisplayMode.hpp"

namespace gfx
{

namespace video
{

const char GfxDisplayMode::ClassName[] = "GfxDisplayMode";

GfxDisplayMode::GfxDisplayMode() noexcept : GfxObject(ClassName)
{
    clear();
}

GfxDisplayMode::GfxDisplayMode(uint32_t const format, int32_t const w, int32_t const h,
                               int32_t const refresh) noexcept : GfxObject(ClassName)
{
    assert(w >= 0);
    assert(h >= 0);
    assert(refresh >= 0);

    dmode_.format = format;
    dmode_.w = w;
    dmode_.h = h;
    dmode_.refresh_rate = refresh;
    dmode_.driverdata = NULL;
}

GfxDisplayMode::GfxDisplayMode(GfxDisplayMode&& other) noexcept : GfxObject(ClassName)
{
    dmode_.format = other.dmode_.format;
    dmode_.w = other.dmode_.w;
    dmode_.h = other.dmode_.h;
    dmode_.refresh_rate = other.dmode_.refresh_rate;
    dmode_.driverdata = other.dmode_.driverdata;
    // Delete other's data
    other.clear();
}

GfxDisplayMode& GfxDisplayMode::operator=(GfxDisplayMode&& other) noexcept
{
    if (this != &other)
    {
        dmode_.format = other.dmode_.format;
        dmode_.w = other.dmode_.w;
        dmode_.h = other.dmode_.h;
        dmode_.refresh_rate = other.dmode_.refresh_rate;
        dmode_.driverdata = other.dmode_.driverdata;
        // Delete other's data
        other.clear();
    }
    return *this;
}

GfxDisplayMode::operator bool() const noexcept
{
    return true;
}

uint32_t GfxDisplayMode::getFormat(void) const noexcept
{
    return dmode_.format;
}

int GfxDisplayMode::getWidth(void) const noexcept
{
    return dmode_.w;
}

int GfxDisplayMode::getHeight(void) const noexcept
{
    return dmode_.h;
}

int GfxDisplayMode::getRefreshRate(void) const noexcept
{
    return dmode_.refresh_rate;
}

void GfxDisplayMode::set(const SdlType dm) noexcept
{
    dmode_ = dm;
}

void GfxDisplayMode::clear(void) noexcept
{
    dmode_.format = 0;
    dmode_.w = -1;
    dmode_.h = -1;
    dmode_.refresh_rate = -1;
    dmode_.driverdata = NULL;
}

GfxDisplayMode::SdlType GfxDisplayMode::getAsSdlType(void) const noexcept
{
    return dmode_;
}

GfxDisplayMode::SdlTypePtr GfxDisplayMode::getAsSdlTypePtr(void) const noexcept
{
    return (SdlTypePtr)&dmode_;
}

}  // namespace video

}  // namespace gfx

/* EOF */
