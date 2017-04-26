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

#ifndef GfxGetVersion_hpp
#define GfxGetVersion_hpp

#include <string>

#include "GfxRootClass.hpp"
#include "GfxVersion.hpp"

class GfxGetVersion final : public GfxRootClass
{
public:
    GfxGetVersion();
    GfxGetVersion(GfxGetVersion const&) = delete;
    GfxGetVersion(GfxGetVersion&&) = delete;

    GfxGetVersion& operator=(GfxGetVersion const&) = delete;
    GfxGetVersion& operator=(GfxGetVersion&&) = delete;

    void getVersion(GfxVersion* ver) const;
    std::string getRevision(void) const;
    int getRevisionNumber(void) const;
};

#endif /* GfxGetVersion_hpp */