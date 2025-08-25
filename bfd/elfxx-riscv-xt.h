/* RISC-V Xuantie specific support for ELF.
   Copyright (C) 2011-2025 Free Software Foundation, Inc.

   Contributed by Lifang Xia (lifang_xia@linux.alibaba.com).

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#ifndef __ELFXX_RISCV_XT_H__
#define __ELFXX_RISCV_XT_H__
extern const char *
riscv_xuantie_get_series_with_subset (riscv_parse_subset_t *rps);

bool riscv_vendor_perfer_subset (riscv_subset_list_t *subset_list,
		                 const char *subset, int major, int minor);

bool riscv_xuantie_multi_subset_supports (riscv_parse_subset_t *rps,
					  enum riscv_insn_class insn_class);

#define XUANTIE_DEFINE_EXTENSION(M)                                           \
  M ("xtheadc", INSN_CLASS_XTHEADC, 1, 0, 0)                                  \
  M ("xtheade", INSN_CLASS_XTHEADE, 1, 0, 0)                                  \
  M ("xtheadse", INSN_CLASS_XTHEADSE, 1, 0, 0)                                \
  M ("xtheadcbi", INSN_CLASS_XTHEADCBI, 1, 0, 0)                              \
  M ("xtheadcei", INSN_CLASS_XTHEADCEI, 1, 0, 0)                              \
  M ("xtheadcf", INSN_CLASS_XTHEADCF, 1, 0, 0)                                \
  M ("xtheadcv", INSN_CLASS_XTHEADCV, 1, 0, 0)                                \
  M ("xtheadvsfa", INSN_CLASS_XTHEADVSFA, 1, 0, 0)                            \
  M ("xtheadvsfb", INSN_CLASS_XTHEADVSFB, 1, 0, 0)                            \
  M ("xtheadaioe", INSN_CLASS_XTHEADAIOE, 1, 0, 0)                            \
  M ("xtheadcbop", INSN_CLASS_XTHEADCBOP, 1, 0, 0)                            \
  M ("xtheadvarith", INSN_CLASS_XTHEADVARITH, 1, 0, 0)                        \
  M ("xtheadvcoder", INSN_CLASS_XTHEADVCODER, 1, 0, 0)

#define XUANTIE_M_riscv_supported_vendor_x_ext(xstring, class, r, p, s)       \
  { xstring, ISA_SPEC_CLASS_DRAFT, r, p, s },

#define XUANTIE_DEFINE_riscv_supported_vendor_x_ext()                         \
  XUANTIE_DEFINE_EXTENSION (XUANTIE_M_riscv_supported_vendor_x_ext)

/* For the insn class need to check one subset.  */

#define XUANTIE_M_riscv_multi_subset_supports(xstring, class, r, p, s)        \
  case class:                                                                 \
    return riscv_subset_supports (rps, xstring);

#define XUANTIE_DEFINE_riscv_multi_subset_supports()                          \
  XUANTIE_DEFINE_EXTENSION (XUANTIE_M_riscv_multi_subset_supports)

#define XUANTIE_M_riscv_multi_subset_supports_ext(xstring, class, r, p, s)    \
  case class:                                                                 \
    return xstring;

#define XUANTIE_DEFINE_riscv_multi_subset_supports_ext()                      \
  XUANTIE_DEFINE_EXTENSION (XUANTIE_M_riscv_multi_subset_supports_ext)

/* For the insn class need to check two subset, both xstring1 and xstring2 must
 * be set.  */
#define XUANTIE_DEFINE_EXTENSION_AND_TWO(M)

#define XUANTIE_M_AND_TWO_riscv_multi_subset_supports(xstring1, xstring2,     \
						      class)                  \
  case class:                                                                 \
    return riscv_subset_supports (rps, xstring1)                              \
	   && riscv_subset_supports (rps, xstring2);

#define XUANTIE_DEFINE_AND_TWO_riscv_multi_subset_supports()                  \
  XUANTIE_DEFINE_EXTENSION_AND_TWO (                                          \
      XUANTIE_M_AND_TWO_riscv_multi_subset_supports)

#define XUANTIE_M_AND_TWO_riscv_multi_subset_supports_ext(xstring1, xstring2, \
							  class)              \
  case class:                                                                 \
    if (!riscv_subset_supports (rps, xstring1)                                \
	&& !riscv_subset_supports (rps, xstring2))                            \
      return _ (xstring1 "' and `" xstring2);                                 \
    else if (!riscv_subset_supports (rps, xstring1))                          \
      return xstring1;                                                        \
    else if (!riscv_subset_supports (rps, xstring2))                          \
      return xstring2;                                                        \
    else                                                                      \
      return NULL;

#define XUANTIE_DEFINE_AND_TWO_riscv_multi_subset_supports_ext()              \
  XUANTIE_DEFINE_EXTENSION_AND_TWO (                                          \
      XUANTIE_M_AND_TWO_riscv_multi_subset_supports_ext)

/* For the insn class need to check three subset.  */
#define XUANTIE_DEFINE_EXTENSION_AND_THREE(M)

#define XUANTIE_M_AND_THREE_riscv_multi_subset_supports(xstring1, xstring2,   \
							xstring3, class)      \
  case class:                                                                 \
    return riscv_subset_supports (rps, xstring1)                              \
	   && riscv_subset_supports (rps, xstring2)                           \
	   && riscv_subset_supports (rps, xstring3);

#define XUANTIE_DEFINE_AND_THREE_riscv_multi_subset_supports()                \
  XUANTIE_DEFINE_EXTENSION_AND_THREE (                                        \
      XUANTIE_M_AND_THREE_riscv_multi_subset_supports)

#define XUANTIE_M_AND_THREE_riscv_multi_subset_supports_ext(                  \
    xstring1, xstring2, xstring3, class)                                      \
  case class:                                                                 \
    if (!riscv_subset_supports (rps, xstring1)                                \
	&& !riscv_subset_supports (rps, xstring2)                             \
	&& !riscv_subset_supports (rps, xstring3))                            \
      return _ (xstring1 "', `" xstring2 "' and `" xstring3);                 \
    else if (!riscv_subset_supports (rps, xstring1))                          \
      return xstring1;                                                        \
    else if (!riscv_subset_supports (rps, xstring2))                          \
      return xstring2;                                                        \
    else if (!riscv_subset_supports (rps, xstring3))                          \
      return xstring3;                                                        \
    else                                                                      \
      return NULL;

#define XUANTIE_DEFINE_AND_THREE_riscv_multi_subset_supports_ext()            \
  XUANTIE_DEFINE_EXTENSION_AND_THREE (                                        \
      XUANTIE_M_AND_THREE_riscv_multi_subset_supports_ext)

/* Used in for bfd/elfxx-riscv.c.  */
#define XUANTIE_DEFINE_ALL_riscv_supported_vendor_x_ext                       \
  XUANTIE_DEFINE_riscv_supported_vendor_x_ext ()

#define XUANTIE_DEFINE_ALL_riscv_multi_subset_supports                        \
  XUANTIE_DEFINE_riscv_multi_subset_supports ()                               \
      XUANTIE_DEFINE_AND_TWO_riscv_multi_subset_supports ()                   \
	  XUANTIE_DEFINE_AND_THREE_riscv_multi_subset_supports ()

#define XUANTIE_DEFINE_ALL_riscv_multi_subset_supports_ext                    \
  XUANTIE_DEFINE_riscv_multi_subset_supports_ext ()                           \
      XUANTIE_DEFINE_AND_TWO_riscv_multi_subset_supports_ext ()               \
	  XUANTIE_DEFINE_AND_THREE_riscv_multi_subset_supports_ext ()

#define XUANTIE_DEFINE_riscv_implicit_subsets                                 \
  { "xtheadc", "xtheadcmo", check_implicit_always },                          \
      { "xtheadc", "xtheadsync", check_implicit_always },                     \
      { "xtheadc", "xtheadba", check_implicit_always },                       \
      { "xtheadc", "xtheadbb", check_implicit_always },                       \
      { "xtheadc", "xtheadbs", check_implicit_always },                       \
      { "xtheadc", "xtheadcondmov", check_implicit_always },                  \
      { "xtheadc", "xtheadmemidx", check_implicit_always },                   \
      { "xtheadc", "xtheadmempair", check_implicit_always },                  \
      { "xtheadc", "xtheadfmemidx", check_implicit_always },                  \
      { "xtheadc", "xtheadfmv", check_implicit_always },                      \
      { "xtheadc", "xtheadmac", check_implicit_always },                      \
      { "xtheade", "xtheadcmo", check_implicit_always },                      \
      { "xtheade", "xtheadsync", check_implicit_always },                     \
      { "xtheade", "xtheadba", check_implicit_always },                       \
      { "xtheade", "xtheadbb", check_implicit_always },                       \
      { "xtheade", "xtheadbs", check_implicit_always },                       \
      { "xtheade", "xtheadcondmov", check_implicit_always },                  \
      { "xtheade", "xtheadmemidx", check_implicit_always },                   \
      { "xtheade", "xtheadfmv", check_implicit_always },                      \
      { "xtheade", "xtheadmac", check_implicit_always },                      \
      { "xtheade", "xtheadint", check_implicit_always },                      \
      { "xtheadvsfa", "v", check_implicit_always },

#endif
