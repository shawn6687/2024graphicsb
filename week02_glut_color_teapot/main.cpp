#include <GL/glut.h>
void display()
{

glColor3f(247/255.0,180/255.0,171/255.0);
glutSolidTeapot(0.3);
glutSwapBuffers();
}
int main(int argc,char*argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutCreateWindow("week02_glut");
    glutDisplayFunc(display);
    glutMainLoop();
}
