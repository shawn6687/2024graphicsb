#include <GL/glut.h>
#include <stdio.h>
float teapotX=0,teapotY=0;
float angle=0;///旋轉的角度
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);///清背景
    glPushMatrix();///輩分矩陣
        glRotatef(angle,0,0,1);
        glutSolidTeapot(0.3);///最難的z軸
    glPopMatrix();///還原矩陣
    glutSwapBuffers();///state:0:下去，上來
}
void mouse(int button, int state, int x, int y)
///我們這裡，要巧妙的修正
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
    glutMouseFunc(mouse);///這一行，設定mouse函式
    glutMotionFunc(motion);///這行，設定mouse的motion動作
    glutMainLoop();


}
