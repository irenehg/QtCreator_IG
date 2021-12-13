#ifndef PLY_H
#define PLY_H

#include "object3d.h"
#include "file_ply_stl.h"
#include "obj_revolution.h"


class _ply:public _object3D
{
private:
    vector<float> coords;
    vector<unsigned int> posiciones;

public:
    _ply();
    void crear(vector<float> &coords, vector<unsigned int> &posiciones);
};

#endif // PLY_H
