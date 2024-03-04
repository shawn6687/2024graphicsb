#include <GL/glut.h>
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle=0;///���઺����
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�����x�}
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);///������z�b
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///state:0:�U�h�A�W��
}
void mouse(int button, int state, int x, int y)
///�ڭ̳o�̡A�n�������ץ�
{
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
}
void motion(int x,int y)
{
    angle=x;
    display();
}
int main(int argc,char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week03 mouse glTranslatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///�o�@��A�]�wmouse�禡
    glutMotionFunc(motion);///�o��A�]�wmouse��motion�ʧ@
    glutMainLoop();


}
