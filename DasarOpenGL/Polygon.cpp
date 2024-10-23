#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glBegin(GL_POLYGON);
    glColor3f(0, 1, 1);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.75, 0);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0, 0.75);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.75, 0);
    glVertex2f(0.5, -0.5);
    glVertex2f(0, -0.75);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Polygon");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
