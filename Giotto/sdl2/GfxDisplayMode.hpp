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

#ifndef GfxDisplayMode_hpp
#define GfxDisplayMode_hpp

#include "GfxRootClass.hpp"
#include "GfxSdlHeader.hpp"

class GfxDisplayMode final : public GfxRootClass
{
public:
    typedef SDL_DisplayMode SdlType;
    typedef SDL_DisplayMode* SdlTypePtr;

    GfxDisplayMode();
    GfxDisplayMode(uint32_t format,int w,int h,int refresh);
    // Copy Ctor not supported due to driver_data ptr
    GfxDisplayMode(GfxDisplayMode const&) = delete;
    GfxDisplayMode(GfxDisplayMode&& other);

    // Copy operator not supported due to driver_data ptr
    GfxDisplayMode& operator=(GfxDisplayMode const&) = delete;
    GfxDisplayMode& operator=(GfxDisplayMode&& other);

    uint32_t getFormat(void) const;
    int getWidth(void) const;
    int getHeight(void) const;
    int getRefreshRate(void) const;

    void set(SdlType dm);

    SdlType getAsSdlType(void) const;
    SdlTypePtr getAsSdlTypePtr(void) const;
private:
    SdlType dmode_;
};

#endif /* GfxDisplayMode_hpp */