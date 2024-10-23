#include <GL/glut.h>
#include <math.h>
void display(void)
{
glClearColor (0.0,0.0,0.0,0.0);
glClear (GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);                        // <=========== // warnanya diganti disini ok (code warna putih)
glBegin(GL_POLYGON);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);
glVertex2f(0.5,-0.5);
glEnd ();
glFlush();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutCreateWindow("PERSEGI");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
