#pragma once

#include <cstdint>

namespace NWNXLib {

namespace API {

// Forward class declarations (defined in the source file)
struct CExoLinkedListInternal;

struct CExoLinkedListTemplatedCExoKeyTable
{
    CExoLinkedListInternal* m_pcExoLinkedListInternal;
};

}

}
