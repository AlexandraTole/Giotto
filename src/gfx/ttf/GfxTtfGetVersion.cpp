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

#include "GfxTtfGetVersion.hpp"

namespace gfx
{

namespace ttf
{

const char GfxTtfGetVersion::ClassName[] = "GfxTtfGetVersion";

GfxTtfGetVersion::GfxTtfGetVersion() noexcept : GfxObject(ClassName)
{
    // Nothing to do
}

GfxTtfGetVersion::operator bool() const noexcept
{
    return true;
}

void GfxTtfGetVersion::getVersion(gfx::version::GfxVersion * ver) const noexcept
{
    assert(ver != nullptr);

    gfx::version::GfxVersion::SdlTypePtr v;

    ver->clear();
    v = const_cast<gfx::version::GfxVersion::SdlTypePtr>(sdl2::TTF_Linked_Version());
    if (v != nullptr)
    {
        ver->set(*v);
    }
}

}  // namespace ttf

}  // namespace gfx

/* EOF */
