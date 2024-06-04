/*
 * AutoInit stub for cairo
 *
 * Copyright (c) 2012 Sebastian Bauer.
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Keith Packard not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Keith Packard makes no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * THE COPYRIGHT HOLDERS DISCLAIM ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS, IN NO EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN
 * AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING
 * OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

#include <cairo.h>

#include <interfaces/cairo.h>
#include <proto/exec.h>
#include <assert.h>

/****************************************************************************/

struct CairoLibrary *CairoBase = NULL;
static struct CairoLibrary *__CairoBase;

/****************************************************************************/

void cairo_base_constructor(void)
{
    if (CairoBase != NULL)
    {
        return; /* Someone was quicker, e.g. an interface constructor */
    }
    __CairoBase = CairoBase = (struct CairoLibrary *)IExec->OpenLibrary("cairo.library", 54L);
    assert(CairoBase != NULL);
}
__attribute__((section(".ctors.zzzz"))) static void (*cairo_base_constructor_ptr)(void) USED = cairo_base_constructor;

/****************************************************************************/

void cairo_base_destructor(void)
{
    if (__CairoBase)
    {
        IExec->CloseLibrary((struct Library *)__CairoBase);
    }
}
__attribute__((section(".dtors.zzzz"))) static void (*cairo_base_destructor_ptr)(void) USED = cairo_base_destructor;

/****************************************************************************/
