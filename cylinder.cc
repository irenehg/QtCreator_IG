#include "cylinder.h"

_cylinder::_cylinder(float Size)
{
    vector<_vertex3f> perfil_original;
    perfil_original.resize(4);
//    perfil_original[0] = _vertex3f(0.0, -Size/2, 0);
//    perfil_original[1] = _vertex3f(Size/2, -Size/2, 0);
//    perfil_original[2] = _vertex3f(Size/2, Size/2, 0);
//    perfil_original[3] = _vertex3f(0.0, Size/2, 0.0);

    perfil_original[3] = _vertex3f(0.0, -Size/2, 0);
    perfil_original[2] = _vertex3f(Size/2, -Size/2, 0);
    perfil_original[1] = _vertex3f(Size/2, Size/2, 0);
    perfil_original[0] = _vertex3f(0.0, Size/2, 0.0);

    obj_revolution RO_cylinder(perfil_original, DIVISIONES);

    Vertices = RO_cylinder.Vertices;
    Triangles = RO_cylinder.Triangles;
}
