#include <cstdint>
#include "vec3.h"

namespace hm {
// Vec3 template class explicit instantiation --------------------------------------------------

// Integral types
template
class Vec3<long>;

template
class Vec3<unsigned long>;

template
class Vec3<std::int8_t>;

template
class Vec3<std::int16_t>;

template
class Vec3<std::int32_t>;

template
class Vec3<std::int64_t>;

template
class Vec3<std::uint8_t>;

template
class Vec3<std::uint16_t>;

template
class Vec3<std::uint32_t>;

template
class Vec3<std::uint64_t>;


// Floating point types
template
class Vec3<std::float_t>;

template
class Vec3<std::double_t>;

// --------------------------------------------------------------------------------------
}
