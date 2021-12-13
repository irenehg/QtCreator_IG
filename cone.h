#ifndef CONE_H
#define CONE_H

#include "object3d.h"
#include "obj_revolution.h"

class _cone: public _object3D
{
public:
    _cone(float Size=1.0);
private:
    const unsigned int DIVISIONES = 72;
};

#endif // CONE_H

