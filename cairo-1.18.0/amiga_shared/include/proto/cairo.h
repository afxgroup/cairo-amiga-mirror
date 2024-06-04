#ifndef PROTO_CAIRO_H
#define PROTO_CAIRO_H

/*
**	$Id$
**
**	Prototype/inline/pragma header file combo
**
**	Copyright (c) 2010 Hyperion Entertainment CVBA.
**	All Rights Reserved.
*/

#ifndef CAIRO_H
#include <libraries/cairo.h>
#endif

/****************************************************************************/

#ifndef __NOLIBBASE__
 #ifndef __USE_BASETYPE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::Library * CairoBase;
  #else
   extern struct Library * CairoBase;
  #endif
 #else
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::CairoLibrary * CairoBase;
  #else
   extern struct CairoLibrary * CairoBase;
  #endif
 #endif /* __USE_BASETYPE__ */
#endif /* __NOLIBBASE__ */

/****************************************************************************/

#ifdef __amigaos4__
 #include <interfaces/cairo.h>
 #ifdef __USE_INLINE__
  #include <inline4/cairo.h>
 #endif /* __USE_INLINE__ */
 #ifndef CLIB_CAIRO_PROTOS_H
  #define CLIB_CAIRO_PROTOS_H 1
 #endif /* CLIB_CAIRO_PROTOS_H */
 #ifndef __NOGLOBALIFACE__
  #if defined(__cplusplus) && defined(__USE_AMIGAOS_NAMESPACE__)
   extern struct AmigaOS::CairoIFace * ICairo;
  #else
   extern struct CairoIFace * ICairo;
  #endif
 #endif /* __NOGLOBALIFACE__ */
#else /* __amigaos4__ */
 #ifndef CLIB_CAIRO_PROTOS_H
  #include <clib/cairo_protos.h>
 #endif /* CLIB_CAIRO_PROTOS_H */
 #if defined(__GNUC__)
  #ifndef __PPC__
   #include <inline/cairo.h>
  #else /* __PPC__ */
   #include <ppcinline/cairo.h>
  #endif /* __PPC__ */
 #elif defined(__VBCC__)
  #ifndef __PPC__
   #include <inline/cairo_protos.h>
  #endif /* __PPC__ */
 #else /* __GNUC__ */
  #include <pragmas/cairo_pragmas.h>
 #endif /* __GNUC__ */
#endif /* __amigaos4__ */

/****************************************************************************/

#endif /* PROTO_CAIRO_H */
