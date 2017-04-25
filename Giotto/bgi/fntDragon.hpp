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
 
  Font file DRAGON.FNT I found many years ago on the internet. Please message
  me asap if you think there is a copyright issue at play here.
*/

#ifndef __fntDragon_hpp__
#define __fntDragon_hpp__

const uint8_t GfxBgiConstants::fntDragonData_[16 * 256] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0x82, 0xAA, 0x82, 0x82, 0xBA, 0x92, 0x82, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7C, 0xFE, 0xD6, 0xFE, 0xFE, 0xC6, 0xEE, 0xFE, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x6C, 0xFE, 0xFE, 0xFE, 0xFE, 0x7C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x38, 0x7C, 0xFE, 0x7C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x38, 0x7C, 0x7C, 0x38, 0xFE, 0xFE, 0x7C, 0x10, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x38, 0x7C, 0xFE, 0xFE, 0x7C, 0x10, 0x10, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xEE, 0xC6, 0x82, 0xC6, 0xC6, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x78, 0xCC, 0x84, 0x84, 0xCC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFE, 0xFE, 0xFE, 0xFE, 0xC6, 0x92, 0xBA, 0xBA, 0x92, 0xC6, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x3E, 0x0E, 0x1A, 0x32, 0x78, 0xCC, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x78, 0xCC, 0xCC, 0xCC, 0x78, 0x30, 0xFC, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x24, 0x3C, 0x20, 0x20, 0x20, 0x60, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3E, 0x22, 0x3E, 0x22, 0x22, 0x22, 0x2E, 0xEE, 0xEC, 0x60, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x10, 0xD6, 0x38, 0xEE, 0x38, 0xD6, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x60, 0x70, 0x78, 0x7E, 0x78, 0x70, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x06, 0x0E, 0x1E, 0x7E, 0x1E, 0x0E, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x30, 0x78, 0xFC, 0x30, 0x30, 0x30, 0xFC, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7E, 0xF6, 0xF6, 0xF6, 0x76, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7C, 0xC6, 0x60, 0x38, 0x6C, 0xC6, 0xC6, 0x6C, 0x38, 0x0C, 0xC6, 0x7C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x38, 0x54, 0x10, 0x10, 0x10, 0x54, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x38, 0x54, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x54, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0xFE, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x40, 0xFE, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x24, 0x42, 0xFF, 0x42, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x3C, 0x3C, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7E, 0x7E, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x30, 0x10, 0x00, 0x00,
    0x00, 0x42, 0x66, 0x66, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x24, 0x24, 0x7E, 0x00, 0x24, 0x24, 0x24, 0x24, 0x7E, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x10, 0x18, 0x3C, 0x66, 0x62, 0x40, 0x3C, 0x06, 0x42, 0x62, 0x3C, 0x18, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x42, 0x62, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x44, 0x46, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x38, 0x6C, 0x6C, 0x30, 0x3A, 0x6E, 0x6C, 0x66, 0x42, 0x3A, 0x02, 0x04, 0x00, 0x00,
    0x00, 0x10, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x0C, 0x18, 0x20, 0x30, 0x30, 0x30, 0x30, 0x30, 0x20, 0x18, 0x0C, 0x04, 0x00, 0x00,
    0x00, 0x20, 0x30, 0x18, 0x04, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x18, 0x30, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x6C, 0x30, 0xFE, 0x18, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x10, 0x30, 0xFE, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x08, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
    0x00, 0x00, 0x10, 0x38, 0x68, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x26, 0x16, 0x0C, 0x18, 0x30, 0x60, 0x60, 0x62, 0x66, 0x7A, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x26, 0x06, 0x1C, 0x06, 0x06, 0x06, 0x06, 0x26, 0x66, 0x66, 0x3C, 0x00,
    0x00, 0x00, 0x0C, 0x1C, 0x34, 0x6C, 0xC4, 0xFE, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x00,
    0x00, 0x00, 0x7E, 0x42, 0x60, 0x60, 0x7C, 0x02, 0x06, 0x06, 0x06, 0x46, 0x66, 0x42, 0x3E, 0x00,
    0x00, 0x00, 0x1C, 0x30, 0x60, 0x60, 0x7C, 0x46, 0x66, 0x66, 0x66, 0x66, 0x62, 0x62, 0x3C, 0x00,
    0x00, 0x00, 0x7E, 0x62, 0x46, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x10, 0x00,
    0x00, 0x00, 0x3C, 0x42, 0x66, 0x66, 0x24, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x42, 0x3C, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x66, 0x62, 0x3E, 0x02, 0x06, 0x06, 0x06, 0x46, 0x46, 0x7A, 0x3C, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x18, 0x00, 0x00, 0x00, 0x10, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x06, 0x0C, 0x18, 0x20, 0x60, 0x20, 0x18, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x60, 0x30, 0x18, 0x04, 0x06, 0x04, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x46, 0x66, 0x26, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x6E, 0x6E, 0x6E, 0x60, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7E, 0x66, 0x66, 0x42, 0x7E, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00,
    0x00, 0x00, 0x7E, 0x66, 0x66, 0x46, 0x7C, 0x46, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00,
    0x00, 0x00, 0x7E, 0x46, 0x62, 0x62, 0x60, 0x60, 0x60, 0x60, 0x60, 0x62, 0x62, 0x46, 0x3E, 0x00,
    0x00, 0x00, 0x78, 0x4C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x4C, 0x78, 0x00,
    0x00, 0x00, 0x7E, 0x62, 0x60, 0x44, 0x7C, 0x44, 0x60, 0x60, 0x60, 0x60, 0x60, 0x62, 0x3E, 0x00,
    0x00, 0x00, 0x7E, 0x62, 0x60, 0x44, 0x7C, 0x44, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x20, 0x00,
    0x00, 0x00, 0x7E, 0x46, 0x62, 0x62, 0x60, 0x60, 0x60, 0x6E, 0x62, 0x62, 0x62, 0x46, 0x3E, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x42, 0x7E, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00,
    0x00, 0x00, 0x10, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00,
    0x00, 0x00, 0x08, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x4C, 0x44, 0x44, 0x7C, 0x00,
    0x00, 0x00, 0x44, 0x66, 0x66, 0x66, 0x78, 0x6C, 0x6C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00,
    0x00, 0x00, 0x20, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x32, 0x26, 0x7E, 0x00,
    0x00, 0x00, 0xC6, 0xEE, 0xBA, 0x92, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x42, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x66, 0x72, 0x5A, 0x4E, 0x6E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00,
    0x00, 0x00, 0x3C, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x42, 0x3C, 0x00,
    0x00, 0x00, 0x7C, 0x66, 0x66, 0x46, 0x7C, 0x40, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x20, 0x00,
    0x00, 0x00, 0x3C, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x46, 0x56, 0x5C, 0x46, 0x3A, 0x00,
    0x00, 0x00, 0x7C, 0x66, 0x66, 0x46, 0x7E, 0x4C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00,
    0x00, 0x00, 0x3D, 0x62, 0x62, 0x30, 0x1C, 0x06, 0x06, 0x26, 0x26, 0x46, 0x46, 0x7E, 0x3C, 0x00,
    0x00, 0x00, 0x7E, 0x52, 0x5A, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00,
    0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x42, 0x7E, 0x00,
    0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00,
    0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x42, 0x5A, 0x66, 0x42, 0x00,
    0x00, 0x00, 0x66, 0x62, 0x3C, 0x18, 0x18, 0x3C, 0x24, 0x66, 0x66, 0x66, 0x66, 0x66, 0x42, 0x00,
    0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x3C, 0x10, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00,
    0x00, 0x00, 0x7E, 0x62, 0x46, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x62, 0x46, 0x7E, 0x00,
    0x00, 0x00, 0x3C, 0x20, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x20, 0x3C, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x04, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x04, 0x3C, 0x00, 0x00,
    0x00, 0x18, 0x34, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x0C, 0x7C, 0xC4, 0xCC, 0x74, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x60, 0x60, 0x5C, 0x46, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x62, 0x40, 0x60, 0x42, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x06, 0x06, 0x1E, 0x32, 0x66, 0x66, 0x66, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x62, 0x7C, 0x40, 0x62, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1C, 0x36, 0x32, 0x20, 0x78, 0x20, 0x30, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x64, 0x46, 0x62, 0x3E, 0x06, 0x66, 0x3C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x60, 0x60, 0x60, 0x7C, 0x46, 0x66, 0x66, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x18, 0x00, 0x10, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x06, 0x00, 0x04, 0x06, 0x06, 0x46, 0x66, 0x46, 0x3C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x40, 0x60, 0x62, 0x66, 0x4C, 0x7C, 0x6E, 0x66, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xD6, 0xD6, 0xD6, 0xC6, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x66, 0x66, 0x66, 0x66, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x42, 0x66, 0x66, 0x42, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x20, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x66, 0x62, 0x66, 0x3E, 0x02, 0x06, 0x02, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x2E, 0x33, 0x22, 0x30, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x62, 0x3A, 0x4C, 0x62, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x18, 0x18, 0x7E, 0x08, 0x18, 0x18, 0x1A, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x46, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0xC6, 0xC6, 0x6C, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0xC6, 0xD6, 0xD6, 0x7C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x2C, 0x18, 0x18, 0x34, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x66, 0x66, 0x66, 0x3E, 0x02, 0x0C, 0x18, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x42, 0x0C, 0x18, 0x22, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0E, 0x10, 0x18, 0x18, 0x18, 0x18, 0x6C, 0x18, 0x18, 0x18, 0x10, 0x0E, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x18, 0x18, 0x18, 0x18, 0x00, 0x10, 0x18, 0x18, 0x18, 0x18, 0x08, 0x00, 0x00,
    0x00, 0x00, 0x70, 0x08, 0x18, 0x18, 0x18, 0x18, 0x16, 0x18, 0x18, 0x18, 0x08, 0x70, 0x00, 0x00,
    0x00, 0x00, 0x3B, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x7E, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1E, 0x36, 0x60, 0x60, 0x60, 0x66, 0x66, 0x3E, 0x06, 0x03, 0x3E, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x06, 0x0C, 0x18, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x1C, 0x36, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x18, 0x0C, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1C, 0x36, 0x1C, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x66, 0x60, 0x66, 0x3C, 0x06, 0x3C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x1C, 0x36, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x18, 0x0C, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x36, 0x36, 0x00, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x3C, 0x66, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x60, 0x30, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x3C, 0x66, 0x3C, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0C, 0x18, 0x30, 0x00, 0x7E, 0x32, 0x30, 0x3C, 0x30, 0x32, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xDC, 0x76, 0x36, 0x7C, 0xD8, 0xDC, 0x76, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1F, 0x36, 0x66, 0x66, 0x7F, 0x66, 0x66, 0x66, 0x67, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x3C, 0x66, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x18, 0x0C, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x3C, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x30, 0x18, 0x0C, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x0C, 0x38, 0x00, 0x00, 0x00,
    0x00, 0x62, 0x62, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x18, 0x18, 0x7E, 0xC6, 0xC0, 0xC0, 0xC6, 0x7E, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1C, 0x36, 0x30, 0x30, 0x78, 0x30, 0x30, 0x30, 0x73, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xC6, 0x6C, 0x38, 0x10, 0xFE, 0x10, 0xFE, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0x66, 0x66, 0x7C, 0x62, 0x66, 0x6F, 0x66, 0x66, 0xF3, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0E, 0x1B, 0x18, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x18, 0xD8, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0x18, 0x30, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0x18, 0x30, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0x18, 0x30, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0C, 0x18, 0x30, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x76, 0xDC, 0x00, 0xDC, 0x66, 0x66, 0x76, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x76, 0xDC, 0x00, 0x66, 0x76, 0x76, 0x7E, 0x6E, 0x6E, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3C, 0x6C, 0x6C, 0x3E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x30, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x60, 0xE0, 0x62, 0x64, 0x68, 0x10, 0x20, 0x5C, 0x86, 0x0C, 0x18, 0x3E, 0x00, 0x00, 0x00,
    0x00, 0x60, 0xE0, 0x62, 0x64, 0x68, 0x10, 0x20, 0x56, 0xB6, 0x3E, 0x06, 0x06, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x3C, 0x3C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x36, 0x6C, 0xD8, 0x6C, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x6C, 0x36, 0x1B, 0x36, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x10, 0x44, 0x10, 0x44, 0x10, 0x44, 0x10, 0x44, 0x10, 0x44, 0x10, 0x44, 0x10, 0x44, 0x00, 0x00,
    0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x54, 0xAA, 0x00, 0x00,
    0xDC, 0x76, 0xDC, 0x76, 0xDC, 0x76, 0xDC, 0x76, 0xDC, 0x76, 0xDC, 0x76, 0xDC, 0x76, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xF6, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x18, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0xF6, 0x06, 0xF6, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x06, 0xF6, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0xF6, 0x06, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x18, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x30, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x30, 0x37, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0xF7, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF7, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x37, 0x30, 0x37, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0xF7, 0x00, 0xF7, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x18, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x18, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0xFF, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00,
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00,
    0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00,
    0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x3E, 0x6C, 0x6C, 0x6C, 0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7E, 0x66, 0x66, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFE, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7E, 0x66, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x66, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x6C, 0x6C, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x36, 0x36, 0x36, 0x36, 0x3C, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x76, 0xDC, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7E, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x18, 0x3C, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x66, 0x66, 0xE7, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1E, 0x30, 0x18, 0x0C, 0x3E, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xD6, 0xD6, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x06, 0x7C, 0xDE, 0xD6, 0xF6, 0x7C, 0x60, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1C, 0x30, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x30, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x7E, 0x7E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x10, 0x10, 0xFE, 0x10, 0x10, 0x10, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x1C, 0x36, 0x36, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00,
    0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xD8, 0xD8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x76, 0xDC, 0x00, 0x76, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0xD8, 0x78, 0x38, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xD8, 0x6C, 0x6C, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x70, 0xD8, 0x30, 0x60, 0xC8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

#endif  // __fntDragon_hpp__
