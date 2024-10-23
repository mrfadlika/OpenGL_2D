#include <stdio.h>
#include <stdlib.h>
#include <gl/glut.h>

using namespace std;

void tampil()
{
    glClearColor(1.0, 1.0, 1.0, 1.0); // warna dasar putih
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 0.0); // warna kuning

    glBegin(GL_POLYGON); // persegi kuning
    glVertex2f(0, 0.5);
    glVertex2f(0.5, 0);
    glVertex2f(0, -0.5);
    glVertex2f(-0.5, 0);
    glEnd();

    glColor3f(0.0, 0.0, 1.0); // warna biru

    glBegin(GL_POLYGON); // persegi biru
    glVertex2f(-0.5, 1);
    glVertex2f(-1, 0.5);
    glVertex2f(-0.5, 0);
    glVertex2f(0, 0.5);
    glEnd();

    glColor3f(1.0, 0.0, 0.0); // warna merah

    glBegin(GL_POLYGON); // persegi merah
    glVertex2f(0.5, 1);
    glVertex2f(0, 0.5);
    glVertex2f(0.5, 0);
    glVertex2f(1, 0.5);
    glEnd();

    glColor3f(0.0, 1.0, 0.0); // warna hijau

    glBegin(GL_POLYGON); // persegi hijau
    glVertex2f(-0.5, 0);
    glVertex2f(-1, -0.5);
    glVertex2f(-0.5, -1);
    glVertex2f(0, -0.5);
    glEnd();

    glColor3f(1.0, 0.0, 1.0); // warna ungu

    glBegin(GL_POLYGON); // persegi ungu
    glVertex2f(0.5, 0);
    glVertex2f(0, -0.5);
    glVertex2f(0.5, -1);
    glVertex2f(1, -0.5);
    glEnd();

    glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutCreateWindow("ini kotak");
    glutDisplayFunc(tampil);
    glutMainLoop();

    system("PAUSE");
    return EXIT_SUCCESS;
}
