#include <iostream>
#include<GL/gl.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <bits/stdc++.h>
#include<GL/gl.h>
#include<windows.h>
#include<MMSystem.h>
#include<math.h>

using namespace std;

const int width = 1000;
const int height = 1000;

GLfloat eyeX = -10;
GLfloat eyeY = -2;
GLfloat eyeZ = 10;

GLfloat lookX = 0;
GLfloat lookY = 0;
GLfloat lookZ = 0;

static GLfloat v_cube[8][3] =
{
    {0,0,0},
    {0,0,1},
    {0,1,0},
    {0,1,1},

    {1,0,0},
    {1,0,1},
    {1,1,0},
    {1,1,1}
};

static GLubyte c_ind[6][4] =
{
    {0,2,6,4},
    {1,5,7,3},
    {0,4,5,1},
    {2,3,7,6},
    {0,1,3,2},
    {4,6,7,5}
};

static void getNormal3p(GLfloat x1, GLfloat y1, GLfloat z1, GLfloat x2, GLfloat y2, GLfloat z2, GLfloat x3, GLfloat y3, GLfloat z3)
{
    GLfloat Ux, Uy, Uz, Vx, Vy, Vz, Nx, Ny, Nz;

    Ux = x2-x1;
    Uy = y2-y1;
    Uz = z2-z1;

    Vx = x3-x1;
    Vy = y3-y1;
    Vz = z3-z1;

    Nx = Uy*Vz - Uz*Vy;
    Ny = Uz*Vx - Ux*Vz;
    Nz = Ux*Vy - Uy*Vx;

    glNormal3f(Nx,Ny,Nz);
}

void cube(float r,float g,float b)
{

    glBegin(GL_QUADS);
    glColor3d(r,g,b);
    for (GLint i = 0; i <6; i++)
    {
        getNormal3p(v_cube[c_ind[i][0]][0], v_cube[c_ind[i][0]][1], v_cube[c_ind[i][0]][2],
                    v_cube[c_ind[i][1]][0], v_cube[c_ind[i][1]][1], v_cube[c_ind[i][1]][2],
                    v_cube[c_ind[i][2]][0], v_cube[c_ind[i][2]][1], v_cube[c_ind[i][2]][2]);

        for (GLint j=0; j<4; j++)
        {
            glVertex3fv(&v_cube[c_ind[i][j]][0]);
        }
    }
    glEnd();
}


void trainSound (){
        PlaySound("C:\\Users\\Dell\\Downloads\\GLUT\\FinalProject\\train_sound.wav",NULL, SND_ASYNC | SND_FILENAME | SND_LOOP);
}



GLfloat positionTrain = 15.0f;

void updateTrain(int value) {
    if(positionTrain <-20.0)
        positionTrain = 10.0f;
    positionTrain -= 0.02;
	glutPostRedisplay();
	glutTimerFunc(1, updateTrain,0);
}

void Train(){
    //Font Part
    glPushMatrix();
    glTranslated(-10.2,-3.5,0);
    glScaled(-.8,.4,1);
    cube(0.179,0.196,0.212);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-11.4,-3.2,0);
    glRotated(35.0, 0.0, 0.0, -1.0);
    glScaled(.5,2,1);
    cube(0.179,0.196,0.212);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-11.2,-3.2,0);
    glRotated(35.0, 0.0, 0.0, -1.0);
    glScaled(.5,2,1);
    cube(0.179,0.196,0.212);
    glPopMatrix();



    glPushMatrix();
    glTranslated(-11,-3.2,0);
    glRotated(35.0, 0.0, 0.0, -1.0);
    glScaled(.5,2,1);
    cube(0.179,0.196,0.212);
    glPopMatrix();
    //Font Part



    //First Bogi
    //Window
    glPushMatrix();
    glTranslated(-9.9,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-9.2,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-8.6,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-8,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-7.4,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-6.8,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-6.2,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-6.2,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-5.6,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-5,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-4.4,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3.8,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-3.2,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2.6,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-2,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-1.4,-2.5,0);
    glScaled(.5,.4,1.12);
    cube(1.0,1.0,1.0);
    glPopMatrix();
    //Window


    glPushMatrix();
    glTranslated(-.7,-2,0);
    glScaled(-9.4,.3,1.12);
    cube(0.255,0.353,0.678);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-.7,-3,0);
    glScaled(-9.4,-.3,1.12);
    cube(0.255,0.353,0.678);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-.7,-3,0);
    glScaled(-9.4,.35,1.2);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-.25,-3,0);
    glScaled(-10,1.5,1.1);
    cube(0.179,0.196,0.212);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-.25,-3,0);
    glScaled(-10,-.5,1.1);
    cube(0.179,0.196,0.212);
    glPopMatrix();
    //First Bogi




    //Two train connection point
    glPushMatrix();
    glTranslated(0,-3,0);
    glScaled(-.3,.9,1);
    cube(0.179,0.196,0.212);
    glPopMatrix();
    //Two train connection point


    //Train second Bogi
    //Window
    glPushMatrix();
    glTranslated(9.2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(8.6,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(8,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(7.4,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6.8,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6.2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(6.2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(5.6,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(5,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(4.4,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3.8,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(3.2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2.6,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.4,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(.8,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(.2,-2.5,0);
    glScaled(.5,.4,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();
    //Window

    glPushMatrix();
    glTranslated(.2,-2,0);
    glScaled(9.6,.3,1.25);
    cube(0.255,0.353,0.678);
    glPopMatrix();

    glPushMatrix();
    glTranslated(.2,-3,0);
    glScaled(9.6,-.3,1.25);
    cube(0.255,0.353,0.678);
    glPopMatrix();

    glPushMatrix();
    glTranslated(.2,-3,0);
    glScaled(9.6,.35,1.25);
    cube(1.0,1.0,1.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(0,-3,0);
    glScaled(10,1.5,1.2);
    cube(0.179,0.196,0.212);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,-3,0);
    glScaled(10,-.5,1.2);
    cube(0.179,0.196,0.212);
    glPopMatrix();
    //Train second Bogi
}


void homeWindow(){
    glPushMatrix();
    glTranslated(1,1.99,0);
    glScaled(0.05,0.9,1);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(5.99,1.99,0);
    glScaled(0.05,0.9,1);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2.82,0);
    glScaled(5,.1,1);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,1.99,0);
    glScaled(5,.1,1);
    cube(1,1,1);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1,2,0);
    glScaled(5,.8,1);
    cube(0.067,0.247,0.451);
    glPopMatrix();
}


void shutter(){
    glPushMatrix();
    glTranslated(1.6,1.9,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.8,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.7,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.6,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.5,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.4,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.3,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

      glPushMatrix();
    glTranslated(1.6,1.3,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1.2,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

     glPushMatrix();
    glTranslated(1.6,1.1,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,1,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();



     glPushMatrix();
    glTranslated(1.6,0.9,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0.8,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();


     glPushMatrix();
    glTranslated(1.6,0.7,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0.6,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();


     glPushMatrix();
    glTranslated(1.6,0.5,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0.4,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();


     glPushMatrix();
    glTranslated(1.6,0.3,0);
    glScaled(3.8,0.2,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0.2,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0.1,0);
    glScaled(3.8,0.1,1.1);
    cube(0.408,0.38,0.357);
    glPopMatrix();

    glPushMatrix();
    glTranslated(1.6,0,0);
    glScaled(3.8,0.2,1.1);
    cube(0.51,0.49,0.451);
    glPopMatrix();

}


void building(){

     //Home

    //Window
    glPushMatrix();
    glTranslated(0,6,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,4.5,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,3,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.5,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();
    //Window

    //Garage
    glPushMatrix();
    glTranslated(1.5,2,0);
    glScaled(4,0.1,1.3);
    cube(0.267,0.247,0.216);
    glPopMatrix();

    //shutter
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(1,1,1.1);
    shutter();
    glPopMatrix();
    //Garage


    glPushMatrix();
    glScaled(7,10,1.1);
    cube(0.882,0.847,0.784);
    glPopMatrix();
}


void redBuilding(){

      //Home

    //Window
    glPushMatrix();
    glTranslated(0,6,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,4.5,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,3,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.5,0);
    glScaled(1,1,1.2);
    homeWindow();
    glPopMatrix();
    //Window

    //Garage
    glPushMatrix();
    glTranslated(1.5,2,0);
    glScaled(4,0.1,1.3);
    cube(0.267,0.247,0.216);
    glPopMatrix();

    //shutter
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(1,1,1.1);
    shutter();
    glPopMatrix();
    //Garage


    glPushMatrix();
    glScaled(7,10,1.1);
    cube(0.506,0.435,0.431);
    glPopMatrix();
}


void greenBuilding(){

      //Home

    //Window
    glPushMatrix();
    glTranslated(0,6,0);
    glScaled(1,1,1.3);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,4.5,0);
    glScaled(1,1,1.3);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,3,0);
    glScaled(1,1,1.3);
    homeWindow();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,1.5,0);
    glScaled(1,1,1.3);
    homeWindow();
    glPopMatrix();
    //Window

    //Garage
    glPushMatrix();
    glTranslated(1.5,2,0);
    glScaled(4,0.1,1.2);
    cube(0.267,0.247,0.216);
    glPopMatrix();

    //shutter
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(1,1,1.2);
    shutter();
    glPopMatrix();
    //Garage


    glPushMatrix();
    glScaled(7,10,1.2);
    cube(0.471,0.659,0.443);
    glPopMatrix();
}

static void display(void)
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glFrustum(-3, 3, -3, 3, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(eyeX,eyeY,eyeZ, lookX,lookY,lookZ, 0,1,0);
    glViewport(0, 0, width, height);



    //Building white
    glPushMatrix();
    glTranslated(8,0,0);
    glScaled(1,1,2);
    building();
    glPopMatrix();


    //Building red
    glPushMatrix();
    glTranslated(1,0,0);
    glScaled(.7,.7,2);
    redBuilding();
    glPopMatrix();


    //Building green
    glPushMatrix();
    glTranslated(-15,0,0);
    glScaled(.4,.5,2);
    greenBuilding();
    glPopMatrix();


    //Train
    glPushMatrix();
    glTranslated(positionTrain,0,0);
    glScaled(1,1,2);
    Train();
    glPopMatrix();


    //Piler
    glPushMatrix();
    glTranslated(0,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();


    glPushMatrix();
    glTranslated(8,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();

    glPushMatrix();
    glTranslated(16,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();


    glPushMatrix();
    glTranslated(24,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-8,-4,0);
    glScaled(1,-2.8,2);
    cube(0.596,0.596,0.4);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-16,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-24,-4,0);
    glScaled(1,-2.8,1.5);
    cube(0.596,0.596,0.4);
    glPopMatrix();
    //Piler



    //Train line
    glPushMatrix();
    glTranslated(0,-4,0);
    glScaled(500,1,2);
    cube(0.482,0.098,0.098);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,-4,0);
    glScaled(-500,1,2);
    cube(0.482,0.098,0.098);
    glPopMatrix();
    //Train Line


    //Train line Bottom
    glPushMatrix();
    glTranslated(0,-7,0);
    glScaled(500,1,1.5);
    cube(0.239,0.0,0.361);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,-7,0);
    glScaled(-500,1,1.5);
    cube(0.239,0.0,0.361);
    glPopMatrix();
    //Train line Bottom


    //Road
    glPushMatrix();
    glTranslated(0,-2,0);
    glScaled(500,-12,1.1);
    cube(0.229,0.229,0.361);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,-2,0);
    glScaled(-500,-12,1.1);
    cube(0.229,0.229,0.361);
    glPopMatrix();
    //Road




    //RIGHT Divider
    glPushMatrix();
    glTranslated(0,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(7,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(14,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(21,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();
    //RIGHT Divider


    //Left Divider
    glPushMatrix();
    glTranslated(-7,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();


    glPushMatrix();
    glTranslated(-14,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-21,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-27,-1,0);
    glScaled(5,-2,1);
    cube(0.0,0.0,0.0);
    glPopMatrix();
    //Left Divider



    //Sky
    glPushMatrix();
    glScaled(500,500,1.1);
    cube(0.502,1.0,1.0);
    glPopMatrix();

    glPushMatrix();
    glScaled(-500,500,1.1);
    cube(0.502,1.0,1.0);
    glPopMatrix();
    //Sky

    glutSwapBuffers();
}

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {

    case 'w':
        eyeY=eyeY+0.1;
        break;
    case 's':
        eyeY=eyeY-0.1;
        break;
    case 'd':
        eyeX=eyeX+0.1;
        break;
    case 'a':
        eyeX=eyeX-0.1;
    break;

    case 'i':
        lookY=lookY+0.1;
        break;
    case 'k':
        lookY=lookY-0.1;
        break;
    case 'j':
        lookX=lookX+0.1;
        break;
    case 'l':
        lookX=lookX-0.1;
        break;


    case '+':
        eyeZ=eyeZ+0.1;
        break;
    case '-':
        eyeZ=eyeZ-0.1;
        break;


        case 'f':
         if(positionTrain <-20.0)
            positionTrain = 10.0f;
            positionTrain -= 0.02;
            glutPostRedisplay();
            glutTimerFunc(1, updateTrain,0);
        break;


        case 'e':
            positionTrain = 10.0f;
            glutPostRedisplay();
        break;

    }

    glutPostRedisplay();
}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(1000,1000);
    glutCreateWindow("Metro");
    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
    glutDisplayFunc(display);
    //glutTimerFunc(1, updateTrain, 0);
    //trainSound();
    glutKeyboardFunc(key);
    glutMainLoop();

    return 0;
}
