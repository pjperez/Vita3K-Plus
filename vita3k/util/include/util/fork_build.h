// Stand-in for Vita3K-Plus's uncommitted fork_build.h (logging.cpp's build
// line): a local malisx2 test build, not a Vita3K-Plus release.
#pragma once

#define FORK_BUILD_SEQ "local-malisx2"
#define FORK_BUILD_CHANGES "local malisx2 test build (vkCmdSetIndexRangeMALISX2, low-memory dormant budget, dedicated Double Buffer copies, stall command buffer reuse, MEMBREAK log, vcount spin wait, PVRTC as BC3, TEXSTAT log, banded PVRTC decode/BC3 encode, protect-not-hash compressed textures, idle-only trim while presenting)"
