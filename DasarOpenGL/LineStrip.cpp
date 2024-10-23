#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-6, 6, -6, 6, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glColor3f(0, 0, 1);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-4.00, 0.00);
    glVertex2f(-3.00, 2.00);
    glVertex2f(-2.00, 0.00);
    glVertex2f(-1.00, 2.00);
    glVertex2f(0.0, 0.00);
    glVertex2f(1.00, 2.00);
    glVertex2f(2.00, 0.00);
    glVertex2f(3.00, 2.00);
    glVertex2f(4.00, 0.00);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize(400, 400);
    glutCreateWindow("GL lines");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
