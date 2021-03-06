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
#include <string>

#include "GfxPowerInfo.hpp"

namespace gfx
{

namespace power
{

const char GfxPowerInfo::ClassName[] = "GfxPowerInfo";

GfxPowerInfo::GfxPowerInfo() noexcept : GfxObject(ClassName)
{
    pstate_ = GfxPowerState(GfxPowerState::ValueType::stateUnknown);
    seconds_ = -1;
    percentage_ = -1;
}

GfxPowerInfo::operator bool() const noexcept
{
    return true;
}

void GfxPowerInfo::queryPowerInfo(void) noexcept
{
    GfxPowerState::SdlType pstate;

    pstate = sdl2::SDL_GetPowerInfo(&seconds_, &percentage_);
    pstate_ = GfxPowerState(pstate);
}

GfxPowerState const& GfxPowerInfo::getPowerState(void) const noexcept
{
    return (GfxPowerState&)pstate_;
}

int32_t GfxPowerInfo::getRemainingSeconds(void) const noexcept
{
    return seconds_;
}

int32_t GfxPowerInfo::getRemainingPercentage(void) const noexcept
{
    return percentage_;
}

const std::string GfxPowerInfo::getAsString(void) const noexcept
{
    std::string str;

    str = pstate_.getAsString() + "\n";
    str += "Minutes remaining " + std::to_string(seconds_ / 60) + "\n";
    str += "Percentage left " + std::to_string(percentage_) + "%";
    return str;
}

}  // namespace power

}  // namespace gfx

/* EOF */
