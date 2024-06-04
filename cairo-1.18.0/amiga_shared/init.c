/*
 * This file is part of cairo.
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

#include <stdarg.h>

#include <exec/exec.h>
#include <dos/dos.h>

#include <proto/exec.h>
#include <proto/cairo.h>
#include <proto/utility.h>
#include <proto/diskfont.h>
#include <proto/layers.h>
#include <proto/graphics.h>

/* Version Tag */
#include "cairo.library_rev.h"
STATIC CONST UBYTE USED verstag[] = VERSTAG;

struct DiskfontIFace *IDiskfont = NULL;
struct Library *DiskfontBase = NULL;

struct UtilityIFace *IUtility = NULL;
struct Library *UtilityBase = NULL;

struct GraphicsIFace *IGraphics = NULL;
struct Library *GraphicsBase = NULL;

struct LayersIFace *ILayers = NULL;
struct Library *LayersBase = NULL;

struct CairoLibrary
{
    struct Library libNode;
    BPTR segList;
    /* If you need more data fields, add them here */
};

/*
 * The system (and compiler) rely on a symbol named _start which marks
 * the beginning of execution of an ELF file. To prevent others from 
 * executing this library, and to keep the compiler/linker happy, we
 * define an empty _start symbol here.
 *
 * On the classic system (pre-AmigaOS 4.x) this was usually done by
 * moveq #0,d0
 * rts
 *
 */
int32 _start(void);
int32 _start(void)
{
    /* If you feel like it, open DOS and print something to the user */
    return RETURN_FAIL;
}


/* Open the library */
STATIC struct Library *libOpen(struct LibraryManagerInterface *Self, ULONG version)
{
    struct CairoLibrary *libBase = (struct CairoLibrary *)Self->Data.LibBase;

    if (version > VERSION)
    {
        return NULL;
    }

    /* Add any specific open code here 
       Return 0 before incrementing OpenCnt to fail opening */


    /* Add up the open count */
    libBase->libNode.lib_OpenCnt++;
    return (struct Library *)libBase;

}


/* Close the library */
STATIC APTR libClose(struct LibraryManagerInterface *Self)
{
    struct CairoLibrary *libBase = (struct CairoLibrary *)Self->Data.LibBase;
    /* Make sure to undo what open did */


    /* Make the close count */
    ((struct Library *)libBase)->lib_OpenCnt--;

    return 0;
}

#ifdef __NEWLIB__
struct Library *NewlibBase;
struct Interface *INewlib;
#endif

struct ExecIFace *IExec;

/* Expunge the library */
STATIC APTR libExpunge(struct LibraryManagerInterface *Self)
{
    /* If your library cannot be expunged, return 0 */
    struct ExecIFace *IExec
        = (struct ExecIFace *)(*(struct ExecBase **)4)->MainInterface;
    APTR result = (APTR)0;
    struct CairoLibrary *libBase = (struct CairoLibrary *)Self->Data.LibBase;
    if (libBase->libNode.lib_OpenCnt == 0)
    {
    	result = (APTR)libBase->segList;
        /* Undo what the init code did */

        if (IUtility)
        {
            IExec->DropInterface((struct Interface *)IUtility);
            IUtility = NULL;
        }
        if (UtilityBase)
        {
            IExec->CloseLibrary(UtilityBase);
            UtilityBase = NULL;
        }

        if (IDiskfont)
        {
            IExec->DropInterface((struct Interface *)IDiskfont);
            IDiskfont = NULL;
        }
        if (DiskfontBase)
        {
            IExec->CloseLibrary(DiskfontBase);
            DiskfontBase = NULL;
        }

        if (IGraphics)
        {
            IExec->DropInterface((struct Interface *)IGraphics);
            IGraphics = NULL;
        }
        if (GraphicsBase)
        {
            IExec->CloseLibrary(GraphicsBase);
            GraphicsBase = NULL;
        }

        if (ILayers)
        {
            IExec->DropInterface((struct Interface *) ILayers);
            ILayers = NULL;
        }
        if (LayersBase)
        {
            IExec->CloseLibrary(LayersBase);
            LayersBase = NULL;
        }

#ifdef __NEWLIB__
        if (INewlib)
        {
            IExec->DropInterface(INewlib);
            INewlib = NULL;
        }
        if (NewlibBase)
        {
            IExec->CloseLibrary(NewlibBase);
            NewlibBase = NULL;
        }
#endif

        IExec->Remove((struct Node *)libBase);
        IExec->DeleteLibrary((struct Library *)libBase);
    }
    else
    {
        result = (APTR)0;
        libBase->libNode.lib_Flags |= LIBF_DELEXP;
    }
    return result;
}

/* The ROMTAG Init Function */
STATIC struct Library *libInit(struct Library *LibraryBase, APTR seglist, struct Interface *exec)
{
    void init_fast_path_cache_semaphore(void);

    struct CairoLibrary *libBase = (struct CairoLibrary *)LibraryBase;
    IExec = (struct ExecIFace *)exec;

#ifdef __NEWLIB__
    if ((NewlibBase = IExec->OpenLibrary("newlib.library", 4)))
        INewlib = IExec->GetInterface(NewlibBase, "main", 1, NULL);
    if (!INewlib)
        return NULL;
#endif


    libBase->libNode.lib_Node.ln_Type = NT_LIBRARY;
    libBase->libNode.lib_Node.ln_Pri  = 0;
    libBase->libNode.lib_Node.ln_Name = "cairo.library";
    libBase->libNode.lib_Flags        = LIBF_SUMUSED|LIBF_CHANGED;
    libBase->libNode.lib_Version      = VERSION;
    libBase->libNode.lib_Revision     = REVISION;
    libBase->libNode.lib_IdString     = VSTRING;

    libBase->segList = (BPTR)seglist;

    /* Add additional init code here if you need it. For example, to open additional
       Libraries:
       libBase->UtilityBase = IExec->OpenLibrary("utility.library", 50L);
       if (libBase->UtilityBase)
       {
           libBase->IUtility = (struct UtilityIFace *)IExec->GetInterface(ElfBase->UtilityBase, 
              "main", 1, NULL);
           if (!libBase->IUtility)
               return NULL;
       } else return NULL; */

    UtilityBase = IExec->OpenLibrary("utility.library", 50L);
    if (UtilityBase)
    {
        IUtility = (struct UtilityIFace *)IExec->GetInterface(UtilityBase, "main", 1, NULL);
        if (!IUtility)
            return NULL;
    } 
    else 
        return NULL;

    DiskfontBase = IExec->OpenLibrary("diskfont.library", 50L);
    if (DiskfontBase)
    {
        IDiskfont = (struct DiskfontIFace *)IExec->GetInterface(DiskfontBase, "main", 1, NULL);
        if (!IDiskfont)
            return NULL;
    } 
    else 
        return NULL;

    GraphicsBase = IExec->OpenLibrary("graphics.library", 50L);
    if (GraphicsBase)
    {
        IGraphics = (struct GraphicsIFace *)IExec->GetInterface(GraphicsBase, "main", 1, NULL);
        if (!IGraphics)
            return NULL;
    } 
    else 
        return NULL;

    LayersBase = IExec->OpenLibrary("layers.library", 50L);
    if (LayersBase)
    {
        ILayers = (struct LayersIFace *)IExec->GetInterface(LayersBase, "main", 1, NULL);
        if (!ILayers)
            return NULL;
    } 
    else 
        return NULL;

    return (struct Library *)libBase;
}

/* ------------------- Manager Interface ------------------------ */
/* These are generic. Replace if you need more fancy stuff */
STATIC uint32 _manager_Obtain(struct LibraryManagerInterface *Self)
{
	uint32 res;
	__asm__ __volatile__(
	"1:	lwarx	%0,0,%1\n"
	"addic	%0,%0,1\n"
	"stwcx.	%0,0,%1\n"
	"bne-	1b"
	: "=&r" (res)
	: "r" (&Self->Data.RefCount)
	: "cc", "memory");

	return res;
}

STATIC uint32 _manager_Release(struct LibraryManagerInterface *Self)
{
	uint32 res;
	__asm__ __volatile__(
	"1:	lwarx	%0,0,%1\n"
	"addic	%0,%0,-1\n"
	"stwcx.	%0,0,%1\n"
	"bne-	1b"
	: "=&r" (res)
	: "r" (&Self->Data.RefCount)
	: "cc", "memory");

	return res;
}

/* Manager interface vectors */
STATIC CONST APTR lib_manager_vectors[] =
{
	_manager_Obtain,
	_manager_Release,
	NULL,
	NULL,
	libOpen,
	libClose,
	libExpunge,
	NULL,
	(APTR)-1
};

/* "__library" interface tag list */
STATIC CONST struct TagItem lib_managerTags[] =
{
	{ MIT_Name,			(Tag)"__library"		},
	{ MIT_VectorTable,	(Tag)lib_manager_vectors},
	{ MIT_Version,		1						},
	{ TAG_DONE,			0						}
};

/* ------------------- Library Interface(s) ------------------------ */

#include "cairo_vectors.c"

/* Uncomment this line (and see below) if your library has a 68k jump table */
/* extern APTR VecTable68K[]; */

STATIC CONST struct TagItem main_v1_Tags[] =
{
	{ MIT_Name,			(Tag)"main"			},
	{ MIT_VectorTable,	(Tag)main_v1_vectors	},
	{ MIT_Version,		1					},
	{ TAG_DONE,			0					}
};

STATIC CONST CONST_APTR libInterfaces[] =
{
	lib_managerTags,
	main_v1_Tags,
	NULL
};

STATIC CONST struct TagItem libCreateTags[] =
{
	{ CLT_DataSize,		sizeof(struct CairoLibrary)	},
	{ CLT_InitFunc,		(Tag)libInit			},
	{ CLT_Interfaces,	(Tag)libInterfaces		},
	/* Uncomment the following line if you have a 68k jump table */
	/* { CLT_Vector68K, (Tag)VecTable68K }, */
	{TAG_DONE,		 0 }
};


/* ------------------- ROM Tag ------------------------ */
STATIC CONST struct Resident lib_res USED =
{
	RTC_MATCHWORD,
	(struct Resident *)&lib_res,
	(APTR)(&lib_res + 1),
	RTF_NATIVE|RTF_AUTOINIT, /* Add RTF_COLDSTART if you want to be resident */
	VERSION,
	NT_LIBRARY, /* Make this NT_DEVICE if needed */
	0, /* PRI, usually not needed unless you're resident */
	"cairo.library",
	VSTRING,
	(APTR)libCreateTags
};
