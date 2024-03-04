#include <GL/glut.h>
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle=0;///���઺����
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�����x�}
    glTranslatef(teapotX,teapotY,0);
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);///������z�b
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();///state:0:�U�h�A�W��
}
int method=1;
int oldX=0,oldY=0;
void mouse(int button, int state, int x, int y)
///�ڭ̳o�̡A�n�������ץ�
{
    ///teapotX=(x-150)/150.0;
    ///teapotY=-(y-150)/150.0;
    oldX=x;
    oldY=y;
}
void motion(int x,int y)
{
   if(method==1)
   {
       angle+=x-oldX;
   }
   else if(method==2)
   {
       teapotX +=(x-oldX)/150.0;
       teapotY -=(y-oldY)/150.0;
   }
   oldX=x;
   oldY=y;
    display();
}
void keyboard(unsigned char key,int x,int y)
{
    if(key=='e') method=1;///����Rotate
    if(key=='w') method=2;///����Translate
}
int main(int argc,char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week03 mouse glTranslatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///�o�@��A�]�wmouse�禡
    glutMotionFunc(motion);///�o��A�]�wmouse��motion�ʧ@
    glutKeyboardFunc(keyboard);
    glutMainLoop();


}
