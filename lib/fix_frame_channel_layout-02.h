#include <libavutil/frame.h>
#include <libavutil/channel_layout.h>
#include "compat.h"

INLINE void fix_frame_channel_layout(AVFrame *frame) {
	if (frame->channel_layout) {
		if (!frame->channels)
			frame->channels = av_frame_get_channels(frame);
		return;
	}
	frame->channel_layout = av_get_default_channel_layout(frame->channels);
}
