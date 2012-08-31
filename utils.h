/// 
/// \file utils.h
/// \brief Common functions
/// \defgroup library Library Functions
/// \brief String and memory functions
/// @{
/// 
#ifndef UVL_UTILS
#define UVL_UTILS

#include "types.h"

#define MAX_LOG_LENGTH  0x100   ///< Any log entry larger than this will cause a buffer overflow!
#define LOG (format, args...) \ ///< Write a log entry
            (logf (__FILE__, __LINE__, format, args))

// string.h from libc
/*
 * Copyright (C) 2008 The Android Open Source Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/** \name string.h functions
 *  See @c string.h documention for details.
 *  @{
 */
void* memcpy (void *destination, const void *source, u32_t num);
char* strcpy (char *destination, const char *source);
int memcmp (const void *ptr1, const void *ptr2, u32_t num);
int strcmp (const char *str1, const char *str2);
void* memset (void *ptr, int value, u32_t num);
u32_t strlen (const char *str);
char* strstr (char *str1, const char *str2);
/** @}*/

/** \name stdio.h functions
 *  See @c stdio.h documention for details.
 *  @{
 */
int vsprintf (char *str, const char *fmt, va_list ap);
int sprintf (char *str, const char *format, ...);
/** @}*/

/** \name Additional functions
 *  @{
 */
char* memstr (char *needle, int n_length, char *haystack, int h_length);
void logf (char *file, int line, const char *format, ...);
/** @}*/

#endif
/// @}