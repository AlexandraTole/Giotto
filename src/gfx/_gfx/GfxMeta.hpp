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

#ifndef GfxMeta_hpp
#define GfxMeta_hpp

#include <stdexcept>
#include <cstdint>
#include <string>

namespace gfx
{

namespace _gfx
{

class GfxMeta final
{
public:
    struct ClassInfo
    {
        const char * className_;
        int32_t size_;
        bool hasSdlType_;
        bool hasSdlTypePtr_;
        bool isAbstract_;
        bool isPolymorphic_;
        bool isMoveConstructible_;
        bool isMoveAssignable_;
        bool isDerivedFromGfxObject_;
        bool sdlResource_;
        bool hasValueType_;
        bool callsSdl_;
    };

    GfxMeta() noexcept;
    ~GfxMeta() noexcept;

    GfxMeta(GfxMeta const&) = delete;
    GfxMeta(GfxMeta&&) = delete;

    GfxMeta& operator=(GfxMeta const&) = delete;
    GfxMeta& operator=(GfxMeta&&) = delete;

    ClassInfo const& getClassInfo(std::string const& className) noexcept;
    ClassInfo const& getClassInfo(const int32_t index) noexcept;
    int32_t getClassCount(void) const noexcept;
private:
    void clear(void) noexcept;

    static const int32_t classNamesCount_;
    static const ClassInfo classInfoArray_[];

    ClassInfo classInfo_;
};

}  // namespace _gfx

}  // namespace gfx

#endif  // GfxMeta_hpp
