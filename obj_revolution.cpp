#include "obj_revolution.h"

obj_revolution::obj_revolution()
{

}

obj_revolution::obj_revolution(vector<_vertex3f> &coords, const unsigned int divisiones){
    double angulo, radio;
    vector<_vertex3f> aux;
    vector<int> ejes;
    aux.resize(1);
    ejes.resize(1);


    //Las coordenadas que van a cambiar son las que no esten en el eje y

    for(unsigned int i = 0; i < divisiones; i++){
        angulo = (i*2*M_PI) / divisiones;
        for(unsigned int j = 0; j < coords.size(); j++ ){     //De los puntos que generan una cara, vemos cuales están en el eje y y cuáles nop
            if(esta_eje_y(coords[j]) == false){
                //calculamos radio
                radio = sqrt( (coords[j]._0 * coords[j]._0) + (coords[j]._1 * coords[j]._1) + (coords[j]._2 * coords[j]._2) );
                aux[0]._0 = ( coords[j]._0 * cos(angulo) ) + (coords[j]._2* sin(angulo));
                aux[0]._1 = coords[j]._1;
                aux[0]._2 = (- coords[j]._0 * sin(angulo) ) + (coords[j]._2* cos(angulo));

                Vertices.push_back(aux[0]);
            }
            else{
                if(no_repetido(j, ejes))
                    ejes.push_back(j);
            }
        }
    }



    //Metemos los puntos que estan en el eje Y los metemos al final de Vertices
    for(unsigned int j = 0; j < ejes.size(); j++ )
        Vertices.push_back(coords[ejes[j]]);



//    for(unsigned int i = 0; i < Vertices.size(); i++){
//        cout << Vertices[i]._0 << " " << Vertices[i]._1 << "  " << Vertices[i]._2 <<endl;
//    }


    //Vamos ahora con los triangulos
    vector<_vertex3ui> taux(1);
    int filas = coords.size()-ejes.size();
    int num_vertices = filas * divisiones;


    for (int i = 0; i < num_vertices -1; i++)  //-1 porque ya se cierra la ultima cara con los primeros vertices
    {
        //Salto a siguiente columna si he llegado arriba, util en esfera
        if (i % filas == (filas - 1))
            i++;

        // triangulo par
        taux[0]._0 = i;
        taux[0]._1 = (i + filas) % num_vertices;
        taux[0]._2 = i + 1;
        Triangles.push_back(taux[0]);

        // triangulo impar
        taux[0]._0 = (i + filas) % num_vertices;
        taux[0]._1 = (i + filas + 1) % num_vertices;
        taux[0]._2 = i + 1;
        Triangles.push_back(taux[0]);
    }

//    //La tapa de arriba
//    for (unsigned int i = 0; i < divisiones; i++){
//        taux[0]._0 = i * filas;
//        taux[0]._1 = (i * filas + filas) % num_vertices;
//        taux[0]._2 = num_vertices; //primer punto en el eje corresponde al del centro de la tapa inferior. Su posicion es la penultima del vector de Vertices, lo que es lo mismo el numero de vertices centrales ya insertados
//        Triangles.push_back(taux[0]);
//    }


    for (unsigned int i = 0; i < divisiones; i++){
        taux[0]._0 = i * filas +1;
        taux[0]._1 = (i * filas + filas + 1) % num_vertices;
        taux[0]._2 = num_vertices + 1; //segundo vertice en el eje, esta en la ultima posicion de vertices por eso le sumamos 1
        Triangles.push_back(taux[0]);
    }

//    //La tapa de arriba
//    for (unsigned int i = 0; i < divisiones; i++){
//        taux[0]._0 = i * filas;
//        taux[0]._1 = ((i+1) * filas) % num_vertices;
//        taux[0]._2 = num_vertices; //primer punto en el eje corresponde al del centro de la tapa inferior. Su posicion es la penultima del vector de Vertices, lo que es lo mismo el numero de vertices centrales ya insertados
//        Triangles.push_back(taux[0]);
//    }


    //La tapa de abajo esfera
    for (unsigned int i = 0; i < divisiones; i++){
        taux[0]._0 = (filas -1) +i * filas;
        taux[0]._1 = ((filas - 1) + (i+1) * filas) % num_vertices;
        taux[0]._2 = num_vertices -1; //segundo vertice en el eje, esta en la ultima posicion de vertices por eso le sumamos 1
        Triangles.push_back(taux[0]);
    }

}


bool obj_revolution::esta_eje_y(_vertex3f v){
    if(v._0 == 0 )
        return true;
    else
        return false;
}

bool obj_revolution::no_repetido(int posicion, const vector<int> ejes){
    for(unsigned int i = 0; i < ejes.size(); i++)
        if(ejes[i] == posicion)
            return false;
    return true;
}
