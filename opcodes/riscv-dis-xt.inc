/* RISC-V Xuantie disassembler
   Copyright (C) 2011-2025 Free Software Foundation, Inc.

   Contributed by Lifang Xia (lifang_xia@linux.alibaba.com).

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

/* This file is only included by riscv-dis.c.  */

#ifndef __RISCV_DIS_XT__
#define __RISCV_DIS_XT__

#include "ansidecl.h"
static bool
riscv_xuantie_print_csr (unsigned csr ATTRIBUTE_UNUSED,
			 disassemble_info *info ATTRIBUTE_UNUSED)
{
  return false;
}

static bool
riscv_xuan_print_args (const char **popargs, unsigned l,
		       disassemble_info *info)
{
  fprintf_styled_ftype print = info->fprintf_styled_func;
  const char *oparg = *popargs;
  switch (*oparg)
    {
    case 'i': /* immediate split into 2 parts.  */
      {
	/* XA*nbit*hK@AlJ@B
	 * unsigned imm nbits,
	 * hi K bit @ A,
	 * lo J bit @ B,
	 * */
	int nbits = 0;
	int hi_bits = 0;
	int hi_at = -1;
	int lo_bits = 0;
	int lo_at = -1;
	int value = l;

	oparg++;

	nbits = strtol (oparg, (char **)&oparg, 10);
	(void)nbits;
	if (*oparg == 'h')
	  hi_bits = strtol (++oparg, (char **)&oparg, 10);
	if (*oparg == '@')
	  hi_at = strtol (++oparg, (char **)&oparg, 10);
	if (*oparg == 'l')
	  lo_bits = strtol (++oparg, (char **)&oparg, 10);
	if (*oparg == '@')
	  lo_at = strtol (++oparg, (char **)&oparg, 10);

	/* oparg will plus 1 in the caller.  */
	oparg -= 1;
	value = (unsigned int)EXTRACT_U_IMM (hi_bits, hi_at, l);
	value = value << lo_bits;
	value |= (unsigned int)EXTRACT_U_IMM (lo_bits, lo_at, l);

	print (info->stream, dis_style_immediate, "%u", value);
      }
      break;
    default:
      return false;
    }
  *popargs = oparg;
  return true;
}

#endif
