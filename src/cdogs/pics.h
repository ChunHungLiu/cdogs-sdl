/*
    C-Dogs SDL
    A port of the legendary (and fun) action/arcade cdogs.
    Copyright (C) 1995 Ronny Wester
    Copyright (C) 2003 Jeremy Chin 
    Copyright (C) 2003-2007 Lucas Martin-King 

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    This file incorporates work covered by the following copyright and
    permission notice:

    Copyright (c) 2014, 2016 Cong Xu
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.
    Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
    AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
    LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
    CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
    SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
    INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
    CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.
*/
#pragma once

#include "blit.h"
#include "defs.h"
#include "pic_file.h"


#define PIC_UZIBULLET      42
#define PIC_COUNT1        398
#define PIC_COUNT2        182
#define PIC_MAX           (PIC_COUNT1 + PIC_COUNT2)
#define P2                PIC_COUNT1

#define DEATH_MAX       9

#define WALL_TYPE_COUNT 16
const char *IntWallType(const int i);

#define WALL_STYLE_COUNT 7
// Legacy wall type int to str
const char *IntWallStyle(const int i);

#define FLOOR_TYPES 4
#define ROOMFLOOR_TYPES 2
// Legacy floor/room tile type int to str
const char *IntTileType(const int i);

#define FLOOR_STYLE_COUNT 10
const char *IntFloorStyle(const int i);

#define ROOM_STYLE_COUNT 11
const char *IntRoomStyle(const int i);


struct Offset {
	int dx, dy;
};

typedef struct Offset OffsetTable[DIRECTION_COUNT];


extern TPalette origPalette;

extern const int cBodyPic[BODY_COUNT][DIRECTION_COUNT][STATE_COUNT];
extern const int cHeadPic[FACE_COUNT][DIRECTION_COUNT][STATE_COUNT+2];
extern const OffsetTable cBodyOffset[BODY_COUNT];
extern const OffsetTable cNeckOffset[BODY_COUNT];
extern const OffsetTable cGunHandOffset[BODY_COUNT];
extern const OffsetTable cHeadOffset[FACE_COUNT];
extern const TOffsetPic cDeathPics[DEATH_MAX];
