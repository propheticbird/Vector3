#include "vector3.h"

#include <cmath>
#include <iostream>

Vector3::Vector3 (double x, double y, double z)
    : m_x(x)
    , m_y(y)
    , m_z(z)
{
}

Vector3::Vector3(const Vector3& v)
    : m_x(v.m_x)
    , m_y(v.m_y)
    , m_z(v.m_z)
{
}

Vector3& Vector3::operator = (const Vector3& rhs)
{
    // check for self-assignment
    if(this != &rhs)
    {
        m_x = rhs.m_x;
        m_y = rhs.m_y;
        m_z = rhs.m_z;
    }

    return *this;
}

double Vector3::getLength() const
{
    // length = (x^2 + y^2 + z^2) ^ 1/2
    double sum = pow(m_x, 2) + pow(m_y, 2) + pow(m_z, 2);
    return pow( sum, 0.5 );
}

void Vector3::normalize()
{
    double current_length = this->getLength();
    m_x /= current_length;
    m_y /= current_length;
    m_z /= current_length;
}

Vector3 Vector3::operator+ (const Vector3& rhs)
{ 
    // a + b = c(ax + bx, ay + by, az + bz)
    return Vector3(m_x + rhs.m_x, m_y + rhs.m_y, m_z + rhs.m_z);
}

int Vector3::operator* (const Vector3& rhs)
{
    // a * b = ax*bx + ay*by + az*bz
    return (m_x * rhs.m_x) + (m_y * rhs.m_y) + (m_z * rhs.m_z);
}

double Vector3::getX() const
{
    return m_x;
}

double Vector3::getY() const
{
    return m_y;
}

double Vector3::getZ() const
{
    return m_z;
}

std::ostream& operator<< (std::ostream& out, const Vector3& rhs)
{
    out << "X: " << rhs.m_x << " " << "Y: " << rhs.m_y << " " << "Z: " << rhs.m_z;
    return out;
}
