#ifndef VARILLA_H
#define VARILLA_H

#include "cone.h"

class _varilla: public _object3D
{
public:
    _varilla();
    void draw_point();
    void draw_line();
    void draw_fill();
    void draw_chess();

protected:
    _cone * varilla = nullptr;
};

#endif // VARILLA_H
