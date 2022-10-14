#include "circulo.h"

typedef struct circulo {
    int i;
    double x;
    double y;
    double raio;
    char corborda[20];
    char corprench[20];
} circulo;


void criacirculo(int i, double x, double y, double raio, char corborda[], char corprench[]) {
    circulo* c = (circulo*) malloc(sizeof(circulo));
    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;
    strcpy(c->corborda, corborda);
    strcpy(c->corprench, corprench);
    return c;
}

void criacirculoi(circulo* c, int i) {
    c->i = i;
}

void criacirculox(circulo* c, double x) {
    c->x = x;
}

void criacirculoy(circulo* c, double y) {
    c->y = y;
}

void criacirculoraio(circulo* c, double raio) {
    c->raio = raio;
}

void criacirculocorborda(circulo* c, char corborda[]) {
    strcpy(c->corborda, corborda);
}

void criacirculocorprench(circulo* c, char corprench[]) {
    strcpy(c->corprench, corprench);
}