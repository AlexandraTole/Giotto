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

#include "GfxTexture.hpp"
#include "GfxRenderer.hpp"

namespace gfx
{

namespace render
{

const char GfxTexture::ClassName[] = "GfxTexture";

GfxTexture::GfxTexture(GfxObject * rend, pixels::GfxPixelFormatEnum const& format, GfxTextureAccess const& acc,
            const int32_t w, const int32_t h) throw(std::runtime_error) : GfxObject(ClassName)
{
    assert(rend != nullptr);
    assert(format);
    assert(acc);
    assert(w >= 0);
    assert(h >= 0);

    GfxRenderer * rendptr;
    SdlTypePtr texptr;

    rend_ = rend;
    rendptr = reinterpret_cast<GfxRenderer *>(rend);
    texptr = sdl2::SDL_CreateTexture(rendptr->getAsSdlTypePtr(),
                                     format.getAsSdlType(),
                                     acc.getAsSdlType(),
                                     w, h);
    if (texptr == nullptr)
    {
        throw std::runtime_error("Unable to create texture");
    }
    tex_ = texptr;
}

GfxTexture::GfxTexture(GfxObject * rend, surface::GfxSurface const& surf) throw(std::runtime_error)
            : GfxObject(ClassName)
{
    assert(rend != nullptr);
    assert(surf);

    GfxRenderer * rendptr;
    SdlTypePtr texptr;

    rend_ = rend;
    rendptr = reinterpret_cast<GfxRenderer *>(rend);
    texptr = sdl2::SDL_CreateTextureFromSurface(rendptr->getAsSdlTypePtr(), surf.getAsSdlTypePtr());
    if (texptr == nullptr)
    {
        throw std::runtime_error("Unable to create texture");
    }
    tex_ = texptr;
}

GfxTexture::~GfxTexture() noexcept
{
    if (tex_ != nullptr)
    {
        sdl2::SDL_DestroyTexture(tex_);
    }
    tex_ = nullptr;
}

GfxTexture::GfxTexture(GfxTexture&& tex) noexcept
{
    tex_ = tex.tex_;
    // Destroy other's data
    tex.tex_ = nullptr;
}

GfxTexture& GfxTexture::operator=(GfxTexture&& tex) noexcept
{
    if (this != &tex)
    {
        if (tex_ != nullptr)
        {
            sdl2::SDL_DestroyTexture(tex_);
        }
        tex_ = tex.tex_;
        // Destroy other's data
        tex.tex_ = nullptr;
    }
    return *this;
}

GfxTexture::operator bool() const noexcept
{
    return (tex_ != nullptr);
}

void GfxTexture::queryTexture(pixels::GfxPixelFormatEnum ** format, GfxTextureAccess ** acc, int32_t * w,
                            int32_t * h) const noexcept
{
    assert(format != nullptr);
    assert(acc != nullptr);
    assert(w != nullptr);
    assert(h != nullptr);

    pixels::GfxPixelFormatEnum::SdlType sdlfmt;
    int32_t u32sdlacc;

    if (tex_ != nullptr)
    {
        sdl2::SDL_QueryTexture(tex_, &sdlfmt, &u32sdlacc, w, h);
        *format = new pixels::GfxPixelFormatEnum(sdlfmt);
        *acc = new GfxTextureAccess(u32sdlacc);
    }
}

void GfxTexture::setTextureColorMod(const uint8_t r, const uint8_t g, const uint8_t b) const noexcept
{
    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_SetTextureColorMod(tex_, r, g, b);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::setTextureColorMod(pixels::GfxColor const& color) const noexcept
{
    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_SetTextureColorMod(tex_, color.getRed(), color.getGreen(), color.getBlue());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::getTextureColorMod(uint8_t * r, uint8_t * g, uint8_t * b) const noexcept
{
    assert(r != nullptr);
    assert(g != nullptr);
    assert(b != nullptr);

    int32_t ret = 1;

    *r = 0;
    *g = 0;
    *b = 0;
    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_GetTextureColorMod(tex_, r, g, b);
        assert((ret == -1) || (ret == 0));
    }
}

pixels::GfxColor GfxTexture::getTextureColorMod(void) const noexcept
{
    uint8_t r;
    uint8_t g;
    uint8_t b;

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_GetTextureColorMod(tex_ , &r, &g, &b);
        assert((ret == -1) || (ret == 0));
        if (ret == 0)
        {
            return pixels::GfxColor(r, g, b);
        }
    }
    return pixels::GfxColor();
}

void GfxTexture::setTextureAlphaMod(const uint8_t a) const noexcept
{
    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_SetTextureAlphaMod(tex_, a);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::getTextureAlphaMod(uint8_t * a) const noexcept
{
    assert(a != nullptr);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_GetTextureAlphaMod(tex_, a);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::setBlendMode(blendmode::GfxBlendMode const& blendmode) const noexcept
{
    assert(blendmode);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_SetTextureBlendMode(tex_, blendmode.getAsSdlType());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::setBlendMode(const blendmode::GfxBlendMode::ValueType blendmode) const noexcept
{
    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_SetTextureBlendMode(tex_, static_cast<blendmode::GfxBlendMode::SdlType>(blendmode));
        assert((ret == -1) || (ret == 0));
    }
}

blendmode::GfxBlendMode GfxTexture::getBlendMode(void) const noexcept
{
    blendmode::GfxBlendMode::SdlType bm;

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_GetTextureBlendMode(tex_, &bm);
        assert((ret == -1) || (ret == 0));
        if (ret == 0)
        {
            return blendmode::GfxBlendMode(bm);
        }
    }
    return blendmode::GfxBlendMode();
}

void GfxTexture::updateTexture(rect::GfxRect const& rect, const void * pixels, const int32_t pitch) const noexcept
{
    assert(rect);
    assert(pixels != nullptr);
    assert(pitch > 0);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_UpdateTexture(tex_, rect.getAsSdlTypePtr(), pixels, pitch);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::updateYUVTexture(rect::GfxRect const& rect,
                        const uint8_t * Yplane, const int32_t Ypitch,
                        const uint8_t * Uplane, const int32_t Upitch,
                        const uint8_t * Vplane, const int32_t Vpitch) const noexcept
{
    assert(rect);
    assert(Yplane != nullptr);
    assert(Ypitch > 0);
    assert(Uplane != nullptr);
    assert(Upitch > 0);
    assert(Vplane != nullptr);
    assert(Vpitch > 0);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_UpdateYUVTexture(tex_, rect.getAsSdlTypePtr(), Yplane, Ypitch,
                                        Uplane, Upitch, Vplane, Vpitch);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::lockTexture(rect::GfxRect const& rect, void ** pixels, int32_t * pitch) const noexcept
{
    assert(rect);
    assert(pixels != nullptr);
    assert(pitch != nullptr);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_LockTexture(tex_, rect.getAsSdlTypePtr(), pixels, pitch);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::lockTexture(void ** pixels, int * pitch) const noexcept
{
    assert(pixels != nullptr);
    assert(pitch != nullptr);

    int32_t ret = 1;

    if (tex_ != nullptr)
    {
        ret = sdl2::SDL_LockTexture(tex_, NULL, pixels, pitch);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxTexture::unlockTexture(void) const noexcept
{
    if (tex_ != nullptr)
    {
        sdl2::SDL_UnlockTexture(tex_);
    }
}

void GfxTexture::destroyTexture(void) noexcept
{
    if (tex_ != nullptr)
    {
        sdl2::SDL_DestroyTexture(tex_);
        tex_ = nullptr;
    }
}

GfxTexture::SdlTypePtr GfxTexture::getAsSdlTypePtr(void) const noexcept
{
    return tex_;
}

}  // namespace render

}  // namespace gfx

/* EOF */
