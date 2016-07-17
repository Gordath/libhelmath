#include "vector.h"
#include <cstdint>

namespace hm {
// Vec2 template class explicit instantiation --------------------------------------------------
// Integral types
template
class Vec2<long>;

template
class Vec2<std::int8_t>;

template
class Vec2<std::int16_t>;

template
class Vec2<std::int32_t>;

template
class Vec2<std::int64_t>;

template
class Vec2<std::uint8_t>;

template
class Vec2<std::uint16_t>;

template
class Vec2<std::uint32_t>;

template
class Vec2<std::uint64_t>;


// Floating point types
template
class Vec2<std::float_t>;

template
class Vec2<std::double_t>;
// --------------------------------------------------------------------------------------

// Vec3 template class explicit instantiation --------------------------------------------------
// Integral types
template
class Vec3<long>;

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

// Vec4 template class explicit instantiation --------------------------------------------------
// Integral types
template
class Vec4<long>;

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
