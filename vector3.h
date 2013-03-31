#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>

class Vector3
{

    friend std::ostream& operator<< (std::ostream&, const Vector3&);

public:

    Vector3 (double=0.0, double=0.0, double=0.0);
    Vector3 (const Vector3&);

    Vector3 operator+ (const Vector3&);
    int operator* (const Vector3&);
    Vector3& operator= (const Vector3&);

    // make the vector unit(it's length = 1)
    void normalize();

    double getLength() const;
    double getX() const;
    double getY() const;
    double getZ() const;

private:
    // coordinates
    double m_x, m_y, m_z;
};

#endif // VECTOR3_H
