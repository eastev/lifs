// SPDX-License-Identifier: GPL-3.0
// Created by eastev <https://github.com/eastev>

// This file is a part of LIFS creation tool

#ifndef __LIFS_COMMONS_H__
#define __LIFS_COMMONS_H__

#include <stdint.h>

#include <lifs_bitmap.h>

// Common defines for LIFS
#define _LIFS_SECTOR_SIZE_ 512
#define _LIFS_MIN_FS_SIZE_ 7
#define _LIFS_NAMES_LEN_ 256

// Finds first free sector
// Returns sector id, or 0 in case of error
uint32_t find_first_free_sector(lifs_bitmap_t* bitmap);

#endif
