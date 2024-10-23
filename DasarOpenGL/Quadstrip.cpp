#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(255, 0, 0);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-4.0, -2.0);
    glVertex2f(-4.0, 2.0);
    glVertex2f(-2.0, -2.0);
    glVertex2f(-2.0, 2.0);
    glVertex2f(6.0, -6.0);
    glVertex2f(6.0, 6.0);
    glEnd();
    glFlush();
}

void Initialize()
{
    glClearColor(0, 0, 0, 0.5);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}

int main(int iArgc, char **cppArgv)
{
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(250, 250);
    glutCreateWindow("Quad strip");
    Initialize();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return EXIT_SUCCESS;
}
