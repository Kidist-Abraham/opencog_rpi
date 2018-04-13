/* Copyright (C) 2003, 2006 Free Software Foundation, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */
/* This file is automatically generated -- see configure.in for details */

#ifndef SCM_SCMCONFIG_H
#define SCM_SCMCONFIG_H

/* Important headers */
#include <stdint.h>
#include <limits.h>
#include <sys/time.h>
#include <time.h>

#define SCM_HAVE_STDC_HEADERS 1 /* 0 or 1 */
#include <stdlib.h>
#include <sys/types.h>
#include <stddef.h>

#define SCM_HAVE_SYS_SELECT_H 1 /* 0 or 1 */
#define SCM_HAVE_WINSOCK2_H 0 /* 0 or 1 */

/* Define to include various undocumented debugging functions. */
/* #undef GUILE_DEBUG */

/* Set to 1 if you want to enable deprecated features. */
/* (value will be 0 or 1). */
#define SCM_ENABLE_DEPRECATED 1

/* Set to 1 if the stack grows up, 0 otherwise. */
#define SCM_STACK_GROWS_UP 0 /* 0 or 1 */

/* C compiler's syntax for inline functions if any,
   otherwise undefined. */
#define SCM_C_INLINE inline

/* Standard types. */
/* These are always defined */
#define SCM_SIZEOF_CHAR 1
#define SCM_SIZEOF_UNSIGNED_CHAR 1
#define SCM_SIZEOF_SHORT 2
#define SCM_SIZEOF_UNSIGNED_SHORT 2
#define SCM_SIZEOF_LONG 4
#define SCM_SIZEOF_UNSIGNED_LONG 4
#define SCM_SIZEOF_INT 4
#define SCM_SIZEOF_UNSIGNED_INT 4
#define SCM_SIZEOF_SIZE_T 4

/* Size of (unsigned) long long or 0 if not available (scm_t_*64 may
   be more likely to be what you want */
#define SCM_SIZEOF_LONG_LONG 8
#define SCM_SIZEOF_UNSIGNED_LONG_LONG 8

/* These are always defined. */
typedef int8_t scm_t_int8;
typedef uint8_t scm_t_uint8;
typedef int16_t scm_t_int16;
typedef uint16_t scm_t_uint16;
typedef int32_t scm_t_int32;
typedef uint32_t scm_t_uint32;
typedef intmax_t scm_t_intmax;
typedef uintmax_t scm_t_uintmax;
typedef intptr_t scm_t_intptr;
typedef uintptr_t scm_t_uintptr;
#define SCM_SIZEOF_INTMAX 8

#define SCM_HAVE_T_INT64 1 /* 0 or 1 */
typedef int64_t scm_t_int64;
#define SCM_HAVE_T_UINT64 1 /* 0 or 1 */
typedef uint64_t scm_t_uint64;

/* scm_t_ptrdiff and size, always defined -- defined to long if
   platform doesn't have ptrdiff_t. */
typedef ptrdiff_t scm_t_ptrdiff;
#define SCM_SIZEOF_SCM_T_PTRDIFF 4

/* Size of intptr_t or 0 if not available */
#define SCM_SIZEOF_INTPTR_T 4
/* Size of uintptr_t or 0 if not available */
#define SCM_SIZEOF_UINTPTR_T 4

/* same as POSIX "struct timespec" -- always defined */
typedef struct timespec scm_t_timespec;

/*** Threading model (scmconfig.h support not finished) ***/
/* Define to 1 if using pthread multithreading. */
#define SCM_USE_PTHREAD_THREADS 1 /* 0 or 1 */
/* Define to 1 if using one-thread 'multi'threading. */
#define SCM_USE_NULL_THREADS 0 /* 0 or 1 */
/* Define to 1 if need braces around PTHREAD_ONCE_INIT (for Solaris). */
#define SCM_NEED_BRACES_ON_PTHREAD_ONCE_INIT 0 /* 0 or 1 */
/* Define to 1 if need braces around PTHREAD_MUTEX_INITIALIZER
   (for IRIX with GCC)  */
#define SCM_NEED_BRACES_ON_PTHREAD_MUTEX_INITIALIZER 0 /* 0 or 1 */
#define SCM_HAVE_GC_PTHREAD_CANCEL 1 /* 0 or 1 */
#define SCM_HAVE_GC_PTHREAD_EXIT 1 /* 0 or 1 */
#define SCM_HAVE_GC_PTHREAD_SIGMASK 1 /* 0 or 1 */


/*** File system access ***/
/* Define to 1 if `struct dirent64' is available.  */
#define SCM_HAVE_STRUCT_DIRENT64 1 /* 0 or 1 */
/* Define to 1 if `readdir64_r ()' is available.  */
#define SCM_HAVE_READDIR64_R 0 /* 0 or 1 */
typedef scm_t_int64 scm_t_off;
#define SCM_T_OFF_MAX SCM_T_INT64_MAX
#define SCM_T_OFF_MIN SCM_T_INT64_MIN
/* Define to 1 if the compiler supports the `__thread' storage class.  */
#define SCM_HAVE_THREAD_STORAGE_CLASS

#define SCM_HAVE_ARRAYS 1 /* always true now */

/* Constants from uniconv.h.  */
#define SCM_ICONVEH_ERROR 0
#define SCM_ICONVEH_QUESTION_MARK 1
#define SCM_ICONVEH_ESCAPE_SEQUENCE 2
#endif