#include "circulo.h"

char saida[]; // saida do programa

typedef struct circulo {

    char i[40];
    double x, y, raio;
    char corb[20], corp[20];
  
} Circulo;


void criacirculo(char i, double x, double y, double raio, char corb[], char corp[]) {
    Circulo* c = (Circulo*) calloc(1, sizeof(Circulo));
    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;
    strcpy(c->corb, "%s" corb);
    strcpy(c->corp, "%s" corp);
    return c;
}

char* getcirculoi(Circle circle) {
    Circulo* c = (Circulo*) circle;
    return c->i;
}

void criacirculox(Circle circle, double x) {
    Circulo* c = (Circulo*) circle;
    c->x = x;
}

void criacirculoy(Circle circle, double y) {
    Circulo* c = (Circulo*) circle;
    c->y = y;
}

void criacirculoraio(Circle circle, double raio) {
    Circulo* c = (Circulo*) circle;
    c->raio = raio;
}

void criacirculocorb(Circle circle, char corb[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corb, corb);
}

void criacirculocorp(Circle circle, char corp[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corp, corp);
}

void imprimecirculo(Circle circle) {
    Circulo* c = (Circulo*) circle;
    printf(saida, "i: %d x: %lf y: %lf raio: %lf corb: %s corp: %s \n", c->i, c->x, c->y, c->raio, c->corb, c->corp);
    puts (saida);
}

void atualizarX (Circle circle, double newx) {
    Circulo* c = (Circulo*) circle;
    c->x = newx;
}

void atualizarY (Circle circle, double newy) {
    Circulo* c = (Circulo*) circle;
    c->y = newy;
}

void atualizarRaio (Circle circle, double newraio) {
    Circulo* c = (Circulo*) circle;
    c->raio = newraio;
}

void atualizarCorb (Circle circle, char newcorb[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corb, newcorb);
}

void atualizarCorp (Circle circle, char newcorp[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corp, newcorp);
}
