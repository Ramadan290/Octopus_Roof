#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


#endif
#include <MATH.h>
#include <stdlib.h>
//add global variables to code
float fishX1 = 0;
float BubblesY1=0;
float BubblesY2=0;
float BubblesY3=0;
float BubblesY4=0;
float BubblesY5=0;
float BubblesY6=0;
float BubblesY7=0;
float BubblesY8=0;
float BubblesY9=0;
float fishY1 = 0;
float fishX2 = 0;
float fishX3 = 200;
float fishX4 = 200;
float tailAngle = 0;
float tailAngle1 =0;
float EyeR=0;
float EyeL=0;
float Leg1=0;
float Leg2=0;
float Leg3=0;
float Mouth2=0;
float Xbody = 0 ;
float Ybody = 0 ;
float octReset = -40 ;
int tailAngleState =1;
float angle ;
float plantTranslation = 0;
int plantTranslateState =1;
float fin1 = 0, fin2 =0;
int fin1State =1, fin2State = 1;






/* Draw Objects*/
//Draw Fishes
//Add the functions DrawFish1, DrawFish2, DrawFish3, DrawFish4
void DrawFish1()
{


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glScalef (0.4f, 0.4f, 0.4f);
    glTranslatef(fishX1, fishY1, 0);
    glPushMatrix();
    glTranslatef(5, 50, 0);
    glRotatef(tailAngle, 0, 0, 1);
    glTranslatef(-5, -50, 0);
//Tail
    glBegin(GL_POLYGON);
    glColor3f(0.953,0.561,0.169);
    glVertex2i(8,50);
    glColor3f(0.871,0.255,0.051);
    glVertex2i(0, 45);
    glColor3f(0.953,0.561,0.169);
    glVertex2i(5,50);
    glColor3f(0.871,0.255,0.051);
    glVertex2i(0,55);
    glEnd();
    glPopMatrix();
//body triangle
    glColor3f(0.953,0.561,0.169);
    glBegin(GL_TRIANGLES);
    glVertex2i(7,50);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glEnd();
//body rectangle
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glVertex2i(21,42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(13,45.5);
    glVertex2f(13,54.5);
    glVertex2f(15,56);
    glVertex2f(15,44);
    glEnd();
//face triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.729,0.0);
    glVertex2i(30,50);
    glColor3f(0.953,0.561,0.169);
    glVertex2i(21,58);
    glColor3f(0.953,0.561,0.169);
    glVertex2i(21,42);
    glEnd();
//upper fin
    glColor3f(0.953,0.561,0.169);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glColor3f(0.871,0.255,0.051);
    glVertex2i(16+fin2,65);
    glEnd();
//lower fin
    glColor3f(0.953,0.561,0.169);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,42);
    glVertex2i(21,42);
    glColor3f(0.871,0.255,0.051);
    glVertex2i(16+fin2,35);
    glEnd();

//eye
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    float angle;
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+24, 1*sin(angle)+52);
    }
    glEnd();
}
void DrawFish2()
{


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glScalef (0.5f, 0.5f, 0.5f);
    glTranslatef(fishX2, 70, 0);
    glPushMatrix();
    glTranslatef(5, 50, 0);
    glRotatef(tailAngle1, 0, 0, 1);
    glTranslatef(-5, -50, 0);
//Tail
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2i(8,50);
    glColor3f(0,0,0);
    glVertex2i(0, 45);
    glColor3f(1,1,0);
    glVertex2i(5,50);
    glColor3f(0,0,0);
    glVertex2i(0,55);
    glEnd();
    glPopMatrix();
//body triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.004,0.004,1.0);
    glVertex2i(7,50);
    glColor3f(0,0,0.604);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glEnd();
//body rectangle

    glColor3f(0,0,0.604);
    glBegin(GL_POLYGON);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glVertex2i(21,42);
    glEnd();

//face triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.004,0.004,1.0);
    glVertex2i(30,50);
    glColor3f(0,0,0.604);
    glVertex2i(21,58);
    glColor3f(0,0,0.604);
    glVertex2i(21,42);
    glEnd();
//upper fin
    glColor3f(0,0,0.345);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glColor3f(0,0,0);
    glVertex2i(16+fin1,65);
    glEnd();
//lower fin
    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,42);
    glVertex2i(21,42);
    glColor3f(0,0,0);
    glVertex2i(16+fin1,35);
    glEnd();

//eye
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    float angle;
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+24, 1*sin(angle)+52);
    }
    glEnd();



}
// Draw the third fish
void DrawFish3()
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glScalef (0.8f, 0.8f, 0.8f);
    glTranslatef(fishX3, 40, 0);
    // Flip the fish horizontally
    glScalef(-1, 1, 1);
    glPushMatrix();
    glTranslatef(5, 50, 0);
    glRotatef(tailAngle, 0, 0, 1);
    glTranslatef(-5, -50, 0);
//Tail
    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2i(8,50);
    glColor3f(0.906,0,0);
    glVertex2i(0, 45);
    glColor3f(0.906,0,0);
    glVertex2i(5,50);
    glColor3f(0.906,0,0);
    glVertex2i(0,55);
    glEnd();
    glPopMatrix();
//body triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1,0.518,0.158);
    glVertex2i(7,50);
    glColor3f(0.906,0,0);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glEnd();
//body rectangle
    glColor3f(0.906,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glVertex2i(21,42);
    glEnd();

//face triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1,0.518,0.518);
    glVertex2i(30,50);
    glColor3f(0.906,0,0);
    glVertex2i(21,58);
    glColor3f(0.906,0,0);
    glVertex2i(21,42);
    glEnd();
//upper fin
    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glColor3f(0.906,0,0);
    glVertex2i(16+fin2,65);
    glEnd();
//lower fin
    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,42);
    glVertex2i(21,42);
    glColor3f(0.906,0,0);
    glVertex2i(16+fin2,35);
    glEnd();

//eye
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    float angle;
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+24, 1*sin(angle)+52);
    }
    glEnd();


}
// Draw the fourth fish
void DrawFish4()
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glScalef (0.6f, 0.6f, 0.6f);
    glTranslatef(fishX4, 20, 0);
    // Flip the fish horizontally
    glScalef(-1, 1, 1);
    glPushMatrix();
    glTranslatef(5, 50, 0);
    glRotatef(tailAngle, 0, 0, 1);
    glTranslatef(-5, -50, 0);
//Tail
    glBegin(GL_POLYGON);
    glColor3f(0.608,0.212,1);
    glVertex2i(8,50);
    glColor3f(0.518,1,0.518);
    glVertex2i(0, 45);
    glColor3f(0.518,1,0.518);
    glVertex2i(5,50);
    glColor3f(0.518,1,0.518);
    glVertex2i(0,55);
    glEnd();
    glPopMatrix();
//body triangle
    glBegin(GL_TRIANGLES);
    glColor3f(0.808,0.616,1);
    glVertex2i(7,50);
    glColor3f(0.608,0.212,1);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glEnd();
//body rectangle
    glColor3f(0.608,0.212,1);
    glBegin(GL_POLYGON);
    glVertex2i(18,42);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glVertex2i(21,42);
    glEnd();

//face triangle
    glBegin(GL_TRIANGLES);
    glColor3f(1,0.714,1);
    glVertex2i(30,50);
    glColor3f(0.608,0.212,1);
    glVertex2i(21,58);
    glColor3f(0.608,0.212,1);
    glVertex2i(21,42);
    glEnd();
//upper fin
    glColor3f(0.608,0.212,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,58);
    glVertex2i(21,58);
    glColor3f(0.518,1,0.518);
    glVertex2i(16+fin2,65);
    glEnd();
//lower fin
    glColor3f(0.608,0.212,1);
    glBegin(GL_TRIANGLES);
    glVertex2i(18,42);
    glVertex2i(21,42);
    glColor3f(0.518,1,0.518);
    glVertex2i(16+fin2,35);
    glEnd();

//eye
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    float angle;
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+24, 1*sin(angle)+52);
    }
    glEnd();


}
//Draw the Plant
void plant2L( /* RightPoint X*/ int x1, /* LeftPoint X*/ int x2, /* RightPoint Y*/ int h1, /* LeftPoint Y*/ int h2)
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f( 0.4,1.7,0.05);
    glBegin(GL_POLYGON);
    //Stand (First and end point)
    glVertex2f(x1,0);
    //head left
    glVertex2f(x1+3+plantTranslation,h1);
    glColor3f(0.0,0.3,0.0);
    // Stand right
    glVertex2f(x2,0);
    //head right (And connected to the end)
    glVertex2f(x1-3+plantTranslation,h2);
    glEnd();
}
void plant()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    plant2L(10,7.5,6,10);
    plant2L(17,14,11,7);
    plant2L(25,22,7.5,10);
    plant2L(35,33,5,7);
    plant2L(42,44.3,8,12);
    plant2L(50,55,15,15);
    plant2L(58,60.7,7.5,10);
    plant2L(64,66.6,6.6,9);
    plant2L(70,72.3,7.5,10);
    plant2L(80,83,7.5,10);
    plant2L(91.5,90.5,7,9);
    plant2L(93,95,9,7);
}
//Draw Bubbles
/*Bubbles(left side)*/
void Bubbles1()
{
    //Bubble 1
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.5*cos(angle)+5,1.5*sin(angle)+BubblesY1);
    }
    glEnd();

    //Bubble 2
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.6*cos(angle)+6,0.6*sin(angle)+BubblesY1);
    }
    glEnd();

}
void Bubbles2()
{
    //Bubble 3
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.4*cos(angle)+4,1.4*sin(angle)+BubblesY2);
    }
    glEnd();

    //Bubble 4
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.9*cos(angle)+5,0.9*sin(angle)+BubblesY2);
    }
    glEnd();



}
void Bubbles3()
{
    //Bubble 6
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.6*cos(angle)+5,0.6*sin(angle)+BubblesY3);
    }
    glEnd();

    //Bubble 7
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.6*cos(angle)+7,1.6*sin(angle)+BubblesY3);
    }
    glEnd();

}
/*Bubbles(Right side)*/
void Bubbles4()
{
    //Bubble 1
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.8*cos(angle)+88,1.8*sin(angle)+BubblesY4);
    }
    glEnd();

    //Bubble 2
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.3*cos(angle)+89,1.3*sin(angle)+BubblesY4);
    }
    glEnd();
}
void Bubbles5()
{
    //Bubble 3
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.9*cos(angle)+87,0.9*sin(angle)+BubblesY5);
    }
    glEnd();


    //Bubble 4
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.5*cos(angle)+88,0.5*sin(angle)+BubblesY5);
    }
    glEnd();

}
void Bubbles6()
{


    //Bubble 5
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1*cos(angle)+89,1*sin(angle)+BubblesY6);
    }
    glEnd();

    //Bubble 6
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.9*cos(angle)+87,1.9*sin(angle)+BubblesY6);
    }
    glEnd();
}
void Bubbles7()
{
    //Bubble 1
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.8*cos(angle)+50,1.8*sin(angle)+BubblesY4);
    }
    glEnd();
    //Bubble 2
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.3*cos(angle)+51,1.3*sin(angle)+BubblesY4);
    }
    glEnd();
}
void Bubbles8()
{
    //Bubble 3
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.9*cos(angle)+50,0.9*sin(angle)+BubblesY5);
    }
    glEnd();
    //Bubble 4
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(0.5*cos(angle)+52,0.5*sin(angle)+BubblesY5);
    }
    glEnd();
}
void Bubbles9()
{
    //Bubble 5
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1*cos(angle)+52,1*sin(angle)+BubblesY6);
    }
    glEnd();
    //Bubble 6
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    for(int i=0; i<360; i++)
    {
        angle=i*3.14/180;
        glVertex2f(1.9*cos(angle)+51,1.9*sin(angle)+BubblesY6);
    }
    glEnd();
}
/*function to call Bubbles*/
void Bubbles()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    /*(edited by:ABDALLAH 17-11-2023)*/
    Bubbles1();
    Bubbles2();
    Bubbles3();
    Bubbles4();
    Bubbles5();
    Bubbles6();
    Bubbles7();
    Bubbles8();
    Bubbles9();
}
//Draw Rocks
void Rocks()  /*(edited by:ABDALLAH 17-11-2023)*/
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //Rock 1 (x=5,y=0) -- Sizes May differ due to design (olive)
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.3,0);
    float angle;
    for(int i=0; i<180; i++)
    {
        angle=i*3.14/180;
        glVertex2f(5*cos(angle)+10,5*sin(angle)-1);
    }
    glEnd();

    //Rock 2 (x=18,y=0) --- Sizes May differ due to design (maroon)
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.09,0);
    for(int i=0; i<180; i++)
    {
        angle=i*3.14/180;
        glVertex2f(7*cos(angle)+18,8*sin(angle)-1);
    }
    glEnd();

    //Rock 3 (x=25,y=0) --- Sizes May differ due to design (black)
    glBegin(GL_POLYGON);
    glColor3f(0.2,0.2,0.0);
    for(int i=0; i<180; i++)
    {
        angle=i*3.14/180;
        glVertex2f(6*cos(angle)+28,7*sin(angle)-1);
    }
    glEnd();

    //Rock 4 (x=50,y=0) --- Sizes May differ due to design (dark green)
    glBegin(GL_POLYGON);
    glColor3f(0.09,0.2,0.0);
    for(int i=0; i<180; i++)
    {
        angle=i*3.14/180;
        glVertex2f(10*cos(angle)+55,12*sin(angle)-1);
    }
    glEnd();
}
/*Player Character*/
void octopus()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef( Xbody, Ybody, 0);


    /*Octopus Head*/
    glColor3f(0.7,0,1.2);
    glBegin(GL_POLYGON);
    float angle;
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(5*cos(angle)+50+octReset, 7*sin(angle)+50);
    }
    glEnd();
    glPopMatrix();

    /*Left eye*/
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+48+octReset, 2*sin(angle)+52);
    }
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(0.5*cos(angle)+48+EyeL +octReset, 1*sin(angle)+52);
    }
    glEnd();
    glPopMatrix();

    /*Right Eye*/
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(1*cos(angle)+52+octReset, 2*sin(angle)+52);
    }
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(0.5*cos(angle)+52+EyeR+octReset, 1*sin(angle)+52);
    }
    glEnd();
    glPopMatrix();


    /*Mouth*/
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(3.5*cos(angle)+50+Mouth2+octReset, 1*sin(angle)+47+Mouth2);
    }
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.75,0,0);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(2.5*cos(angle)+50+Mouth2+octReset, 0.7*sin(angle)+46.5+Mouth2);
    }
    glEnd();

    /*Octopus Legs*/
    glBegin(GL_POLYGON);
    glColor3f(0.7,0,1.2);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(0.5*cos(angle)+48+Leg1+octReset, 5*sin(angle)+41);
    }
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0,1.2);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(0.5*cos(angle)+50+Leg2 +octReset, 5*sin(angle)+40);
    }
    glEnd();
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3f(0.7,0,1.2);
    for(int i=0; i<360; i++)
    {
        angle = i*3.14/180;
        glVertex2f(0.5*cos(angle)+52+Leg3 +octReset, 5*sin(angle)+41);
    }
    glEnd();
    glPopMatrix();
}



// BackGround Colour
void BackGround()
{
    glColor3f(0, 0.239, 0.42);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glColor3f(0, 0.125, 0.22);
    glVertex2i(100,0);
    glColor3f(0.016, 0.576, 1.00);
    glVertex2i(100,100);
    glColor3f(0.118, 0.62, 1.00);
    glVertex2i(0,100);
    glEnd();
}
/* Animations to Objects Codes*/
// Fish Animation
void fishAnimation()
{
    fishX1 += 3; // update the fish x-coordinate
    if (fishX1 > 250)
        fishX1 = -30;
    fishX2 += 0.8; // update the fish x-coordinate
    if (fishX2 > 200)
        fishX2 = -30;
    fishX3 -= 4; // update the fish x-coordinate
    if (fishX3 < -30)
        fishX3 = 180; // reset the fish x-coordinate if it goes beyond the left edge
    fishX4 -= 2; // update the fish x-coordinate
    if (fishX4 < -18)
        fishX4 = 200; // reset the fish x-coordinate if it goes beyond the left edge
    tailAngle += 5; // update the tail angle
    if (tailAngle > 15)
        tailAngle = -15; // reset the tail angle if it exceeds the range
    if(tailAngleState ==1)
    {
        tailAngle1 +=1.5;
        if(tailAngle1 >10)
        {
            tailAngleState = 0;
        }
    }
    else
    {
        tailAngle1 -= 1.5;
        if(tailAngle1<-10)
        {
            tailAngleState = 1;
        }
    }
}
// Fin Animation
void finAnimation()
{
    if(fin1State ==1)
    {
        fin1 += 0.5;
        if(fin1 >2)
        {
            fin1State = 0;
        }
    }
    else
    {
        fin1 -= 0.5;
        if(fin1<-3)
        {
            fin1State = 1;
        }
    }
    if(fin2State ==1)
    {
        fin2 += 1;
        if(fin2 >1)
        {
            fin2State = 0;
        }
    }
    else
    {
        fin2 -= 1;
        if(fin2<-3)
        {
            fin2State = 1;
        }
    }
}
// Plant Animation
void plantAnimation()
{
    if(plantTranslateState ==1)
    {
        plantTranslation += 0.2;
        if(plantTranslation >2)
        {
            plantTranslateState = 0;
        }
    }
    else
    {
        plantTranslation -= 0.2;
        if(plantTranslation<-2)
        {
            plantTranslateState = 1;
        }
    }
}
//Bubble Animation
void BubbleAnimation()
{
    BubblesY1+=0.7; // update the fish x-coordinate
    if (BubblesY1 > 100)
        BubblesY1 = -30;
    BubblesY2+=1.3;
    if (BubblesY2 > 100)
        BubblesY2 = -30;
    BubblesY3+=2;
    if (BubblesY3 > 100)
        BubblesY3 = -30;
    BubblesY4+=0.5;
    if (BubblesY4 > 100)
        BubblesY4 = -30;
    BubblesY5+=1.1;
    if (BubblesY5 > 100)
        BubblesY5 = -30;
    BubblesY6+=2.2;
    if (BubblesY6 > 100)
        BubblesY6 = -30;
    BubblesY7+=0.8;
    if (BubblesY7 > 100)
        BubblesY7 = -30;
    BubblesY8+=0.6;
    if (BubblesY8 > 100)
        BubblesY8 = -30;
    BubblesY9+=1.4;
    if (BubblesY8 > 100)
        BubblesY8 = -30;
}
//add all of the things in the timer function to the code
void EyeAnimation()
{
    EyeL+=0.01;
    if(EyeL > 0.3)
        EyeL= -0.3;
    EyeR+=0.01;
    if (EyeR > 0.3)
        EyeR = -0.3;
}

void LegAnimation()
{
    Leg1+=0.03;
    if(Leg1 >0.3)
        Leg1=-0.2;
    Leg2+=0.02;
    if(Leg2>0.3)
        Leg2=-0.2;
    Leg3+=0.01;
    if(Leg3>0.3)
        Leg3=-0.2;

}
void MouthAnimation()
{
    if(Mouth2>0.2)
        Mouth2=-0.2;
}

void octopusAnimations()
{
    EyeAnimation();
    LegAnimation();
    MouthAnimation();
}


/* Program entry point */
void init2D(float r, float g, float b)
{
    glClearColor(r,g, b, 0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 100.0, 0, 100);
}
/* Our Display Objects (DO NOT FORGET TO COMMENT ON EVERY OBJECT CREATED HERE )*/
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    BackGround();
    octopus();
    Rocks();
    plant();
    DrawFish1 (); //add to code
    DrawFish2();//add to code
    DrawFish3();//add to code
    DrawFish4();//add to code
    glPopMatrix();//add to code
    Bubbles();
    //Static
    glutSwapBuffers();
    glFlush();
}


void restartScene() {
    // reset the position and movement of the fishes
    fishX1 = 0;
    fishX2 = 0;
    fishX3 = 200;
    fishX4 = 200;
    tailAngle = 0;
    tailAngle1 = 0;
    fin1 = 0;
    fin2 = 0;

    // reset the position and movement of the bubbles
    BubblesY1 = 0;
    BubblesY2 = 0;
    BubblesY3 = 0;
    BubblesY4 = 0;
    BubblesY5 = 0;
    BubblesY6 = 0;
    BubblesY7 = 0;
    BubblesY8 = 0;
    BubblesY9 = 0;

    // reset the position and movement of the plants
    plantTranslation = 0;

    // reset the position and movement of the octopus
    Xbody = 0;
    Ybody = 0;
    octReset = -40;
    EyeL = 0;
    EyeR = 0;
    Leg1 = 0;
    Leg2 = 0;
    Leg3 = 0;
    Mouth2 = 0;

    // redraw the scene
    display();
}

/*IDLE*/
void idle ()
{
    glutPostRedisplay();
}


/*Resize Window*/
void resizeWindow(int width, int height)
{
    glutReshapeWindow(width, height);
    glutPositionWindow(200,50);
    gluOrtho2D(0, width, 0, height);  // Adjust viewport to match new size
}

/*Timer*/
void Timer (int t )
{
    glutTimerFunc(50,Timer, t);
    glutPostRedisplay();
    fishAnimation();
    finAnimation();
    BubbleAnimation();
    plantAnimation();
    octopusAnimations();
}


/* Restart Scene Function*/


void keyboard(unsigned char Key, int x, int y)
{
    switch(Key)
    {

    case 'W':
    case 'w':
        if (Ybody > 42)
        {
            restartScene();
        }
        else
            Ybody += 1 ;
        break;

    case 'S':
    case 's':
        if (Ybody < -35)
        {
            restartScene();
        }
        else
            Ybody -= 1 ;
        break;


    case 'D':
    case 'd':
        if (Xbody > 84)
        {
            restartScene();
        }
        else
            Xbody += 1 ;
        break;

    case 'A':
    case 'a':
        if (Xbody < -4)
        {
           restartScene();
        }
        else
            Xbody -= 1 ;
        break;

    case 'L':
    case 'l':
        glutFullScreen();
        break;

    case 'K':
    case 'k':
        resizeWindow(1200,800);
        break;

    case 'X':
    case 'x':
        restartScene();
        break;


    // ESC KEY QUITS
    case 27 :
        exit(0);
        break;
    }
}


// Main
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200,800);
    glutInitWindowPosition(200,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("211003517 && 211002284 && 212001212");
    init2D(0.196078, 0.6, 0.8);


    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboard);
    Timer(0);
    glutMainLoop();

    return 0;
}
