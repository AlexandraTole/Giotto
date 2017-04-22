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

#ifndef GfxMessageBoxData_hpp
#define GfxMessageBoxData_hpp

#include <string>

#include "GfxRootClass.hpp"
#include "GfxSdlHeader.hpp"
#include "GfxMessageBoxFlags.hpp"
#include "GfxWindow.hpp"
#include "GfxMessageBoxColorScheme.hpp"
#include "GfxMessageBoxButtonData.hpp"

class GfxMessageBoxData final : public GfxRootClass
{
public:
    typedef SDL_MessageBoxData SdlType;
    typedef SDL_MessageBoxData* SdlTypePtr;

    GfxMessageBoxData();
    GfxMessageBoxData(const GfxMessageBoxFlags& flags,const GfxWindow& win,std::string title, std::string message, const int numbuttons, GfxMessageBoxButtonData buttons[],const GfxMessageBoxColorScheme& colorScheme);
    GfxMessageBoxData(const GfxMessageBoxFlags& flags,const GfxWindow& win,std::string title, std::string message, const int numbuttons, GfxMessageBoxButtonData buttons[]);
    GfxMessageBoxData(GfxMessageBoxData const& other);
    GfxMessageBoxData(GfxMessageBoxData&& other);
    
    virtual ~GfxMessageBoxData();

    GfxMessageBoxData& operator=(GfxMessageBoxData const& other);
    GfxMessageBoxData& operator=(GfxMessageBoxData&& other);
    
    SdlType getAsSdlType(void) const;
    SdlTypePtr getAsSdlTypePtr(void) const;
private:
    SdlType data_;
    GfxMessageBoxButtonData::SdlTypePtr btndataptr;
    std::string title_;
    std::string message_;
};

#endif /* GfxMessageBoxData_hpp */