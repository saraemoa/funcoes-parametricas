#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

float a, b, raio;
int desenho = 0;

void Inicializa(){
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
}

void Astroide(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01) {
        float x = a * pow(cos(angulo), 3);
        float y = a * pow(sin(angulo), 3);
        glVertex2f(x, y);
    }
    glEnd();        
}

void Cardioide(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01) {
        float x = a * (1 + cos(angulo)) * cos(angulo);
        float y = a * (1 + cos(angulo)) * sin(angulo);
        glVertex2f(x, y);
    }
    glEnd();    
}

void Cicloide(float raio){
    glBegin(GL_LINE_STRIP);
    for (float angulo = -10; angulo < 10; angulo += 0.01) {
        float x = raio * (angulo - sin(angulo));
        float y = raio * (1 - cos(angulo));
        glVertex2f(x, y);
    }
    glEnd();    
}

void Circunferencia(float raio){
    glBegin(GL_LINE_LOOP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01) {
        float x = raio * cos(angulo);
        float y = raio * sin(angulo);
        glVertex2f(x, y);
    }
    glEnd();            
}

void Rosacea(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01){
        float x = cos(a * angulo) * cos(angulo);
        float y = cos(a * angulo) * sin(angulo);
        glVertex2f(x, y);
    }
    glEnd();        
}

void Elipse(float a, float b){
    glBegin(GL_LINE_LOOP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01) {
        float x = a * cos(angulo);
        float y = b * sin(angulo);
        glVertex2f(x, y);
    }
    glEnd();
}

void Espiral(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = 0; angulo < 6 * 3.14; angulo += 0.01) {
        float x = a * angulo * cos(angulo);
        float y = a * angulo * sin(angulo);
        glVertex2f(x, y);
    }
    glEnd();
}

void Hiperbole(float a, float b){
    glBegin(GL_LINE_STRIP);
    for (float angulo = 0; angulo < 2 * 3.14; angulo += 0.01) {
    	float x = a * cos(angulo) / sin(angulo);
        float y = b * sin(angulo) / cos(angulo);
        glVertex2f(x, y);
    }
    glEnd();
}

void Parabola(float a, float b){
    glBegin(GL_LINE_STRIP);
    for (float angulo = -2 * 3.14; angulo < 2 * 3.14; angulo += 0.01) {
    	float x = a * angulo;
		float y = b * pow(angulo, 2);
        glVertex2f(x, y);
    }
    glEnd();
}

void Seno(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = -10; angulo < 10; angulo += 0.01) {
        float x = sin(a * angulo);
        glVertex2f(angulo, x);
    }
    glEnd();
}

void Cosseno(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = -10; angulo < 10; angulo += 0.01) {
        float x = cos(a * angulo);
        glVertex2f(angulo, x);
    }
    glEnd();
}

void Tangente(float a){
    glBegin(GL_LINE_STRIP);
    for (float angulo = -3.14 / 2 + 0.01; angulo < 3.14 / 2 - 0.01; angulo += 0.01) {
        float x = tan(angulo);
        glVertex2f(angulo, x);
    }
    glEnd();
}

void menu(int escolha) {
    switch (escolha) {
        case 1:
        	printf("\n======== ASTROIDE ========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 1;
            break;
        case 2:
        	printf("\n======== CARDIOIDE =======\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 2;
            break;
        case 3:
        	printf("\n======== CICLOIDE ========\n");
            printf("Informe o valor do raio: ");
            scanf("%f", &raio);
            desenho = 3;
            break;
        case 4:
        	printf("\n===== CIRCUNFERENCIA =====\n");
            printf("Informe o valor do raio: ");
            scanf("%f", &raio);
            desenho = 4;
            break;
        case 5:
        	printf("\n======== ROSACEA =========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 5;
            break;
        case 6:
        	printf("\n========= ELIPSE =========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            printf("Informe o valor de b: ");
            scanf("%f", &b);
            desenho = 6;
            break;
        case 7:
        	printf("\n======== ESPIRAL =========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 7;
            break;
        case 8:
        	printf("\n======== HIPERBOLE =======\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            printf("Informe o valor de b: ");
            scanf("%f", &b);
            desenho = 8;
            break;
        case 9:
        	printf("\n======== PARABOLA ========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            printf("Informe o valor de b: ");
            scanf("%f", &b);
            desenho = 9;
            break;
        case 10:
        	printf("\n========== SENO ==========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 10;
            break;
        case 11:
        	printf("\n======== COSSENO =========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 11;
            break;
        case 12:
        	printf("\n======== TANGENTE ========\n");
            printf("Informe o valor de a: ");
            scanf("%f", &a);
            desenho = 12;
            break;
        default:
        	break;
    }
    glutPostRedisplay();  // Marca a janela atual para ser redesenhada
}

void Desenha(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    
    switch (desenho) {
        case 1:
            Astroide(a);
            break;
        case 2:
            Cardioide(a);
            break;
        case 3:
            Cicloide(raio);
            break;
        case 4:
            Circunferencia(raio);
            break;
        case 5:
            Rosacea(a);
            break;
        case 6:
            Elipse(a, b);
            break;
        case 7:
            Espiral(a);
            break;
        case 8:
            Hiperbole(a, b);
            break;
        case 9:
            Parabola(a, b);
            break;
        case 10:
            Seno(a);
            break;
        case 11:
            Cosseno(a);
            break;
        case 12:
            Tangente(a);
            break;
        default:
            break;
    }
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Gráficos das Funções Paramétricas");
    Inicializa();
    glutDisplayFunc(Desenha);

    // Criação do menu de opções
    glutCreateMenu(menu);
    glutAddMenuEntry("Astróide", 1);
    glutAddMenuEntry("Cardióide", 2);
    glutAddMenuEntry("Ciclóide", 3);
    glutAddMenuEntry("Circunferência", 4);
    glutAddMenuEntry("Rosácea", 5);
    glutAddMenuEntry("Elipse", 6);
    glutAddMenuEntry("Espiral", 7);
    glutAddMenuEntry("Hipérbole", 8);
    glutAddMenuEntry("Parábola", 9);
    glutAddMenuEntry("Seno", 10);
    glutAddMenuEntry("Cosseno", 11);
    glutAddMenuEntry("Tangente", 12);
    
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
    return 0;
}

