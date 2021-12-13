#ifndef BASE_BATIDORA_H
#define BASE_BATIDORA_H

#include "cube.h"

class _base_batidora: public _object3D
{
public:
    _base_batidora();
    void draw_point();
    void draw_line();
    void draw_fill();
    void draw_chess();

protected:
    _cube * base = nullptr;
};
#endif // BASE_BATIDORA_H
