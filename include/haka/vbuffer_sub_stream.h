/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef _HAKA_VBUFFER_SUB_STREAM_H
#define _HAKA_VBUFFER_SUB_STREAM_H

#include <haka/vbuffer_stream.h>


struct vbuffer_sub_stream {
	struct vbuffer_stream    stream;
};

bool vbuffer_sub_stream_init(struct vbuffer_sub_stream *stream);
bool vbuffer_sub_stream_push(struct vbuffer_sub_stream *stream, struct vbuffer_sub *buffer, struct vbuffer_iterator *current);
bool vbuffer_sub_stream_pop(struct vbuffer_sub_stream *stream, struct vbuffer_sub *sub);

#endif /* _HAKA_VBUFFER_SUB_STREAM_H */
