#include "batidora_jerarquico.h"

_batidora_jerarquico::_batidora_jerarquico()
{
    base = new _base_batidora();
    varilla = new _varilla();
    barra = new _sujeccion();

    base_x = 4.0;
    base_y = 0.5;
    base_z = 2.0;

    vertical_x = base_y;
    vertical_y = base_x;
    vertical_z = 1.0;

}

void _batidora_jerarquico::draw_point(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glTranslatef(0,0.5,0);
        glScalef(1.0,1.0,2.0);
        glRotatef(-90,0,0,1);
        base->draw_point();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(3.5,0.0,0.5);
        base->draw_point();
    glPopMatrix();

    glPushMatrix(); //les afecta R1
        glRotatef(-alpha,0,0,1);
        glTranslatef(0.8,4,0.5);
        glPushMatrix();
            glScalef(0.8,1.0,1.0);
            glRotatef(-90,0,0,1);
            base->draw_point();
        glPopMatrix();
        glTranslatef(0.5,-1.25,0.5);
        barra->draw_point();
        glPushMatrix(); //les afecta T1
            glPushMatrix();
                glTranslatef(0,-0.5,0);
                glScalef(0.5,1,0.5);
                barra->draw_point();
            glPopMatrix();
            glPushMatrix(); //les afecta R2
                glTranslatef(-0.5,-0.5,0);
                glRotatef(-90,0,0,1);
                glScalef(0.5,1,0.5);
                barra->draw_point();
            glPopMatrix();
            glTranslatef(-0.25,-1.25,0);
            varilla->draw_point();
            glTranslatef(0.55,0,0);
            varilla->draw_point();
        glPopMatrix();
    glPopMatrix();
}

void _batidora_jerarquico::draw_line(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glScalef(base_x,base_y,base_z);
        base->draw_line();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-(base_x-vertical_x),base_y,-vertical_z/2);
        glScalef(vertical_x,vertical_y,vertical_z);
        base->draw_line();
    glPopMatrix();

    glPushMatrix(); //les afecta R1
        glTranslatef(-base_x,vertical_y,-vertical_z/2);
        glRotatef(-alpha, 0, 0, 1);
        glPushMatrix();
            glTranslatef(base_x,0.0,0.0);
            glScalef(base_x,vertical_x,vertical_z);
            base->draw_line();
        glPopMatrix();
        glTranslatef(base_x,-base_y*2,-base_z/2);
        barra->draw_line();

//      glPushMatrix(); //les afecta T1
//            glPushMatrix();
//                glTranslatef(0,-0.5,0);
//                glScalef(0.5,1,0.5);
//                barra->draw_line();
//            glPopMatrix();
//            glPushMatrix(); //les afecta R2
//                glTranslatef(-0.5,-0.5,0);
//                glRotatef(-90,0,0,1);
//                glScalef(0.5,1,0.5);
//                barra->draw_line();
//            glPopMatrix();
//            glTranslatef(-0.25,-1.25,0);
//            varilla->draw_line();
//            glTranslatef(0.55,0,0);
//            varilla->draw_line();
//        glPopMatrix();
    glPopMatrix();

}

void _batidora_jerarquico::draw_fill(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glTranslatef(0,0.5,0);
        glScalef(1.0,1.0,2.0);
        glRotatef(-90,0,0,1);
        base->draw_fill();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(3.5,0.0,0.5);
        base->draw_fill();
    glPopMatrix();

    glPushMatrix(); //les afecta R1
        glRotatef(-alpha,0,0,1);

        glTranslatef(0.8,4,0.5);
        glPushMatrix();
            glScalef(0.8,1.0,1.0);
            glRotatef(-90,0,0,1);
            base->draw_fill();
        glPopMatrix();
        glTranslatef(0.5,-1.25,0.5);
        barra->draw_fill();
        glPushMatrix(); //les afecta T1
            glPushMatrix();
                glTranslatef(0,-0.5,0);
                glScalef(0.5,1,0.5);
                barra->draw_fill();
            glPopMatrix();
            glPushMatrix(); //les afecta R2
                glTranslatef(-0.5,-0.5,0);
                glRotatef(-90,0,0,1);
                glScalef(0.5,1,0.5);
                barra->draw_fill();
            glPopMatrix();
            glTranslatef(-0.25,-1.25,0);
            varilla->draw_fill();
            glTranslatef(0.55,0,0);
            varilla->draw_fill();
        glPopMatrix();
    glPopMatrix();
}

void _batidora_jerarquico::draw_chess(){
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glTranslatef(0,0.5,0);
        glScalef(1.0,1.0,2.0);
        glRotatef(-90,0,0,1);
        base->draw_chess();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(3.5,0.0,0.5);
        base->draw_chess();
    glPopMatrix();

    glPushMatrix(); //les afecta R1
        glRotatef(-alpha,0,0,1);
        glTranslatef(0.8,4,0.5);
        glPushMatrix();
            glScalef(0.8,1.0,1.0);
            glRotatef(-90,0,0,1);
            base->draw_chess();
        glPopMatrix();
        glTranslatef(0.5,-1.25,0.5);
        barra->draw_chess();
        glPushMatrix(); //les afecta T1
            glPushMatrix();
                glTranslatef(0,-0.5,0);
                glScalef(0.5,1,0.5);
                barra->draw_chess();
            glPopMatrix();
            glPushMatrix(); //les afecta R2
                glTranslatef(-0.5,-0.5,0);
                glRotatef(-90,0,0,1);
                glScalef(0.5,1,0.5);
                barra->draw_chess();
            glPopMatrix();
            glTranslatef(-0.25,-1.25,0);
            varilla->draw_chess();
            glTranslatef(0.55,0,0);
            varilla->draw_chess();
        glPopMatrix();
    glPopMatrix();

}


void _batidora_jerarquico::rotar_primer_grado(float valor){
   alpha = valor;
}
void rotar_segundo_grado(float valor=0);
void rotar_tercer_grado(float valor=0);

