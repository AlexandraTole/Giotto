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

#include <stdexcept>
#include <cassert>
#include <cstdint>
#include <string>

#include "GfxWindowFlags.hpp"

namespace gfx
{

namespace video
{

const char GfxWindowFlags::ClassName[] = "GfxWindowFlags";

GfxWindowFlags::GfxWindowFlags() noexcept : GfxObject(ClassName)
{
    clear();
}

GfxWindowFlags::GfxWindowFlags(const ValueType flags) noexcept : GfxObject(ClassName)
{
    flags_ = static_cast<SdlType>(flags);
}

GfxWindowFlags::GfxWindowFlags(const SdlType flags) noexcept : GfxObject(ClassName)
{
    assert(flags >= 0);

    flags_ = flags;
}

GfxWindowFlags::GfxWindowFlags(const uint32_t flags) noexcept : GfxObject(ClassName)
{
    flags_ = static_cast<SdlType>(flags);
}

GfxWindowFlags::GfxWindowFlags(GfxWindowFlags const& other) noexcept : GfxObject(ClassName)
{
    flags_ = other.flags_;
}

GfxWindowFlags::GfxWindowFlags(GfxWindowFlags&& other) noexcept : GfxObject(ClassName)
{
    flags_ = other.flags_;
    // Delete other's data
    other.clear();
}

GfxWindowFlags& GfxWindowFlags::operator=(GfxWindowFlags const& other) noexcept
{
    if (this != &other)
    {
        flags_ = other.flags_;
    }
    return *this;
}

GfxWindowFlags& GfxWindowFlags::operator=(GfxWindowFlags&& other) noexcept
{
    if (this != &other)
    {
        flags_ = other.flags_;
        // Delete other's data
        other.clear();
    }
    return *this;
}

GfxWindowFlags::operator bool() const noexcept
{
    return true;
}

/* Getters ... */
bool GfxWindowFlags::isUnkown(void) const noexcept
{
    return (flags_ == 0);
}

bool GfxWindowFlags::isFullscreen(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_FULLSCREEN;

    return (r != 0);
}

bool GfxWindowFlags::isOpenGL(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_OPENGL;

    return (r != 0);
}

bool GfxWindowFlags::isShown(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_SHOWN;

    return (r != 0);
}

bool GfxWindowFlags::isHidden(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_HIDDEN;

    return (r != 0);
}

bool GfxWindowFlags::isBorderless(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_BORDERLESS;

    return (r != 0);
}

bool GfxWindowFlags::isResizable(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_RESIZABLE;

    return (r != 0);
}

bool GfxWindowFlags::isMinimized(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_MINIMIZED;

    return (r != 0);
}

bool GfxWindowFlags::isMaximized(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_MAXIMIZED;

    return (r != 0);
}

bool GfxWindowFlags::isInputGrabbed(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_INPUT_GRABBED;

    return (r != 0);
}

bool GfxWindowFlags::isInputFocus(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_INPUT_FOCUS;

    return (r != 0);
}

bool GfxWindowFlags::isMouseFocus(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_MOUSE_FOCUS;

    return (r != 0);
}

bool GfxWindowFlags::isFullscreenDesktop(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_FULLSCREEN_DESKTOP;

    return (r != 0);
}

bool GfxWindowFlags::isForeign(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_FOREIGN;

    return (r != 0);
}

bool GfxWindowFlags::allowHighDPI(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_ALLOW_HIGHDPI;

    return (r != 0);
}

bool GfxWindowFlags::mouseCapture(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_MOUSE_CAPTURE;

    return (r != 0);
}

// X11 only
bool GfxWindowFlags::isAlwaysOnTop(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_ALWAYS_ON_TOP;

    return (r != 0);
}

bool GfxWindowFlags::skipTaskbar(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_SKIP_TASKBAR;

    return (r != 0);
}

bool GfxWindowFlags::isUtility(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_UTILITY;

    return (r != 0);
}

bool GfxWindowFlags::isTooltip(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_TOOLTIP;

    return (r != 0);
}

bool GfxWindowFlags::isPopupMenu(void) const noexcept
{
    uint32_t r = flags_ & sdl2::SDL_WINDOW_POPUP_MENU;

    return (r != 0);
}

/* Setters .. */
void GfxWindowFlags::setFullscreen(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_FULLSCREEN);
}

void GfxWindowFlags::resetFullscreen(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_FULLSCREEN);
}

void GfxWindowFlags::setOpenGL(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_OPENGL);
}

void GfxWindowFlags::resetOpenGL(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_OPENGL);
}

void GfxWindowFlags::setShown(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_SHOWN);
}

void GfxWindowFlags::resetShown(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_SHOWN);
}

void GfxWindowFlags::setHidden(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_HIDDEN);
}

void GfxWindowFlags::resetHidden(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_HIDDEN);
}

void GfxWindowFlags::setBorderless(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_BORDERLESS);
}

void GfxWindowFlags::resetBorderless(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_BORDERLESS);
}

void GfxWindowFlags::setResizable(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_RESIZABLE);
}

void GfxWindowFlags::resetResizable(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_RESIZABLE);
}

void GfxWindowFlags::setMinimized(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_MINIMIZED);
}

void GfxWindowFlags::resetMinimized(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_MINIMIZED);
}

void GfxWindowFlags::setMaximized(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_MAXIMIZED);
}

void GfxWindowFlags::resetMaximized(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_MAXIMIZED);
}

void GfxWindowFlags::setInputGrabbed(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_INPUT_GRABBED);
}

void GfxWindowFlags::resetInputGrabbed(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_INPUT_GRABBED);
}

void GfxWindowFlags::setInputFocus(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_INPUT_FOCUS);
}

void GfxWindowFlags::resetInputFocus(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_INPUT_FOCUS);
}

void GfxWindowFlags::setMouseFocus(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_MOUSE_FOCUS);
}

void GfxWindowFlags::resetMouseFocus(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_MOUSE_FOCUS);
}

void GfxWindowFlags::setFullscreenDesktop(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_FULLSCREEN_DESKTOP);
}

void GfxWindowFlags::resetFullscreenDesktop(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_FULLSCREEN_DESKTOP);
}

void GfxWindowFlags::setForeign(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_FOREIGN);
}

void GfxWindowFlags::resetForeign(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_FOREIGN);
}

void GfxWindowFlags::setAllowHighDPI(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_ALLOW_HIGHDPI);
}

void GfxWindowFlags::resetAllowHighDPI(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_ALLOW_HIGHDPI);
}

void GfxWindowFlags::setMouseCapture(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_MOUSE_CAPTURE);
}

void GfxWindowFlags::resetMouseCapture(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_MOUSE_CAPTURE);
}

// X11 only
void GfxWindowFlags::setAlwaysOnTop(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_ALWAYS_ON_TOP);
}

void GfxWindowFlags::resetAlwaysOnTop(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_ALWAYS_ON_TOP);
}

void GfxWindowFlags::setSkipTaskbar(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_SKIP_TASKBAR);
}
void GfxWindowFlags::resetSkipTaskbar(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_SKIP_TASKBAR);
}

void GfxWindowFlags::setUtility(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_UTILITY);
}

void GfxWindowFlags::resetUtility(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_UTILITY);
}

void GfxWindowFlags::setTooltip(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_TOOLTIP);
}

void GfxWindowFlags::resetTooltip(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_TOOLTIP);
}

void GfxWindowFlags::setPopupMenu(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ | sdl2::SDL_WINDOW_POPUP_MENU);
}

void GfxWindowFlags::resetPopupMenu(void) noexcept
{
    flags_ = static_cast<SdlType>(flags_ & ~sdl2::SDL_WINDOW_POPUP_MENU);
}

void GfxWindowFlags::clear(void) noexcept
{
    flags_ = static_cast<SdlType>(ValueType::windowFlagUnknown);
}

// SDL type access
GfxWindowFlags::SdlType GfxWindowFlags::getAsSdlType(void) const noexcept
{
    return flags_;
}

}  // namespace video

}  // namespace gfx

/* EOF */
