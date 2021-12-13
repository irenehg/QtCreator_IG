#include "varilla.h"

using namespace _colors_ne;


_varilla::_varilla()
{
    varilla = new _cone();
}


void _varilla::draw_point() {
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[6]._0, COLORS[6]._1, COLORS[6]._2);
        glTranslatef(0,0.35,0);
        glRotated(180,1,0,0);
        glScalef(0.3,0.7,0.3);
        varilla->draw_point();
    glPopMatrix();
}

void _varilla::draw_line()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[8]._0, COLORS[8]._1, COLORS[8]._2);
        glTranslatef(0,0.35,0);
        glRotated(180,1,0,0);
        glScalef(0.3,0.7,0.3);
        varilla->draw_line();
    glPopMatrix();
}

void _varilla::draw_fill()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[8]._0, COLORS[8]._1, COLORS[8]._2);
        glTranslatef(0,0.35,0);
        glRotated(180,1,0,0);
        glScalef(0.3,0.7,0.3);
        varilla->draw_fill();
    glPopMatrix();
}


void _varilla::draw_chess()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glColor3f(COLORS[8]._0, COLORS[8]._1, COLORS[8]._2);
        glTranslatef(0,0.35,0);
        glRotated(180,1,0,0);
        glScalef(0.3,0.7,0.3);
        varilla->draw_chess();
    glPopMatrix();
}



