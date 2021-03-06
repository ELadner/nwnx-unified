#pragma once

#include <cstdint>

#include "unknown_CARD8.hpp"

namespace NWNXLib {

namespace API {

struct xQueryExtensionReply
{
    CARD8 type;
    CARD8 pad1;
    uint16_t sequenceNumber;
    uint32_t length;
    CARD8 present;
    uint8_t major_opcode;
    uint8_t first_event;
    uint8_t first_error;
    uint32_t pad3;
    uint32_t pad4;
    uint32_t pad5;
    uint32_t pad6;
    uint32_t pad7;
};

}

}
