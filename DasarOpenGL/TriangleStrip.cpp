#include <GL/glut.h>
void Tampilan(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.25, -0.25);
    glVertex2f(0.0, 0.25);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.5, 0.25);
    glVertex2f(0.75, -0.25);
    glVertex2f(1.0, 0.25);
    glEnd();
    glFlush();
    glutSwapBuffers();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(400, 100);
    glutInitWindowSize(500, 300);
    glutCreateWindow("Gambar 2");
    glutDisplayFunc(Tampilan);
    glutMainLoop();
}
