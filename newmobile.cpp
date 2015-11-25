#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <string.h>
#include <math.h>

using namespace std;
int screen=1;
void init()
{
    glClearColor(1,1,1,1);
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,400.0,0,700.0,50,-50);
    //glutPostRedisplay();
}




void back()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
        glVertex2d(250,95);
        glVertex2d(265,100);
         glVertex2d(250,95);
         glVertex2d(265,90);
        
        
    glEnd();
    glPopMatrix();
}
void list()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glLineWidth(2);
    glBegin(GL_LINES);
    
      glVertex2d(188,105);
        glVertex2d(212,105);
        
        glVertex2d(188,100);
        glVertex2d(212,100);
        
         glVertex2d(188,95);
        glVertex2d(212,95);
        
         glVertex2d(188,90);
        glVertex2d(212,90);
        
         glVertex2d(188,85);
        glVertex2d(212,85);
        
    glEnd();
    glPopMatrix();
}
void home()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(125+5,100);
    glVertex2d(120+5,100);
    glVertex2d(130+5,110);
    
    glVertex2d(140+5,100);
    glVertex2d(135+5,100);
        glVertex2d(135+5,90);
            glVertex2d(125+5,90);
                
    
    glEnd();
    glPopMatrix(); 
}
void main_screen()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2d(120,575);
    glVertex2d(280,575);
    
    glVertex2d(280,130);
    glVertex2d(120,130);
    
    glEnd();
    glPopMatrix();
}
void light()
{
 glColor3f(1.0,1.0,1.0);
    glPointSize(5);
    glBegin(GL_POINTS);
        glVertex2d(270,610);
        
    glEnd();
    glPopMatrix();
}
void speaker()
{
glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glLineWidth(5);
    glBegin(GL_LINES);
        glVertex2d(150,610);
        glVertex2d(250,610);
    glEnd();
    glPopMatrix();
    
    
}
void boot_mobile()
{
    glPushMatrix();
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(100,640);
    glVertex2d(105,645);
    glVertex2d(110,650);
    
    glVertex2d(290,650);
    
    glVertex2d(295,645);
    glVertex2d(300,640);
    glVertex2d(300,60);
    glVertex2d(295,55);
    glVertex2d(290,50);
    
    glVertex2d(110,50);
    glVertex2d(105,55);
    glVertex2d(100,60);    
    glEnd();
    glPopMatrix();
    speaker();
    light();
     main_screen();
     home();
     list();
     back();
    
}
void mob_display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    //glColor3f(1.0,1.0,1.0);
    glLoadIdentity();
    if(screen==0)
    {
    init();
   // index();
    }
    else
    {
        init();

        boot_mobile();
        
    }  
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 27:exit(1);
        break;
        
            
    }
}
void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    cout<<"Widht="<<w<<"height="<<h<<endl;
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  
  glutCreateWindow("Mobile");
  glutInitWindowSize(400,700);
  glutInitWindowPosition(0,0);  
  glutReshapeFunc(reshape);
   glutDisplayFunc(mob_display);
   glutKeyboardFunc(keyboard);
   //glutMouseFunc(mouse);
   
   glutMainLoop();
  // glutIdleFunc();
   return 0;
   }

