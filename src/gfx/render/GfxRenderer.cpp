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
#include <string>
#include <vector>

#include "GfxRenderer.hpp"

namespace gfx
{

namespace render
{

const pixels::GfxColor GfxRenderer::kDefaultRenderDrawColor = { 0x00, 0x00, 0x00, 0x00 };

const char GfxRenderer::ClassName[] = "GfxRenderer";

GfxRenderer::GfxRenderer(video::GfxWindow const& win, GfxRendererFlags const& flags)
    throw(std::runtime_error) : GfxObject(ClassName)
{
    assert(win);
    assert(flags);

    SdlTypePtr renderertmp;

    renderertmp = sdl2::SDL_CreateRenderer(win.getAsSdlTypePtr(), -1, flags.getAsSdlType());
    if (renderertmp == nullptr)
    {
        throw std::runtime_error("Unable to create renderer");
    }
    renderer_ = renderertmp;
}

GfxRenderer::GfxRenderer(surface::GfxSurface const& surf) throw(std::runtime_error) : GfxObject(ClassName)
{
    assert(surf);

    SdlTypePtr renderertmp;

    renderertmp = sdl2::SDL_CreateSoftwareRenderer(surf.getAsSdlTypePtr());
    if (renderertmp == nullptr)
    {
        throw std::runtime_error("Unable to create renderer");
    }
    renderer_ = renderertmp;
}

GfxRenderer::~GfxRenderer() noexcept
{
    if (renderer_ != nullptr)
    {
        sdl2::SDL_DestroyRenderer(renderer_);
    }
    renderer_ = nullptr;
}

GfxRenderer::operator bool() const noexcept
{
    return (renderer_ != nullptr);
}

GfxRenderer::SdlTypePtr GfxRenderer::getRenderer(video::GfxWindow const& win) const noexcept
{
    assert(win);

    SdlTypePtr rd;

    rd = sdl2::SDL_GetRenderer(win.getAsSdlTypePtr());
    if (rd == renderer_)
    {
        return renderer_;
    }
    else
    {
        return nullptr;
    }
}

GfxRendererInfo * GfxRenderer::getRendererInfo(void) const noexcept
{
    GfxRendererInfo::SdlType ri;

    if (renderer_ != nullptr)
    {
        sdl2::SDL_GetRendererInfo(renderer_, &ri);
        return new GfxRendererInfo(ri);
    }
    else
    {
        return nullptr;
    }
}

void GfxRenderer::getRendererOutputSize(int32_t * w, int32_t * h) const noexcept
{
    assert(w != nullptr);
    assert(h != nullptr);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_GetRendererOutputSize(renderer_, w, h);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::setRenderTarget(GfxTexture const& tex) const noexcept
{
    assert(tex);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_SetRenderTarget(renderer_, tex.getAsSdlTypePtr());
        assert((ret == -1) || (ret == 0));
    }
}

GfxTexture::SdlTypePtr GfxRenderer::getRenderTarget(void) const noexcept
{
    if (renderer_ != nullptr)
    {
        return sdl2::SDL_GetRenderTarget(renderer_);
    }
    return nullptr;
}

void GfxRenderer::renderSetLogicalsSize(const int32_t w, const int32_t h) const noexcept
{
    assert(w >= 0);
    assert(h >= 0);

    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderSetLogicalSize(renderer_, w, h);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderGetLogicalSize(int32_t * w, int32_t * h) const noexcept
{
    assert(w != nullptr);
    assert(h != nullptr);

    *w = -1;
    *h = -1;
    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderGetLogicalSize(renderer_, w, h);
    }
}

void GfxRenderer::renderSetIntegerScale(GfxBool const& enable) const noexcept
{
    assert(enable);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderSetIntegerScale(renderer_, enable.getAsSdlType());
        assert((ret == -1) || (ret == 0));
    }
}

GfxBool GfxRenderer::renderGetIntegerScale(void) const noexcept
{
    GfxBool::SdlType sdlbo;

    if (renderer_ != nullptr)
    {
        sdlbo = sdl2::SDL_RenderGetIntegerScale(renderer_);
        return GfxBool(sdlbo);
    }
    return GfxBool(false);
}

void GfxRenderer::renderSetViewport(rect::GfxRect const& rect) const noexcept
{
    assert(rect);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderSetViewport(renderer_, rect.getAsSdlTypePtr());
        assert((ret == -1) || (ret == 0));
    }
}

rect::GfxRect GfxRenderer::renderGetViewport(void) const noexcept
{
    rect::GfxRect::SdlType rect;

    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderGetViewport(renderer_, &rect);
        return rect::GfxRect(rect);
    }
    return rect::GfxRect();
}

void GfxRenderer::renderSetClipRect(rect::GfxRect const& rect) const noexcept
{
    assert(rect);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderSetClipRect(renderer_, rect.getAsSdlTypePtr());
        assert((ret == -1) || (ret == 0));
    }
}

rect::GfxRect GfxRenderer::renderGetClipRect(void) const noexcept
{
    rect::GfxRect::SdlType rect;

    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderGetClipRect(renderer_, &rect);
        return rect::GfxRect(rect);
    }
    return rect::GfxRect();
}

GfxBool GfxRenderer::renderIsClipEnabled(void) const noexcept
{
    GfxBool::SdlType ena;

    if (renderer_ != nullptr)
    {
        ena = sdl2::SDL_RenderIsClipEnabled(renderer_);
        return GfxBool(ena);
    }
    return GfxBool(false);
}

void GfxRenderer::renderSetScale(const float scaleX, const float scaleY) const noexcept
{
    assert(scaleX >= 0.0f);
    assert(scaleY >= 0.0f);

    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderSetScale(renderer_, scaleX, scaleY);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderGetScale(float * scaleX, float * scaleY) const noexcept
{
    assert(scaleX != nullptr);
    assert(scaleY != nullptr);

    *scaleX = 0.0f;
    *scaleY = 0.0f;
    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderGetScale(renderer_, scaleX, scaleY);
    }
}

void GfxRenderer::setRenderDrawColor(const uint8_t r, const uint8_t g, const uint8_t b,
                                    const uint8_t a) const noexcept
{
    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_SetRenderDrawColor(renderer_, r, g, b, a);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::setRenderDrawColor(pixels::GfxColor const& color) const noexcept
{
    assert(color);

    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_SetRenderDrawColor(renderer_, color.getRed(), color.getGreen(),
                                            color.getBlue(), color.getAlpha());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::getRenderDrawColor(uint8_t * r, uint8_t * g, uint8_t * b, uint8_t * a) const noexcept
{
    assert(r != nullptr);
    assert(g != nullptr);
    assert(b != nullptr);
    assert(a != nullptr);

    int32_t ret;

    *r = 0;
    *g = 0;
    *b = 0;
    *a = 0;
    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_GetRenderDrawColor(renderer_, r, g, b, a);
        assert((ret == -1) || (ret == 0));
    }
}

pixels::GfxColor GfxRenderer::getRenderDrawColor(void) const noexcept
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_GetRenderDrawColor(renderer_, &r, &g, &b, &a);
        assert((ret == -1) || (ret == 0));
        if (ret == 0)
        {
            return pixels::GfxColor(r, g, b, a);
        }
    }
    return pixels::GfxColor();
}

void GfxRenderer::setRenderDrawBlendMode(blendmode::GfxBlendMode const& blendmode) const noexcept
{
    assert(blendmode);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_SetRenderDrawBlendMode(renderer_, blendmode.getAsSdlType());
        assert((ret == -1) || (ret == 0));
    }
}

blendmode::GfxBlendMode GfxRenderer::getRenderDrawBlendMode(void) const noexcept
{
    blendmode::GfxBlendMode::SdlType bmode;
    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_GetRenderDrawBlendMode(renderer_, &bmode);
        assert((ret == -1) || (ret == 0));
        if (ret == 0)
        {
            return blendmode::GfxBlendMode(bmode);
        }
    }
    return blendmode::GfxBlendMode();
}

void GfxRenderer::renderClear() const noexcept
{
    if (renderer_ != nullptr)
    {
        sdl2::SDL_SetRenderDrawColor(renderer_, kDefaultRenderDrawColor.getRed(), kDefaultRenderDrawColor.getGreen(),
                                    kDefaultRenderDrawColor.getBlue(), kDefaultRenderDrawColor.getAlpha());
        sdl2::SDL_RenderClear(renderer_);
    }
}

void GfxRenderer::renderDrawPoint(const int32_t x, const int32_t y) const noexcept
{
    assert(x >= 0);
    assert(y >= 0);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderDrawPoint(renderer_, x, y);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderDrawPoint(rect::GfxPoint const& point) const noexcept
{
    assert(point);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderDrawPoint(renderer_, point.getX(), point.getY());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderDrawPoints(std::vector<rect::GfxPoint> const& points) const noexcept
{
    assert(points.size() > 0);

    if (renderer_ != nullptr)
    {
        for (auto& pt : points)
        {
            renderDrawPoint(pt);
        }
    }
}

void GfxRenderer::renderDrawLine(const int32_t x1, const int32_t y1, const int32_t x2,
                                const int32_t y2) const noexcept
{
    assert(x1 >= 0);
    assert(y1 >= 0);
    assert(x2 >= 0);
    assert(y2 >= 0);

    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderDrawLine(renderer_, x1, y1, x2, y2);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderDrawLine(rect::GfxPoint const& pt1,
                                rect::GfxPoint const& pt2) const noexcept
{
    assert(pt1);
    assert(pt2);

    int32_t ret;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderDrawLine(renderer_, pt1.getX(), pt1.getY(),
                                        pt2.getX(), pt2.getY());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderDrawLines(std::vector<rect::GfxPoint> const& points) const noexcept
{
    assert(points.size() > 0);
    assert(points.size() % 2 == 0);

    if (renderer_ != nullptr)
    {
        for (auto it = points.begin(); it < points.end(); it += 2)
        {
            renderDrawLine(*it, *(it + 1));
        }
    }
}

void GfxRenderer::renderDrawRect(rect::GfxRect const& rect) const noexcept
{
    assert(rect);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderDrawRect(renderer_, rect.getAsSdlTypePtr());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderDrawRects(std::vector<rect::GfxRect> const& rects) const noexcept
{
    assert(rects.size() > 0);

    if (renderer_ != nullptr)
    {
        for (auto const& it : rects)
        {
            renderDrawRect(it);
        }
    }
}

void GfxRenderer::renderFillRect(rect::GfxRect const& rect) const noexcept
{
    assert(rect);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderFillRect(renderer_, rect.getAsSdlTypePtr());
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderFillRects(std::vector<rect::GfxRect> const& rects) const noexcept
{
    assert(rects.size() > 0);

    for (auto const& it : rects)
    {
        renderDrawRect(it);
    }
}

void GfxRenderer::renderCopy(GfxTexture const& tex, rect::GfxRect const& src, rect::GfxRect const& dest) const noexcept
{
    assert(tex);
    assert(src);
    assert(dest);

    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderCopy(renderer_,
                       tex.getAsSdlTypePtr(),
                       src.getAsSdlTypePtr(),
                       dest.getAsSdlTypePtr());
    }
}

void GfxRenderer::renderCopy(GfxTexture const& tex) const noexcept
{
    assert(tex);

    if (renderer_ != nullptr)
    {
        SDL_RenderCopy(renderer_, tex.getAsSdlTypePtr(), NULL, NULL);
    }
}

void GfxRenderer::renderCopyEx(GfxTexture const& tex, rect::GfxRect const& src, rect::GfxRect const& dest,
                                const double angle, rect::GfxPoint const& pt, GfxRendererFlip const& flip)
                                const noexcept
{
    assert(tex);
    assert(src);
    assert(dest);
    assert(pt);
    assert(flip);

    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderCopyEx(renderer_,
                         tex.getAsSdlTypePtr(),
                         src.getAsSdlTypePtr(),
                         dest.getAsSdlTypePtr(),
                         angle,
                         pt.getAsSdlTypePtr(),
                         flip.getAsSdlType());
    }
}

void GfxRenderer::renderCopyEx(GfxTexture const& tex, const double angle, rect::GfxPoint const& pt,
                                GfxRendererFlip const& flip) const noexcept
{
    assert(tex);
    assert(pt);
    assert(flip);

    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderCopyEx(renderer_,
                         tex.getAsSdlTypePtr(),
                         NULL,
                         NULL,
                         angle,
                         pt.getAsSdlTypePtr(),
                         flip.getAsSdlType() );
    }
}

void GfxRenderer::renderReadPixels(rect::GfxRect const& rect, pixels::GfxPixelFormatEnum const& format,
                                void * pixels, const int32_t pitch) const noexcept
{
    assert(rect);
    assert(format);
    assert(pixels != nullptr);
    assert(pitch > 0);

    int32_t ret = 1;

    if (renderer_ != nullptr)
    {
        ret = sdl2::SDL_RenderReadPixels(renderer_, rect.getAsSdlTypePtr(), format.getAsSdlType(),
                                        pixels, pitch);
        assert((ret == -1) || (ret == 0));
    }
}

void GfxRenderer::renderPresent(void) const noexcept
{
    if (renderer_ != nullptr)
    {
        sdl2::SDL_RenderPresent(renderer_);
    }
}

void GfxRenderer::destroyRenderer() noexcept
{
    if (renderer_ != nullptr)
    {
        sdl2::SDL_DestroyRenderer(renderer_);
        renderer_ = nullptr;
    }
}

GfxRenderer::SdlTypePtr GfxRenderer::getAsSdlTypePtr() const noexcept
{
    return renderer_;
}

}  // namespace render

}  // namespace gfx

/* EOF */
