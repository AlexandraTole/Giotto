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

#include <cstdint>
#include <cstring>
#include <string>

#include "GfxRendererInfo.hpp"

namespace gfx
{

namespace render
{

const char GfxRendererInfo::ClassName[] = "GfxRendererInfo";

GfxRendererInfo::GfxRendererInfo() noexcept : GfxObject(ClassName)
{
    clear();
}

GfxRendererInfo::GfxRendererInfo(SdlType info) noexcept : GfxObject(ClassName)
{
    info_ = info;
}

GfxRendererInfo::GfxRendererInfo(const GfxRendererInfo& other) noexcept : GfxObject(ClassName)
{
    info_ = other.info_;
}

GfxRendererInfo::GfxRendererInfo(GfxRendererInfo&& other) noexcept : GfxObject(ClassName)
{
    info_ = other.info_;
    // Delete other's data
    other.clear();
}

GfxRendererInfo& GfxRendererInfo::operator=(const GfxRendererInfo& other) noexcept
{
    if (this != &other)
    {
        info_ = other.info_;
    }
    return *this;
}

GfxRendererInfo& GfxRendererInfo::operator=(GfxRendererInfo&& other) noexcept
{
    if (this != &other)
    {
        info_ = other.info_;
        // Delete other's data
        other.clear();
    }
    return *this;
}

GfxRendererInfo::operator bool() const noexcept
{
    return true;
}

std::string GfxRendererInfo::getName(void) const noexcept
{
    std::string str;

    str = info_.name;
    return str;
}

GfxRendererFlags GfxRendererInfo::getFlags(void) const noexcept
{
    return GfxRendererFlags(static_cast<GfxRendererFlags::SdlType>(info_.flags));
}

uint32_t GfxRendererInfo::getNumTextureFormats(void) const noexcept
{
    return info_.num_texture_formats;
}

GfxTextureFormats GfxRendererInfo::getTextureFormats(void) const noexcept
{
    GfxTextureFormats tf;
    uint32_t max;

    tf.clear();
    if (static_cast<int32_t>(info_.num_texture_formats) > tf.getMaxFormatsCount())
    {
        max = tf.getMaxFormatsCount();
    }
    else
    {
        max = info_.num_texture_formats;
    }
    tf.setCount(max);
    for (uint32_t i = 0; i < max; i++)
    {
        tf[i] = info_.texture_formats[i];
    }
    return tf;
}

int32_t GfxRendererInfo::getMaxTextureWidth(void) const noexcept
{
    return info_.max_texture_width;
}

int32_t GfxRendererInfo::getMaxTextureHeight(void) const noexcept
{
    return info_.max_texture_height;
}

void GfxRendererInfo::set(const SdlType info) noexcept
{
    info_ = info;
}

void GfxRendererInfo::clear(void) noexcept
{
    info_.name = nullptr;
    info_.flags = 0;
    info_.num_texture_formats = 0;
    for (int i = 0; i < 16; i++)
    {
        info_.texture_formats[i] = 0;
    }
    info_.max_texture_width = -1;
    info_.max_texture_height = -1;
}

GfxRendererInfo::SdlType GfxRendererInfo::getAsSdlType(void) const noexcept
{
    return (SdlType)info_;
}

GfxRendererInfo::SdlTypePtr GfxRendererInfo::getAsSdlTypePtr(void) const noexcept
{
    return (SdlTypePtr)&info_;
}

}  // namespace render

}  // namespace gfx

/* EOF */
