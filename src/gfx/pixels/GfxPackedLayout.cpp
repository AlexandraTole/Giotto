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

#include "GfxPackedLayout.hpp"

namespace gfx
{

namespace pixels
{

const char GfxPackedLayout::ClassName[] = "GfxPackedLayout";

GfxPackedLayout::GfxPackedLayout() noexcept : GfxObject(ClassName)
{
    clear();
}

GfxPackedLayout::GfxPackedLayout(const ValueType value) noexcept
{
    value_ = static_cast<SdlType>(value);
}

GfxPackedLayout::GfxPackedLayout(const SdlType value) noexcept
{
    value_ = value;
}

GfxPackedLayout::GfxPackedLayout(GfxPackedLayout const& other) noexcept : GfxObject(ClassName)
{
    value_ = other.value_;
}

GfxPackedLayout::GfxPackedLayout(GfxPackedLayout&& other) noexcept : GfxObject(ClassName)
{
    value_ = other.value_;
    // Delete other's data
    other.clear();
}

GfxPackedLayout& GfxPackedLayout::operator=(GfxPackedLayout const& other) noexcept
{
    if (this != &other)
    {
        value_ = other.value_;
    }
    return *this;
}

GfxPackedLayout& GfxPackedLayout::operator=(GfxPackedLayout&& other) noexcept
{
    if (this != &other)
    {
        value_ = other.value_;
        // Delete other's data
        other.clear();
    }
    return *this;
}

GfxPackedLayout::operator bool() const noexcept
{
    return true;
}

GfxPackedLayout::ValueType GfxPackedLayout::getValue(void) const noexcept
{
    return static_cast<ValueType>(value_);
}

void GfxPackedLayout::clear(void) noexcept
{
    value_ = static_cast<SdlType>(ValueType::packedLayoutNone);
}

GfxPackedLayout::SdlType GfxPackedLayout::getAsSdlType(void) const noexcept
{
    return value_;
}

}  // namespace pixels

}  // namespace gfx

/* EOF */
