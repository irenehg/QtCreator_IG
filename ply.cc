#include "ply.h"
#include <iostream>
using namespace std;

_ply::_ply()
{
    _file_ply fichero;

    fichero.open("/home/irenehuertas/Escritorio/IG/ply_models/ant.ply");
    fichero.read(coords,posiciones);
    crear(coords,posiciones);
    fichero.close();

}





void _ply::crear(vector<float> &coords, vector<unsigned int> &posiciones){
    //El vector coords contiene todas las coordenadas del dibujo
    //Como son 3 dimensiones para obtener cuántos vértices tenemos dividimos por 3 el tamaño de dicho vector
    if(posiciones.size() > 0){
        Vertices.resize(coords.size()/3);

        unsigned int p_aux=0;
        for(unsigned int i=0; i < Vertices.size(); i++){
            Vertices[i]=_vertex3f(coords[p_aux],coords[p_aux+1],coords[p_aux+2]);
            p_aux+=3;
        }

        Triangles.resize(posiciones.size()/3);
        p_aux=0;

        for(unsigned int i=0; i < Triangles.size(); i++){
            Triangles[i]=_vertex3ui(posiciones[p_aux],posiciones[p_aux+1],posiciones[p_aux+2]);
            p_aux+=3;
        }
    }
    else{
        const int DIVISIONES = 72;
        vector<_vertex3f> perfil_original;
        for(unsigned int i = 0; i < coords.size(); i+=3){
            perfil_original.push_back(_vertex3f(coords[i], coords[i+1], coords[i+2]));
        }
        obj_revolution RO_ply(perfil_original, DIVISIONES);
        Vertices = RO_ply.Vertices;
        Triangles = RO_ply.Triangles;
    }

}


