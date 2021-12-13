#ifndef CYLINDER_H
#define CYLINDER_H

#include "object3d.h"
#include "obj_revolution.h"

class _cylinder: public _object3D
{
public:
    _cylinder(float Size=1.0);
private:
    const unsigned int DIVISIONES = 52;
};


#endif // CYLINDER_H
