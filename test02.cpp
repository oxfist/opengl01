#include <GL/glut.h>

float rojo = 1.0, verde = 1.0, azul = 1.0;

void procesarTeclasNormales (unsigned char tecla, int x, int y) {
    if (tecla == 27)
        exit(0);
}

void procesarTeclasEspeciales(int tecla, int x, int y) {

    switch(tecla) {
        case GLUT_KEY_F1:
            rojo = 1.0;
            verde = 0.0;
            azul = 0.0;
            break;
        case GLUT_KEY_F2:
            rojo = 0.0;
            verde = 1.0;
            azul = 0.0;
            break;
        case GLUT_KEY_F3:
            rojo = 0.0;
            verde = 0.0;
            azul = 1.0;
            break;
    }
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(rojo, verde, azul);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(300, 100);
    glutCreateWindow("Hola, mundo");

    glutDisplayFunc(display);
    glutIdleFunc(display);

    glutKeyboardFunc(procesarTeclasNormales);    
    glutSpecialFunc(procesarTeclasEspeciales);

    glutMainLoop();

    return 0;
}
