/******************************************************************************
 *
 * Name: accyanea.h - OS specific defines, etc. for Linux
 *
 *****************************************************************************/

/******************************************************************************
 *
 * 1. Copyright Notice
 *
 * Some or all of this work - Copyright (c) 1999 - 2023, Intel Corp.
 * All rights reserved.
 *
 * 2. License
 *
 * 2.1. This is your license from Intel Corp. under its intellectual property
 * rights. You may have additional license terms from the party that provided
 * you this software, covering your right to use that party's intellectual
 * property rights.
 *
 * 2.2. Intel grants, free of charge, to any person ("Licensee") obtaining a
 * copy of the source code appearing in this file ("Covered Code") an
 * irrevocable, perpetual, worldwide license under Intel's copyrights in the
 * base code distributed originally by Intel ("Original Intel Code") to copy,
 * make derivatives, distribute, use and display any portion of the Covered
 * Code in any form, with the right to sublicense such rights; and
 *
 * 2.3. Intel grants Licensee a non-exclusive and non-transferable patent
 * license (with the right to sublicense), under only those claims of Intel
 * patents that are infringed by the Original Intel Code, to make, use, sell,
 * offer to sell, and import the Covered Code and derivative works thereof
 * solely to the minimum extent necessary to exercise the above copyright
 * license, and in no event shall the patent license extend to any additions
 * to or modifications of the Original Intel Code. No other license or right
 * is granted directly or by implication, estoppel or otherwise;
 *
 * The above copyright and patent license is granted only if the following
 * conditions are met:
 *
 * 3. Conditions
 *
 * 3.1. Redistribution of Source with Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification with rights to further distribute source must include
 * the above Copyright Notice, the above License, this list of Conditions,
 * and the following Disclaimer and Export Compliance provision. In addition,
 * Licensee must cause all Covered Code to which Licensee contributes to
 * contain a file documenting the changes Licensee made to create that Covered
 * Code and the date of any change. Licensee must include in that file the
 * documentation of any changes made by any predecessor Licensee. Licensee
 * must include a prominent statement that the modification is derived,
 * directly or indirectly, from Original Intel Code.
 *
 * 3.2. Redistribution of Source with no Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification without rights to further distribute source must
 * include the following Disclaimer and Export Compliance provision in the
 * documentation and/or other materials provided with distribution. In
 * addition, Licensee may not authorize further sublicense of source of any
 * portion of the Covered Code, and must include terms to the effect that the
 * license from Licensee to its licensee is limited to the intellectual
 * property embodied in the software Licensee provides to its licensee, and
 * not to intellectual property embodied in modifications its licensee may
 * make.
 *
 * 3.3. Redistribution of Executable. Redistribution in executable form of any
 * substantial portion of the Covered Code or modification must reproduce the
 * above Copyright Notice, and the following Disclaimer and Export Compliance
 * provision in the documentation and/or other materials provided with the
 * distribution.
 *
 * 3.4. Intel retains all right, title, and interest in and to the Original
 * Intel Code.
 *
 * 3.5. Neither the name Intel nor any other trademark owned or controlled by
 * Intel shall be used in advertising or otherwise to promote the sale, use or
 * other dealings in products derived from or relating to the Covered Code
 * without prior written authorization from Intel.
 *
 * 4. Disclaimer and Export Compliance
 *
 * 4.1. INTEL MAKES NO WARRANTY OF ANY KIND REGARDING ANY SOFTWARE PROVIDED
 * HERE. ANY SOFTWARE ORIGINATING FROM INTEL OR DERIVED FROM INTEL SOFTWARE
 * IS PROVIDED "AS IS," AND INTEL WILL NOT PROVIDE ANY SUPPORT, ASSISTANCE,
 * INSTALLATION, TRAINING OR OTHER SERVICES. INTEL WILL NOT PROVIDE ANY
 * UPDATES, ENHANCEMENTS OR EXTENSIONS. INTEL SPECIFICALLY DISCLAIMS ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4.2. IN NO EVENT SHALL INTEL HAVE ANY LIABILITY TO LICENSEE, ITS LICENSEES
 * OR ANY OTHER THIRD PARTY, FOR ANY LOST PROFITS, LOST DATA, LOSS OF USE OR
 * COSTS OF PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, OR FOR ANY INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THIS AGREEMENT, UNDER ANY
 * CAUSE OF ACTION OR THEORY OF LIABILITY, AND IRRESPECTIVE OF WHETHER INTEL
 * HAS ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES. THESE LIMITATIONS
 * SHALL APPLY NOTWITHSTANDING THE FAILURE OF THE ESSENTIAL PURPOSE OF ANY
 * LIMITED REMEDY.
 *
 * 4.3. Licensee shall not export, either directly or indirectly, any of this
 * software or system incorporating such software without first obtaining any
 * required license or other approval from the U. S. Department of Commerce or
 * any other agency or department of the United States Government. In the
 * event Licensee exports any such software from the United States or
 * re-exports any such software from a foreign destination, Licensee shall
 * ensure that the distribution and export/re-export of the software is in
 * compliance with all laws, regulations, orders, or other restrictions of the
 * U.S. Export Administration Regulations. Licensee agrees that neither it nor
 * any of its subsidiaries will export/re-export any technical data, process,
 * software, or service, directly or indirectly, to any country for which the
 * United States government or any agency thereof requires an export license,
 * other governmental approval, or letter of assurance, without first obtaining
 * such license, approval or letter.
 *
 *****************************************************************************
 *
 * Alternatively, you may choose to be licensed under the terms of the
 * following license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions, and the following disclaimer,
 *    without modification.
 * 2. Redistributions in binary form must reproduce at minimum a disclaimer
 *    substantially similar to the "NO WARRANTY" disclaimer below
 *    ("Disclaimer") and any redistribution must be conditioned upon
 *    including a substantially similar Disclaimer requirement for further
 *    binary redistribution.
 * 3. Neither the names of the above-listed copyright holders nor the names
 *    of any contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Alternatively, you may choose to be licensed under the terms of the
 * GNU General Public License ("GPL") version 2 as published by the Free
 * Software Foundation.
 *
 *****************************************************************************/

#ifndef __ACCYANEA_H__
#define __ACCYANEA_H__

/* 7 Subsystem Configuration. */

/* 7.2 Component Selection. */

/* 7.2.1 ACPI_DISASSEMBLER. Not set. */
/* 7.2.2 ACPI_DEBUGGER. Not set. */
/* 7.2.3 ACPI_REDUCED_HARDWARE. Not set. */

/* 7.3 Configurable Data Types. */

/* 7.3.1 ACPI_SPINLOCK. Default to 'void *'. */
/* 7.3.2 ACPI_SEMAPHORE. Default to 'void *'. */
/* 7.3.3 ACPI_MUTEX. Default to 'void *'. */
/* 7.3.4 ACPI_CPU_FLAGS. Default to ACPI_SIZE. */
/* 7.3.5 ACPI_THREAD_ID. It is UINT64. */
/* 7.3.6 ACPI_CACHE_T. Default to 'void *' or ACPI_MEMORY_LIST if ACPI_USE_LOCAL_CACHE. */
/* 7.3.7 ACPI_UINTPTR_T. Default to 'void *'. */

/* 7.4 Subsystem Compile-Time Options. */
/* 7.4.1 ACPI_USE_SYSTEM_CLIBRARY. */

#define ACPI_USE_SYSTEM_CLIBRARY
#include <asm/irq.h>

#include <cyanea/ctype.h>
#include <cyanea/string.h>

/* 7.4.2 ACPI_USE_STANDARD_HEADERS. */
/* 7.4.3 ACPI_DEBUG_OUTPUT. Enable ACPI_DEBUG_PRINT and ACPI_FUNCTION_TRACE. */
#undef ACPI_DEBUG_OUTPUT

/* 7.4.4 ACPI_USE_LOCAL_CACHE. Enable ACPICA cache manager code. */
#define ACPI_USE_LOCAL_CACHE

/* 7.4.5 ACPI_DBG_TRACK_ALLOCATIONS. Enable ACPICA cache statistics (if ACPI_USE_LOCAL_CACHE). */
/* 7.4.6 ACPI_MUTEX_TYPE. Default to ACPI_BINARY_SEMAPHORE. */
/* 7.4.7 ACPI_MUTEX_DEBUG. Enables error checking on the use of mutex objects. */
/* 7.4.8 ACPI_SIMPLE_RETURN_MACROS. */
/* 7.4.9 ACPI_USE_DO_WHILE_0. */

/* 7.5 Per-Compiler Configuration. */

/* 7.5.1 COMPILER_DEPENDENT_INT64. Default to 'long long'. */
/* 7.5.2 COMPILER_DEPENDENT_UINT64. Default to 'unsigned long long'. */
/* 7.5.3 ACPI_INLINE. e.g '__inline__'. */
/* 7.5.4 ACPI_USE_NATIVE_DIVIDE. */
/* 7.5.5 ACPI_DIV_64_BY_32 (Short 64-bit Divide). */
/* 7.5.6 ACPI_SHIFT_RIGHT_64 (64-bit Shift). */
/* 7.5.7 ACPI_EXPORT_SYMBOL. */
/* 7.5.8 ACPI_EXTERNAL_XFACE. Default to ''. */
/* 7.5.9 ACPI_INTERNAL_XFACE. Default to ''. */
/* 7.5.10 ACPI_INTERNAL_VAR_XFACE. Default to ''. */
/* 7.5.11 ACPI_SYSTEM_XFACE. Default to ''. */
/* 7.5.12 ACPI_PRINTF_LIKE. e.g. '__attribute__ ((__format__ (__printf__, ...)))'. */
/* 7.5.13 ACPI_UNUSED_VAR. e.g. '__attribute__ ((unused))'. */

/* 7.6 Per-Machine Configuration. */
/* 7.6.1 ACPI_MACHINE_WIDTH. */
#if defined(__x86_64__)
# define ACPI_MACHINE_WIDTH 64
#else
# error Cyanea does not support 32 Bits
#endif

/* 7.6.2 ACPI_FLUSH_CPU_CACHE. Instructions necessary to flush the CPU cache. */
/* 7.6.3 ACPI_OS_NAME. */
/* 7.6.4 ACPI_ACQUIRE_GLOBAL_LOCK. */
/* 7.6.5 ACPI_RELEASE_GLOBAL_LOCK. */
/* */

#define ACPI_NO_ERROR_MESSAGES
#define ACPI_SINGLE_THREADED

#endif /* __ACCYANEA_H__ */
