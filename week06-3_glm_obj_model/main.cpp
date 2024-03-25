#include <GL/glut.h>
#include "glm.h"///加的程式，使用glm的程式碼
GLMmodel*pmodel=NULL;
void drawmodel(void)
{
    if(!pmodel)
    {
        pmodel=glmReadOBJ("data/porsche.obj");
        if(!pmodel)exit(0);
        glmUnitize(pmodel);
        glmFacetNormals(pmodel);
        glmVertexNormals(pmodel,90.0);
    }
    glmDraw(pmodel,GLM_SMOOTH|GLM_MATERIAL);
}
void display()
{
    ///glutSolidTeapot(0.3);
    drawmodel();
    glutSwapBuffers();
}

int main(int argc,char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week06 glm obj model");

    glutDisplayFunc(display);
    glutMainLoop();


}
