#include <stdlib.h>
#include <gl/glut.h>

int x=0, y=0;
void Draw()
{
   glBegin(GL_TRIANGLES);
   glClear(GL_COLOR_BUFFER_BIT);
   glVertex2i(-50, 100);
   glColor3f(0,0,1);
   glVertex2i(50, 100);
   glColor3f(0,1,0);
   glVertex2i(0, 0);
   glColor3f(0,0,1);
   glVertex2i(0, 0);
   glVertex2i(-50, -100);
   glVertex2i(50, -100);
   glEnd();
   glFlush();
}
void display(void)
{
   glClear(GL_COLOR_BUFFER_BIT);
   glPushMatrix();
   glRotatef( x, 0, 0, 1);
   Draw();
   glPopMatrix();
   glPushMatrix();
   glRotatef( y, 0, 0, 1);
   Draw();
   glPopMatrix();
   glFlush();

}

void timer(int value)
{
   //tuliskan varibel yang berubah nilainya disini
   x +=15;
   y -=15;
   glutPostRedisplay();
   glutTimerFunc(500,timer,10);
}
int main(int argc, char **argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
   glutInitWindowPosition(100,100);
   glutInitWindowSize(400,400);

   glutCreateWindow("baing-baling");
   gluOrtho2D(-320.,320.,-320.,320.);
   glutDisplayFunc(display);
   glutTimerFunc(500, timer, 10);
   glutMainLoop();
}
