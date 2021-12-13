#ifndef OBJ_REVOLUTION_H
#define OBJ_REVOLUTION_H


#include "object3d.h"
#include <cmath> //para usar M_PI


class obj_revolution:public _object3D
{
public:
    obj_revolution();
    obj_revolution(vector<_vertex3f> &coords, const unsigned int divisiones);
    bool esta_eje_y(_vertex3f v);
    bool no_repetido(int posicion, const vector<int> ejes);
};

#endif // OBJ_REVOLUTION_H
