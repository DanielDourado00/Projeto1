#include "circulo.h"

typedef struct circulo {
    int i;
    double x;
    double y;
    double raio;
    char corborda[20];
    char corprench[20];
} Circulo;


void criacirculo(int i, double x, double y, double raio, char corborda[], char corprench[]) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));
    c->i = i;
    c->x = x;
    c->y = y;
    c->raio = raio;
    strcpy(c->corborda, corborda);
    strcpy(c->corprench, corprench);
    return c;
}

void criacirculoi(Circle circle, int i) {
    Circulo* c = (Circulo*) circle;
    c->i = i;
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

void criacirculocorborda(Circle circle, char corborda[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corborda, corborda);
}

void criacirculocorprench(Circle circle, char corprench[]) {
    Circulo* c = (Circulo*) circle;
    strcpy(c->corprench, corprench);
}