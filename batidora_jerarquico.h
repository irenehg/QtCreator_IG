#ifndef BATIDORA_JERARQUICO_H
#define BATIDORA_JERARQUICO_H

#include "base_batidora.h"
#include "varilla.h"
#include "sujeccion.h"

class _batidora_jerarquico: public _object3D
{
public:
    _batidora_jerarquico();
    void draw_point();
    void draw_line();
    void draw_fill();
    void draw_chess();

    void rotar_primer_grado(float valor=0);
    void rotar_segundo_grado(float valor=0);
    void rotar_tercer_grado(float valor=0);

protected:
    _base_batidora * base = nullptr;
    _varilla * varilla = nullptr;
    _sujeccion * barra = nullptr;
    float alpha, beta, gamma;

    //dimensiones base batidora
    float base_x, base_y, base_z;

    //dimensiones palo vertical batidora
    float vertical_x, vertical_y, vertical_z;
};

#endif // BATIDORA_JERARQUICO_H
