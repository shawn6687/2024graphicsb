#include <GL/glut.h>
void myBody()
{
    glColor3f(1,0,0);///red body
    glutWireCube(0.6);///cube
}
void myArm()
{
    glPushMatrix();
        glColor3f(0,1,0);///green arm
        glScalef(1.5,0.5,0.5);///weight 1.5 high0.5
        glutWireCube(0.3);
    glPopMatrix();
}
float angle=0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6,+0.3,0);
        myBody();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(+0.3,+0.3,0);///(3) 掛到肩上
    glRotatef(angle++,0,0,1);///(2) 轉動
    glTranslatef(0.225,0,0);///(1) 旋轉中心，放在正中心
    myArm();
    glPushMatrix();
            glTranslatef(0.225,0,0);
            glRotatef(angle++,0,0,1);
            glTranslatef(0.225,0,0);
            myArm();
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();

}

int main(int argc,char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week09-2 glutSolid¨t¦C");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
