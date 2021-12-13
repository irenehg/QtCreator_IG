/*! \file
 * Copyright Domingo Martín Perandres
 * email: dmartin@ugr.es
 * web: http://calipso.ugr.es/dmartin
 * 2003-2019
 * GPL 3
 */


#include "object3d.h"

using namespace _colors_ne;


/*****************************************************************************//**
 *
 *
 *
 *****************************************************************************/

void _object3D::draw_line()
{
    glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); //  select a polygon rasterization mode. Vamos a usarlo para quitar el relleno
    //primer parametro para que afecte a todas las caras
    //segundo parametro es lo que queremos que se pinte, en este caso solo la lineas. El valor por defecto es GL_FILL
    glBegin(GL_TRIANGLES);
      for (unsigned int i=0;i<Triangles.size()-1;i++){        //Quitamos el ultimo triangulo porque pinta aristas que ya tenemos dibujadas con los otros previos. Se podrian quitar mas con el cubo pero es complicado
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);  // pintamos los tres vertices de cada triangulo, por eso el _0,_1,_2
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
      }
    glEnd();
}


/*****************************************************************************//**
 *
 *
 *
 *****************************************************************************/

void _object3D::draw_fill()
{
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
    glBegin(GL_TRIANGLES);
      for (unsigned int i=0;i<Triangles.size();i++){
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
      }
    glEnd();
}


/*****************************************************************************//**
 *
 *
 *
 *****************************************************************************/

void _object3D::draw_chess()
{
    glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
    glBegin(GL_TRIANGLES);
      for (unsigned int i=0;i<Triangles.size();i++){
        if(i%2==0)
            glColor3f(0,0.5,0);
        else
            glColor3f(0.5,0,0);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._0]);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._1]);
        glVertex3fv((GLfloat *) &Vertices[Triangles[i]._2]);
      }
    glEnd();
}



