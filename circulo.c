#include "circulo.h"

char saida[]; // saida do programa
typedef struct circulo {
    int i;
    double x;
    double y;
    double raio;
    char corb[20];
    char corp[20];
} Circulo;


void criacirculo(int i, double x, double y, double raio, char corb[], char corp[]) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));
    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;
    strcpy(c->corb, corb);
    strcpy(c->corp, corp);
    return c;
}


void criacirculoi(Circle circle, int i) {
    Circulo* c = (Circulo*) circle;
    c->i = i;
}

void getcirculoi(Circle circle) {
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

