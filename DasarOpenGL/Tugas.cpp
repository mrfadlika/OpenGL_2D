#include <GL/glut.h>
#include <cmath> // Include the cmath library for sinf() and cosf()

// Function to draw a circle
void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i <= segments; ++i) {
        float angle = 2.0f * 3.1415926f * float(i) / float(segments);
        float dx = radius * cosf(angle); // use cosf from <cmath>
        float dy = radius * sinf(angle); // use sinf from <cmath>
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}

// Function to display the car
void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw blue rectangle (body of the car) with increased size
    glColor3f(0.0f, 0.0f, 1.0f); // Blue color
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.3f);   // Left side adjusted to -0.6
    glVertex2f(0.6f, -0.3f);    // Right side adjusted to 0.6
    glVertex2f(0.6f, 0.2f);     // Top right
    glVertex2f(-0.6f, 0.2f);    // Top left
    glEnd();

    // Draw wider yellow triangle (roof of the car) with an additional 0.2 unit width
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.45f, 0.2f);   // Adjusted to make the base wider
    glVertex2f(0.45f, 0.2f);    
    glVertex2f(0.0f, 0.55f);    // Height of the triangle
    glEnd();

    // Draw larger green circles (wheels of the car)
    glColor3f(0.0f, 1.0f, 0.0f); // Green color
    drawCircle(-0.6f, -0.34f, 0.15f, 100); // Left wheel
    drawCircle(0.6f, -0.34f, 0.15f, 100);  // Right wheel

    // Draw red trapezoid (back of the car) lowered by 0.1
    glColor3f(1.0f, 0.0f, 0.0f); // Red color
    glBegin(GL_POLYGON);
    glVertex2f(0.6f, 0.18f);   // Lowered by 0.1 unit
    glVertex2f(0.8f, 0.23f);   
    glVertex2f(0.8f, -0.08f);  
    glVertex2f(0.6f, 0.0f);   
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Car Visualization");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

