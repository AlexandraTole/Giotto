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
#include <cstdint>
#include <cstring>

#include "GfxMeta.hpp"

#include "GfxBits.hpp"
#include "GfxBlendMode.hpp"
#include "GfxBool.hpp"
#include "GfxClipboard.hpp"
#include "GfxColor.hpp"
#include "GfxCpuInfo.hpp"
#include "GfxDisplayMode.hpp"
#include "GfxEndian.hpp"
#include "GfxGetError.hpp"
#include "GfxFileSystem.hpp"
#include "GfxGetRendererInfo.hpp"
#include "GfxGetVersion.hpp"
#include "GfxInitQuit.hpp"
#include "GfxLoadSo.hpp"
#include "GfxMessageBox.hpp"
#include "GfxMessageBoxButtonData.hpp"
#include "GfxMessageBoxButtonFlags.hpp"
#include "GfxMessageBoxColor.hpp"
#include "GfxMessageBoxColorScheme.hpp"
#include "GfxMessageBoxData.hpp"
#include "GfxMessageBoxFlags.hpp"
#include "GfxPalette.hpp"
#include "GfxPixelFormat.hpp"
#include "GfxPlatform.hpp"
#include "GfxPoint.hpp"
#include "GfxPowerInfo.hpp"
#include "GfxPowerState.hpp"
#include "GfxRect.hpp"
#include "GfxRenderer.hpp"
#include "GfxRendererFlags.hpp"
#include "GfxRendererFlip.hpp"
#include "GfxRendererInfo.hpp"
#include "GfxScreenSaver.hpp"
#include "GfxSurface.hpp"
#include "GfxSurfaceFlags.hpp"
#include "GfxTexture.hpp"
#include "GfxTextureAccess.hpp"
#include "GfxTextureModulate.hpp"
#include "GfxVersion.hpp"
#include "GfxVideo.hpp"
#include "GfxWindow.hpp"
#include "GfxWindowEventID.hpp"
#include "GfxWindowFlags.hpp"
#include "GfxWindowPosition.hpp"
#include "GfxAngle.hpp"
#include "GfxBitmapFont.hpp"
#include "GfxCanvas.hpp"
#include "GfxCanvasBgi.hpp"
#include "GfxRadius.hpp"
#include "GfxString.hpp"
#include "GfxInitFlags.hpp"  // 2017.05.17
#include "GfxTtfFont.hpp"  // 2017.05.17
#include "GfxTtfInitQuit.hpp"  // 2017.05.17
#include "GfxTtfGetVersion.hpp"  // 2017.05.18
#include "GfxTtfFontStyle.hpp"  // 2017.05.18
#include "GfxTtfFontHinting.hpp"  // 2017.05.18
#include "GfxTtfFontRenderer.hpp"  // 2017.05.19
#include "GfxFontInfo.hpp"  // 2017.05.19
#include "GfxControlledSurface.hpp"
#include "GfxPixelType.hpp"  // 2017.05.30
#include "GfxBitmapOrder.hpp"  // 2017.05.30
#include "GfxPackedOrder.hpp"  // 2017.05.30
#include "GfxArrayOrder.hpp"  // 2017.05.30
#include "GfxPackedLayout.hpp"  // 2017.05.30
#include "GfxPixelFormatEnum.hpp"  // 2017.05.30
#include "GfxHitTestResult.hpp"  // 2017.05.31
#include "GfxGammaRamp.hpp"  // 2017.06.01
#include "GfxHitTest.hpp"  // 2017.06.02
#include "GfxTextureFormats.hpp"  // 2017.06.02
#include "GfxError.hpp"  // 2017.06.03

namespace gfx
{

namespace _gfx
{

const struct GfxMeta::ClassInfoStatic GfxMeta::classInfoArraySta_[] =
{
    { gfx::bits::GfxBits::ClassName, sizeof(gfx::bits::GfxBits) },
    { gfx::blendmode::GfxBlendMode::ClassName, sizeof(gfx::blendmode::GfxBlendMode) },
    { gfx::GfxBool::ClassName, sizeof(gfx::GfxBool) },
    { gfx::clipboard::GfxClipboard::ClassName, sizeof(gfx::clipboard::GfxClipboard) },
    { gfx::pixels::GfxColor::ClassName, sizeof(gfx::pixels::GfxColor) },
    { gfx::cpuinfo::GfxCpuInfo::ClassName, sizeof(gfx::cpuinfo::GfxCpuInfo) },
    { gfx::video::GfxDisplayMode::ClassName, sizeof(gfx::video::GfxDisplayMode) },
    { gfx::endian::GfxEndian::ClassName, sizeof(gfx::endian::GfxEndian) },
    { gfx::error::GfxGetError::ClassName, sizeof(gfx::error::GfxGetError) },
    { gfx::filesystem::GfxFileSystem::ClassName, sizeof(gfx::filesystem::GfxFileSystem) },
    { gfx::GfxGetRendererInfo::ClassName, sizeof(gfx::GfxGetRendererInfo) },
    { gfx::version::GfxGetVersion::ClassName, sizeof(gfx::version::GfxGetVersion) },
    { gfx::initquit::GfxInitQuit::ClassName, sizeof(gfx::initquit::GfxInitQuit) },
    { gfx::loadso::GfxLoadSo::ClassName, sizeof(gfx::loadso::GfxLoadSo) },
    { gfx::msgbox::GfxMessageBox::ClassName, sizeof(gfx::msgbox::GfxMessageBox) },
    { gfx::msgbox::GfxMessageBoxButtonData::ClassName, sizeof(gfx::msgbox::GfxMessageBoxButtonData) },
    { gfx::msgbox::GfxMessageBoxButtonFlags::ClassName, sizeof(gfx::msgbox::GfxMessageBoxButtonFlags) },
    { gfx::msgbox::GfxMessageBoxColor::ClassName, sizeof(gfx::msgbox::GfxMessageBoxColor) },
    { gfx::msgbox::GfxMessageBoxColorScheme::ClassName, sizeof(gfx::msgbox::GfxMessageBoxColorScheme) },
    { gfx::msgbox::GfxMessageBoxData::ClassName, sizeof(gfx::msgbox::GfxMessageBoxData) },
    { gfx::msgbox::GfxMessageBoxFlags::ClassName, sizeof(gfx::msgbox::GfxMessageBoxFlags) },
    { gfx::pixels::GfxPalette::ClassName, sizeof(gfx::pixels::GfxPalette) },
    { gfx::pixels::GfxPixelFormat::ClassName, sizeof(gfx::pixels::GfxPixelFormat) },
    { gfx::platform::GfxPlatform::ClassName, sizeof(gfx::platform::GfxPlatform) },
    { rect::GfxPoint::ClassName, sizeof(gfx::rect::GfxPoint) },
    { gfx::power::GfxPowerInfo::ClassName, sizeof(gfx::power::GfxPowerInfo) },
    { gfx::power::GfxPowerState::ClassName, sizeof(gfx::power::GfxPowerState) },
    { gfx::rect::GfxRect::ClassName, sizeof(gfx::rect::GfxRect) },
    { gfx::GfxRenderer::ClassName, sizeof(gfx::GfxRenderer) },
    { gfx::GfxRendererFlags::ClassName, sizeof(gfx::GfxRendererFlags) },
    { gfx::GfxRendererFlip::ClassName, sizeof(gfx::GfxRendererFlip) },
    { gfx::GfxRendererInfo::ClassName, sizeof(gfx::GfxRendererInfo) },
    { gfx::video::GfxScreenSaver::ClassName, sizeof(gfx::video::GfxScreenSaver) },
    { gfx::surface::GfxSurface::ClassName, sizeof(gfx::surface::GfxSurface) },
    { gfx::surface::GfxSurfaceFlags::ClassName, sizeof(gfx::surface::GfxSurfaceFlags) },
    { gfx::GfxTexture::ClassName, sizeof(gfx::GfxTexture) },
    { gfx::GfxTextureAccess::ClassName, sizeof(gfx::GfxTextureAccess) },
    { gfx::GfxTextureModulate::ClassName, sizeof(gfx::GfxTextureModulate) },
    { gfx::version::GfxVersion::ClassName, sizeof(gfx::version::GfxVersion) },
    { gfx::video::GfxVideo::ClassName, sizeof(gfx::video::GfxVideo) },
    { gfx::video::GfxWindow::ClassName, sizeof(gfx::video::GfxWindow) },
    { gfx::video::GfxWindowEventID::ClassName, sizeof(gfx::video::GfxWindowEventID) },
    { gfx::video::GfxWindowFlags::ClassName, sizeof(gfx::video::GfxWindowFlags) },
    { gfx::video::GfxWindowPosition::ClassName, sizeof(gfx::video::GfxWindowPosition) },
    { gfx::bgi::GfxAngle::ClassName, sizeof(gfx::bgi::GfxAngle) },
    { gfx::bgi::fnt::GfxBitmapFont::ClassName, sizeof(gfx::bgi::fnt::GfxBitmapFont) },
    { gfx::bgi::GfxCanvas::ClassName, sizeof(gfx::bgi::GfxCanvas) },
    { gfx::bgi::GfxCanvasBgi::ClassName, sizeof(gfx::bgi::GfxCanvasBgi) },
    { gfx::bgi::GfxRadius::ClassName, sizeof(gfx::bgi::GfxRadius) },
    { gfx::bgi::GfxString::ClassName, sizeof(gfx::bgi::GfxString) },
    { gfx::initquit::GfxInitFlags::ClassName, sizeof(gfx::initquit::GfxInitFlags) },  // 2017.05.17
    { gfx::ttf::GfxTtfFont::ClassName, sizeof(gfx::ttf::GfxTtfFont) },  // 2017.05.17
    { gfx::ttf::GfxTtfInitQuit::ClassName, sizeof(gfx::ttf::GfxTtfInitQuit) },  // 2017.05.17
    { gfx::ttf::GfxTtfGetVersion::ClassName, sizeof(gfx::ttf::GfxTtfGetVersion) },  // 2017.05.18
    { gfx::ttf::GfxTtfFontStyle::ClassName, sizeof(gfx::ttf::GfxTtfFontStyle) },  // 2017.05.18
    { gfx::ttf::GfxTtfFontHinting::ClassName, sizeof(gfx::ttf::GfxTtfFontHinting) },  // 2017.05.18
    { gfx::ttf::GfxTtfFontRenderer::ClassName, sizeof(gfx::ttf::GfxTtfFontRenderer) },  // 2017.05.19
    { gfx::xtra::GfxFontInfo::ClassName, sizeof(gfx::xtra::GfxFontInfo) },  // 2017.05.19
    { gfx::xtra::GfxControlledSurface::ClassName, sizeof(gfx::xtra::GfxControlledSurface) },
    { gfx::pixels::GfxPixelType::ClassName, sizeof(gfx::pixels::GfxPixelType) },  // 2017.05.30
    { gfx::pixels::GfxBitmapOrder::ClassName, sizeof(gfx::pixels::GfxBitmapOrder) },  // 2017.05.30
    { gfx::pixels::GfxPackedOrder::ClassName, sizeof(gfx::pixels::GfxPackedOrder) },  // 2017.05.30
    { gfx::pixels::GfxArrayOrder::ClassName, sizeof(gfx::pixels::GfxArrayOrder) },  // 2017.05.30
    { gfx::pixels::GfxPackedLayout::ClassName, sizeof(gfx::pixels::GfxPackedLayout) },  // 2017.05.30
    { gfx::pixels::GfxPixelFormatEnum::ClassName, sizeof(gfx::pixels::GfxPixelFormatEnum) },  // 2017.05.30
    { gfx::video::GfxHitTestResult::ClassName, sizeof(gfx::video::GfxHitTestResult) },  // 2017.05.31
    { gfx::xtra::GfxGammaRamp::ClassName, sizeof(gfx::xtra::GfxGammaRamp) },  // 2017.06.01
    { gfx::video::GfxHitTest::ClassName, sizeof(gfx::video::GfxHitTest) },  // 2017.06.02
    { gfx::GfxTextureFormats::ClassName, sizeof(gfx::GfxTextureFormats) },  // 2017.06.02
    { gfx::error::GfxError::ClassName, sizeof(gfx::error::GfxError) }  // 2017.06.03
};

const int32_t GfxMeta::classNamesCount_ = sizeof(GfxMeta::classInfoArraySta_) /
                                          sizeof(GfxMeta::classInfoArraySta_[0]);

GfxMeta& GfxMeta::getInstance(void) noexcept
{
    static GfxMeta instance_;

    return instance_;
}

GfxMeta::ClassInfo const& GfxMeta::getClassInfo(std::string const& className) noexcept
{
    clear();
    for (const auto& it : classInfoArraySta_)
    {
        if (className == std::string(it.ClassName))
        {
            classInfo_.staticInfo = it;
            classInfo_.dynamicInfo.instanceCount = 0;
        }
    }
    return classInfo_;
}

GfxMeta::ClassInfo const& GfxMeta::getClassInfo(const int32_t index) noexcept
{
    clear();
    if (index < GfxMeta::classNamesCount_)
    {
        classInfo_.staticInfo = GfxMeta::classInfoArraySta_[index];
        classInfo_.dynamicInfo.instanceCount = 0;
    }
    return classInfo_;
}

int32_t GfxMeta::getClassCount(void) const noexcept
{
    return GfxMeta::classNamesCount_;
}

void GfxMeta::constructObject(const char * ClassName) noexcept
{
    const char * activeClassName;

    for (int32_t index = 0; index < classNamesCount_; index++)
    {
        activeClassName = classInfoArraySta_[index].ClassName;
        if (std::strcmp(ClassName, activeClassName) == 0)
        {
            classInfoArray_[index].dynamicInfo.instanceCount += 1;
        }
    }
}

void GfxMeta::destructObject(const char * ClassName) noexcept
{
    const char * activeClassName;

    for (int32_t index = 0; index < classNamesCount_; index++)
    {
        activeClassName = classInfoArraySta_[index].ClassName;
        if (std::strcmp(ClassName, activeClassName) == 0)
        {
            classInfoArray_[index].dynamicInfo.instanceCount -= 1;
        }
    }
}

// Private methods
GfxMeta::GfxMeta() noexcept
{
    clear();
}

GfxMeta::~GfxMeta() noexcept
{
    // Nothing to do
}

void GfxMeta::clear(void) noexcept
{
    classInfo_.staticInfo.ClassName = nullptr;
    classInfo_.staticInfo.Size = -1;
    classInfo_.dynamicInfo.instanceCount = 0;
    for (int32_t index = 0; index < classNamesCount_; index++)
    {
        classInfoArray_[index].staticInfo.ClassName = classInfoArraySta_[index].ClassName;
        classInfoArray_[index].staticInfo.Size = classInfoArraySta_[index].Size;
    }
}

}  // namespace _gfx

}  // namespace gfx

/* EOF */