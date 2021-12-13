#include "cone.h"

_cone::_cone(float Size)
{
    vector<_vertex3f> perfil_original;
    perfil_original.resize(3);
    perfil_original[0] = _vertex3f(0.0, -Size/2, 0);
    perfil_original[1] = _vertex3f(Size/2, -Size/2, 0);
    perfil_original[2] = _vertex3f(0, Size/2, 0);

    obj_revolution RO_cone(perfil_original, DIVISIONES);

    Vertices = RO_cone.Vertices;
    Triangles = RO_cone.Triangles;


//        for(unsigned int i = 0; i < Vertices.size(); i++){
//            cout << Vertices[i]._0 << " " << Vertices[i]._1 << "  " << Vertices[i]._2 <<endl;
//        }
}


