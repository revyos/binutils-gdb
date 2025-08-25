/* tc-riscv.h -- header file for tc-riscv.c.
   Copyright (C) 2011-2025 Free Software Foundation, Inc.

   Contributed by Lifang Xia (lifang_xia@linux.alibaba.com).

   This file is part of GAS.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.
 */

#ifndef TC_RISCV_XT
#define TC_RISCV_XT

#include "as.h"
#include <stdbool.h>
static bool arg_lookup (char **s, const char *const *array, size_t size, unsigned *regnop);
static void my_getExpression (expressionS *ep, char *str);
static bool reg_lookup (char **s, enum reg_class class, unsigned int *regnop);
static bool riscv_handle_implicit_zero_offset (expressionS *ep, const char *s);
static void my_getExpression (expressionS *ep, char *str);

#define USE_BITS(mask, shift) (*used_bits |= ((insn_t)(mask) << (shift)))
#define USE_IMM(n, s) (*used_bits |= ((insn_t)((1ull << n) - 1) << (s)))

static bfd_boolean
riscv_xuantie_use_bits (const char **poparg, insn_t *used_bits)
{
  const char *oparg = *poparg;
  switch (*oparg)
    {
    case 'i': /* immediate split into 2 parts.  */
      {
	/* Xti*nbit*hK@AlJ@B
	 * unsigned imm nbits,
	 * hi K bit @ A,
	 * lo J bit @ B,
	 * */
	int nbits = 0;
	int hi_bits = 0;
	int hi_at = -1;
	int lo_bits = 0;
	int lo_at = -1;

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
	oparg--;

	USE_IMM (hi_bits, hi_at);
	USE_IMM (lo_bits, lo_at);
      }
      break;

    default:
      return false;
    }
  *poparg = oparg;
  return true;
}
#undef USE_BITS
#undef USE_IMM

static bfd_boolean
riscv_xuantie_parsing_args (const char **poparg, char **pasarg,
			    struct riscv_cl_insn *ip, expressionS *imm_expr,
			    bfd_reloc_code_real_type *imm_reloc ATTRIBUTE_UNUSED)
{
  const char *oparg = *poparg;
  char *asarg = *pasarg;
  switch (*oparg)
    {
    case 'i': /* immediate split into 2 parts .  */
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

	/* oparg will plus 1 in the for loop.  */
	oparg -= 1;

	if (riscv_handle_implicit_zero_offset (imm_expr, asarg))
	  return false;

	my_getExpression (imm_expr, asarg);

	if (imm_expr->X_op != O_constant
	    || (!(VALIDATE_U_IMM (imm_expr->X_add_number >> lo_bits, hi_bits)
		  && VALIDATE_U_IMM (
		      (imm_expr->X_add_number & ((1UL << lo_bits) - 1)),
		      lo_bits))))
	  {
	    return false;
	  }

	INSERT_IMM (hi_bits, hi_at, *ip, imm_expr->X_add_number >> lo_bits);
	INSERT_IMM (lo_bits, lo_at, *ip,
		    imm_expr->X_add_number & ((1 << lo_bits) - 1));
	imm_expr->X_op = O_absent;
	asarg = expr_parse_end;
      }
      break;

    default:
      return false;
    }
  *poparg = oparg;
  *pasarg = asarg;

  return true;
}

#endif /* TC_RISCV_XT  */
