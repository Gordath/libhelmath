#include <cstdint>
#include "vec4.h"

namespace hm {
// Vec4 template class explicit instantiation --------------------------------------------------

// Integral types
template
class Vec4<long>;

template
class Vec4<unsigned long>;

template
class Vec4<std::int8_t>;

template
class Vec4<std::int16_t>;

template
class Vec4<std::int32_t>;

template
class Vec4<std::int64_t>;

template
class Vec4<std::uint8_t>;

template
class Vec4<std::uint16_t>;

template
class Vec4<std::uint32_t>;

template
class Vec4<std::uint64_t>;


// Floating point types
template
class Vec4<std::float_t>;

template
class Vec4<std::double_t>;

// --------------------------------------------------------------------------------------
}