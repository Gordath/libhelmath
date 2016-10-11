#ifndef HELMATH_UTILS_H
#define HELMATH_UTILS_H

namespace hm {

constexpr float m_pi = 3.14159265359;

constexpr double deg_to_rad(double deg)
{
    return deg * m_pi / 180.0;
}

constexpr double rad_to_deg(double rad)
{
    return rad * 180.0 / m_pi;
}

constexpr float deg_to_radf(float deg)
{
    return deg * m_pi / 180.0f;
}

constexpr float rad_to_degf(float rad)
{
    return rad * 180.0f / m_pi;
}

}

#endif //HELMATH_UTILS_H
