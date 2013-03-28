#ifndef VECTOR3_H
#define VECTOR3_H

#include <iostream>

class Vector3
{

public:

    //constructors
    Vector3 (double=0.0, double=0.0, double=0.0);
    Vector3 (const Vector3&);

    // overloaded operators
    Vector3 operator+ (const Vector3&);
    int operator* (const Vector3&);
    Vector3& operator= (const Vector3&);

    // methods
    double getLength() const;
    double getX() const;
    double getY() const;
    double getZ() const;

private:
    // coordinates
    double m_x, m_y, m_z;
};

#endif // VECTOR3_H
