#include <GL/glut.h>

void Tampilan(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1, 0, 1);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.4, -0.9);
    glVertex2f(0.4, -0.9);
    glVertex2f(0.0, -0.1);
    glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(400, 100);
    glutInitWindowSize(300, 300);
    glutCreateWindow("Segi Tiga");
    glutDisplayFunc(Tampilan);
    glutMainLoop();
}
