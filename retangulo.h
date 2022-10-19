#include "biblioteca.h"

#ifndef RETANGULO_H
#define RETANGULO_H

typedef void* Rectangle;

void criaretangulo(int i, double x, double y, double w, double h, char corborda[], char corprench[]);

void criaretanguloi(Rectangle r, int i);

void criaretangulox(Rectangle r, double x);

void criaretanguloy(Rectangle r, double y);

void criaretangulow(Rectangle r, double w);

void criaretanguloh(Rectangle r, double h);

void criaretangulocorborda(Rectangle r, char corborda[]);

void criaretangulocorprench(Rectangle r, char corprench[]);

#endif