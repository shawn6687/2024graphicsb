#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void reshape(int w,int h)
{
    float ar=w/(float) h;///aspect ratio���e��
    glViewport(0,0,w,h);///�]�w�i�H�ݨ쪺�d��A���ݨ�
    glMatrixMode(GL_PROJECTION);///�{�b�n�]�w��Projection�x�}
    glLoadIdentity();///�̭�l�����x�}I
    gluPerspective(60,ar,0.1,100);///�z����v���Ѽ�

    glMatrixMode(GL_MODELVIEW);///�{�b�n�����^model view�x�} (�e�Ϫ�T,R,S��
    glLoadIdentity();
    gluLookAt(0,0,-3,0,0,0,0,1,0);
}
int main(int argc,char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week16-2");

    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMainLoop();


}
