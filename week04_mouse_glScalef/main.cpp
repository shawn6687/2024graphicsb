#include <GL/glut.h>///�ϥ�GLUT�~��
float s=1;
 void display()
 {
     glClearColor(1,1,0.9,1);
     glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glColor3f(0,1,0);
     glPushMatrix();
        glScalef(s,s,s);
        glutSolidTeapot(0.3);
     glPopMatrix();
     glutSwapBuffers();
 }

 void motion(int x,int y)
 {
     s= 1 +(x-150)/150.0;///�ܤj�ܤp
     display();

 }

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///��l�� GLUT 140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143

    glutCreateWindow("GLUT Shapes");///145
    glutDisplayFunc(display);///148 display�禡
    glutMotionFunc(motion);
    glutMainLoop();///174 �j��
}
