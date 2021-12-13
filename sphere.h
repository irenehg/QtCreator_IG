#ifndef SPHERE_H
#define SPHERE_H

#include "object3d.h"
#include "obj_revolution.h"

class _sphere: public _object3D
{
public:
    _sphere(float Size=1.0);
private:
    const unsigned int DIVISIONES = 72;
};

#endif // SPHERE_H
