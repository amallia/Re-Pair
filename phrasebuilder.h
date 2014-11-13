/*    Re-Pair / Des-Pair
**    Compressor and decompressor based on recursive pairing.
**    Copyright (C) 2003, 2007 by Raymond Wan (rwan@kuicr.kyoto-u.ac.jp)
**
**    Version 1.0.1 -- 2007/04/02
**
**    This file is part of the Re-Pair / Des-Pair software.
**
**    Re-Pair / Des-Pair is free software; you can redistribute it and/or modify
**    it under the terms of the GNU General Public License as published by
**    the Free Software Foundation; either version 2 of the License, or
**    (at your option) any later version.
**
**    Re-Pair / Des-Pair is distributed in the hope that it will be useful,
**    but WITHOUT ANY WARRANTY; without even the implied warranty of
**    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**    GNU General Public License for more details.
**
**    You should have received a copy of the GNU General Public License along
**    with Re-Pair / Des-Pair; if not, write to the Free Software Foundation, Inc.,
**    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef PHRASEBUILDER_H
#define PHRASEBUILDER_H

#define INIT_PAIRED_ARRAY_SIZE 65536

/*  Symbol pairs that have already been paired  */
typedef struct paired {
  R_UINT left;
  R_UINT right;
  struct paired *next;
} PAIRED;

/*  Initialization  */
void initQueue (PROG_INFO *prog_struct, BLOCK_INFO *block_struct);

/*  Recursive pairing  */
void rePairPhrases (PROG_INFO *prog_struct, BLOCK_INFO *block_struct);

/*  Primitive sorting  */
void sortPrimitives (BLOCK_INFO *block_struct);

/*  Phrase sorting  */
void sortPhrases (PROG_INFO *prog_struct, BLOCK_INFO *block_struct);

#endif

/*  End of phrasebuilder.h  */