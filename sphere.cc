#include "sphere.h"
#include <math.h>
#include <iostream>

using namespace std;

_sphere::_sphere(float Size)
{
    const int PUNTOS = 20;
    vector<_vertex3f> perfil_original;
    float angulo, x, y;

    float radio = Size/2;

    perfil_original.push_back(_vertex3f(0.0, -radio, 0.0) );


    //GEOMETRIA PURA Y DURA, MIRAR Y ESBOZAR PORQUE SE TE VA A OLLVIDAR EL RAZONAMIENTO
    //pi porque solo es un perfil, 180grados, lo mismo por eso luego en el obj revolucion se usa 2pi porque ya es 360 grados girando
   for(int i = 1;i <= PUNTOS; i++){
        angulo = (i*M_PI)/PUNTOS;
        x = ((perfil_original[0]._0) * cos(angulo) - (perfil_original[0]._1) * sin(angulo));
        y = ((perfil_original[0]._0)*sin(angulo) + (perfil_original[0].y)*cos(angulo) );
        perfil_original.push_back(_vertex3f(x,y,0.0));

    }

    perfil_original[perfil_original.size() -1] = _vertex3f(0.0,Size/2, 0.0);



//    for(int i = 0; i < PUNTOS; i++){
//        cout << perfil_original[i]._0 << "\t" << perfil_original[i]._1 << "\t"<< perfil_original[i]._2 << endl;
//    }


    obj_revolution RO_sphere(perfil_original, DIVISIONES);

    Vertices = RO_sphere.Vertices;
    Triangles = RO_sphere.Triangles;
}
