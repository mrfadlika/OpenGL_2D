#include <GL/glut.h>
void daun()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);        // background
    glColor3f(1.0, 1.0, 1.0); // warna putih
    glVertex2f(-15, 15);
    glColor3f(1.0, 1.0, 1.0); // warna putih
    glVertex2f(-15, -15);
    glColor3f(1.0, 1.0, 1.0); // warna putih
    glVertex2f(15, -15);
    glColor3f(1.0, 1.0, 1.0); // warna putih
    glVertex2f(15, 15);
    glEnd();
    glFlush();

    glBegin(GL_TRIANGLES);    // tangkai
    glColor3f(0.0, 2.0, 0.0); // warna hijau
    glVertex2f(-12.5, 10.5);
    glColor3f(0.0, 2.0, 0.0); // warna hijau
    glVertex2f(-13, 10);
    glColor3f(1.0, 5.0, 0.0); // warna kuning
    glVertex2f(-7, 8.5);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 1
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(0, 10);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-3, 10.5);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-6, 10.5);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-9, 9);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-6, 8);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 2
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(0, 10);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-6, 8);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-3, 6);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(8, 4);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(6, 6.5);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(4, 8);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 3
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-3, 6);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(3, 0);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(11, -4);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(10, 0);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(8, 4);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 4
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(3, 0);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(6, -4);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(11, -7);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(11, -4);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 5
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(6, -4);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(9, -9);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(10.5, -10);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(11, -7);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 6
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(9, -9);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(10, -13);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(10.5, -10);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 7
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(9, -9);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(9, -11);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(10, -13);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 8
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(3, 0);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(3, -8.5);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(9, -11);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(9, -9);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(6, -4);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 9
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-6, 8);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-5, -4);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(3, -8.5);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(3, 0);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-3, 6);
    glEnd();
    glFlush();

    glBegin(GL_POLYGON);      // bidang 10
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-9, 9);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-10, 6);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-10, 4);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-9, 1);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-7, -2);
    glColor3f(0.0, 1.0, 0.0); // warna hijau
    glVertex2f(-5, -4);
    glColor3f(1.0, 1.0, 0.0); // warna kuning
    glVertex2f(-6, 8);
    glEnd();
    glFlush();

    // TULANG
    glBegin(GL_LINE_STRIP);   // tulang tengah
    glColor3f(0.0, 0.0, 0.0); // warna hitam
    glVertex2f(-9, 9.1);
    glVertex2i(-6, 8);
    glVertex2i(-3, 6);
    glVertex2i(3, 0);
    glVertex2i(6, -4);
    glVertex2i(9, -9);
    glVertex2i(10, -13);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 1
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-6, 8);
    glVertex2f(-7, -2);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 2
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-4.5, 7);
    glVertex2f(4, 8);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 3
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-2, 5);
    glVertex2f(-1.6, -6);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 4
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0, 3);
    glVertex2f(9, 2);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 5
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(3, 0);
    glVertex2f(4, -9);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 6
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(5, -2.5);
    glVertex2f(11, -4);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 7
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(7, -5.7);
    glVertex2f(8, -10.5);
    glEnd();
    glFlush();

    glBegin(GL_LINES); // tulang daun 8
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(8, -7.4);
    glVertex2f(10.7, -9);
    glEnd();
    glFlush();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(350, 70);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Godong");
    gluOrtho2D(-15.0, 15.0, -15.0, 15.0);
    glutDisplayFunc(daun);
    glutMainLoop();
}
