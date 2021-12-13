#ifndef SUJECCION_H
#define SUJECCION_H

#include "cylinder.h"

class _sujeccion: public _object3D
{
public:
    float x = 0.5;
    float y = 1.0;
    float z = x;
    _sujeccion();
    void draw_point();
    void draw_line();
    void draw_fill();
    void draw_chess();

protected:
    _cylinder * barra = nullptr;

};

#endif // SUJECCION_H
