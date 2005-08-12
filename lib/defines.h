/*
 *      Copyright (C) 2000,2001,2002,2005 Nikos Mavroyanopoulos
 *
 * This file is part of LIBTASN1.
 *
 * LIBTASN1 is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * LIBTASN1 is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LIBTASN1; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef DEFINES_H
# define DEFINES_H

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#ifdef STDC_HEADERS
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
#endif

#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif

#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif

#if HAVE_INTTYPES_H
# include <inttypes.h>
#else
# if HAVE_STDINT_H
#  include <stdint.h>
# else
#  if SIZEOF_UNSIGNED_LONG_INT == 4
typedef unsigned long int uint32;
typedef signed long int sint32;
#  elif SIZEOF_UNSIGNED_INT == 4
typedef unsigned int uint32;
typedef signed int sint32;
#  else
#   error "Cannot find a 32 bit integer in your system, sorry."
#  endif
#  if SIZEOF_UNSIGNED_INT == 2
typedef unsigned int uint16;
typedef signed int sint16;
#  elif SIZEOF_UNSIGNED_SHORT_INT == 2
typedef unsigned short int uint16;
typedef signed short int sint16;
#  else
#   error "Cannot find a 16 bit integer in your system, sorry."
#  endif
#  if SIZEOF_UNSIGNED_CHAR == 1
typedef unsigned char uint8;
typedef signed char int8;
#  else
#   error "Cannot find an 8 bit char in your system, sorry."
# endif
#endif

#endif	/* defines_h */
