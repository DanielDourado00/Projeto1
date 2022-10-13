#include "biblioteca.h"

#ifndef RETANGULO_H
#define RETANGULO_H

void criaretangulo(int i, double x, double y, double w, double h, char corborda[], char corprench[]);

void criaretanguloi(retangulo* r, int i);

void criaretangulox(retangulo* r, double x);

void criaretanguloy(retangulo* r, double y);

void criaretangulow(retangulo* r, double w);

void criaretanguloh(retangulo* r, double h);

void criaretangulocorborda(retangulo* r, char corborda[]);

void criaretangulocorprench(retangulo* r, char corprench[]);

#endif