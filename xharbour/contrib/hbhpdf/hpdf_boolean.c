/*
 * $Id: crc32.h,v 1.1 2008/04/14 06:06:22 andijahja Exp $
 */

/*
 * << Haru Free PDF Library 2.0.0 >> -- hpdf_boolean.h
 *
 * Copyright (c) 1999-2006 Takeshi Kanno <takeshi_kanno@est.hi-ho.ne.jp>
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.
 * It is provided "as is" without express or implied warranty.
 *
 */

#include "hpdf_utils.h"
#include "hpdf_objects.h"

HPDF_Boolean
HPDF_Boolean_New  (HPDF_MMgr  mmgr,
                   HPDF_BOOL  value)
{
    HPDF_Boolean obj = (HPDF_Boolean)HPDF_GetMem (mmgr, sizeof(HPDF_Boolean_Rec));

    if (obj) {
        HPDF_MemSet(&obj->header, 0, sizeof(HPDF_Obj_Header));
        obj->header.obj_class = HPDF_OCLASS_BOOLEAN;
        obj->value = value;
    }

    return obj;
}


HPDF_STATUS
HPDF_Boolean_Write  (HPDF_Boolean  obj,
                     HPDF_Stream   stream)
{
    HPDF_STATUS ret;

    if (obj->value)
        ret = HPDF_Stream_WriteStr (stream, "true");
    else
        ret = HPDF_Stream_WriteStr (stream, "false");

    return ret;
}
