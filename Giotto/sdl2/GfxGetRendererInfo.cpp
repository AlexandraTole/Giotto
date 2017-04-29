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

#include <cstring>

#include "GfxGetRendererInfo.hpp"
#include "GfxRendererInfo.hpp"

GfxGetRendererInfo::GfxGetRendererInfo() : GfxRootClass("GfxGetRendererInfo")
{
    numRenderDrivers_ = -1;
}

int GfxGetRendererInfo::getNumRenderDrivers(void)
{
    int nrd;

    nrd = SDL_GetNumRenderDrivers();
    if (nrd >= 0)
    {
        numRenderDrivers_ = nrd + 1;
    }
    return nrd;
}

void GfxGetRendererInfo::getRenderDriverInfo(const int index, GfxRendererInfo* infoptr)
{
    GfxRendererInfo::SdlType rdi;

    if (index < numRenderDrivers_)
    {
        SDL_GetRenderDriverInfo(index, &rdi);
        infoptr->set(rdi);
    }
    else
    {
        infoptr = nullptr;
    }
}
/* EOF */