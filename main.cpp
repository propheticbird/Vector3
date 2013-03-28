#include <iostream>

#include "vector3.h"

using namespace std;

int main()
{
    Vector3 v(2, 2, 2);
    cout << v.getLength() << endl;

    Vector3 v1(3, 3, 3);
    cout << v * v1 << endl;

    Vector3 v2;
    v2 = v1 + v;
    cout << v2.getX() << v2.getY() << v2.getZ() << endl;

    return 0;
}

