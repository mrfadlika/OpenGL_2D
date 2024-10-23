#include <GL/glut.h>

void display()
{
    glClear( GL_COLOR_BUFFER_BIT );

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glColor3f( 0, 0, 1 );
    glBegin(GL_QUADS);//start drawing a line loop
      glVertex2f(-0.5,0.5);//left of window
      glVertex2f(0.5,0.5);//bottom of window
      glVertex2f(0.5,-0.5);//right of window
      glVertex2f(-0.5,-0.5);//top of window
    glEnd();//end drawing of line loop

    glutSwapBuffers();
}

int main( int argc, char **argv )
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_RGBA | GLUT_DOUBLE );
    glutInitWindowSize( 400, 400 );
    glutCreateWindow( "QUAD" );
    glutDisplayFunc( display );
    glutMainLoop();
    return 0;
}
