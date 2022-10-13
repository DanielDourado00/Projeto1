#include "circulo.h"

typedef struct circulo {
    int i;
    double x;
    double y;
    double raio;
    char corborda[20];
    char corprench[20];
} Circulo;

void criaCirculo(int i, double x, double y, double raio, char corborda[], char corprench[]) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));
    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;
    strcpy(c->corborda, corborda);
    strcpy(c->corprench, corprench);
    return c;
}

void criacirculoi(Circulo* c, int i) {
    c->i = i;
}

void criacirculox(Circulo* c, double x) {
    c->x = x;
}

void criacirculoy(Circulo* c, double y) {
    c->y = y;
}

void criacirculoraio(Circulo* c, double raio) {
    c->raio = raio;
}

void criacirculocorborda(Circulo* c, char corborda[]) {
    strcpy(c->corborda, corborda);
}

void criacirculocorprench(Circulo* c, char corprench[]) {
    strcpy(c->corprench, corprench);
}