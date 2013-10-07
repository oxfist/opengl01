#include <GL/gl.h>
#include <GL/glut.h>

void display () {
    glClear(GL_COLOR_BUFFER_BIT);

    glutSolidTeapot(.5);

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
