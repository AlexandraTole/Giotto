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

#ifndef Linux_h
#define Linux_h

/* Detect g++ */
#ifdef __GNUG__
/* Avoid clang here */
#ifndef __clang__
#if (!defined(__MINGW32__) && (!defined(__MINGW64__)))

/* Linux specific stuff */
#define __linux_machine
#define __base_path "/var/fpwork/goros/cpp11work/tool_v4/Files"
#define WIN_W 960
#define WIN_H 480
#define __platform_default_action 0

#endif
#endif
#endif


#endif /* Linux_h */
