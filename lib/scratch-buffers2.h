/*
 * Copyright (c) 2017 Balabit
 * Copyright (c) 2017 Balazs Scheidler <balazs.scheidler@balabit.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef SCRATCH_BUFFERS2_H_INCLUDED
#define SCRATCH_BUFFERS2_H_INCLUDED 1

#include "syslog-ng.h"

typedef gint32 ScratchBuffersMarker;

GString *scratch_buffers2_alloc(void);
GString *scratch_buffers2_alloc_and_mark(ScratchBuffersMarker *marker);
void scratch_buffers2_mark(ScratchBuffersMarker *marker);
void scratch_buffers2_reclaim_allocations(void);
void scratch_buffers2_reclaim_marked(ScratchBuffersMarker marker);

void scratch_buffers2_thread_init(void);
void scratch_buffers2_thread_deinit(void);
void scratch_buffers2_global_init(void);
void scratch_buffers2_global_deinit(void);

#endif
