#include "sujeccion.h"

using namespace _colors_ne;

_sujeccion::_sujeccion()
{
    barra = new _cylinder();
}

void _sujeccion::draw_point() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(0,y/2,0);
        glScalef(x,y,z);
        barra->draw_point();
    glPopMatrix();
}

void _sujeccion::draw_line()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(0,y/2,0);
        glScalef(x,y,z);
        barra->draw_line();
    glPopMatrix();
}

void _sujeccion::draw_fill()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(0,y/2,0);
        glScalef(x,y,z);
        barra->draw_fill();
    glPopMatrix();
}


void _sujeccion::draw_chess()
{
    glMatrixMode(GL_MODELVIEW); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(0,y/2,0);
        glScalef(x,y,z);
        barra->draw_chess();
    glPopMatrix();
}


