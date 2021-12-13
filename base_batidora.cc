#include "base_batidora.h"

using namespace _colors_ne;


_base_batidora::_base_batidora(){
    base = new _cube();
}


void _base_batidora::draw_point() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(-0.5,0.5,-0.5);
        base->draw_point();
    glPopMatrix();
}

void _base_batidora::draw_line()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[0]._0, COLORS[0]._1, COLORS[0]._2);
        glTranslatef(-0.5,0.5,-0.5);
        base->draw_line();
    glPopMatrix();
}

void _base_batidora::draw_fill()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[0]._0, COLORS[0]._1, COLORS[0]._2);
        glTranslatef(-0.5,0.5,-0.5);
        base->draw_fill();
    glPopMatrix();
}


void _base_batidora::draw_chess()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[0]._0, COLORS[0]._1, COLORS[0]._2);
        glTranslatef(-0.5,0.5,-0.5);
        base->draw_chess();
    glPopMatrix();
}

