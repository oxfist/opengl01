#include <GL/glut.h>

void display(void) {
    glClearColor(1,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.5, 0.0);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.0, 0.5);
    glEnd();
    /*
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();
    */

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Hola, mundo");

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
