/* GDK - The GIMP Drawing Kit
 * Copyright (C) 2020 Red Hat
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __GDK_TOPLEVEL_SIZE_PRIVATE_H__
#define __GDK_TOPLEVEL_SIZE_PRIVATE_H__

#include "gdktoplevelsize.h"

struct _GdkToplevelSize
{
  int bounds_width;
  int bounds_height;

  int width;
  int height;
  int min_width;
  int min_height;
};

void gdk_toplevel_size_init (GdkToplevelSize *size,
                             int              bounds_width,
                             int              bounds_height);

#endif /* __GDK_TOPLEVEL_SIZE_PRIVATE_H__ */