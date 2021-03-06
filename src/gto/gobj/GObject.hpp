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

#ifndef GObject_hpp
#define GObject_hpp

#include <cstdint>
#include <string>

namespace gto
{

namespace gobj
{

class GObject
{
public:
    GObject();

    GObject(GObject const& other);
    GObject(GObject&& other);

    GObject& operator=(GObject const& other);
    GObject& operator=(GObject&& other);

    virtual ~GObject();

    bool operator==(GObject const& other);
private:
    enum class GInitType : int32_t
    {
        defaultCtor,
        copyCtor,
        moveCtor
    };
    GInitType initType_;
};

}  // namespace gobj

}  // namespace gto

#endif /* GObject_hpp */
