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

#ifndef GApplication_hpp
#define GApplication_hpp

#include <memory>
#include <string>

#include "GObject.hpp"
#include "GForm.hpp"

class GApplication : public GObject
{
public:
    GApplication();

    GApplication(GApplication const&) = delete;
    GApplication(GApplication&&) = delete;

    GApplication& operator=(GApplication const&) = delete;
    GApplication& operator=(GApplication&&) = delete;

    void setMainForm(GForm::SharedPtr mainForm);

    void loadAppConfiguration(void);
    void run(void);
private:
    GForm::SharedPtr mainForm_;
};

#endif /* GApplication_hpp */
