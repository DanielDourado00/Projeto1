#include "biblioteca.h"

#ifndef CIRCULO_H
#define CIRCULO_H

typedef void* Circle;

void criacirculo(int i, double x, double y, double raio,char corborda[], char corprench[]);

void criacirculoi(Circle c, int i);

void criacirculox(Circle c, double x);

void criacirculoy(Circle c, double y);

void criacirculoraio(Circle c, double r);

void criacirculocorborda(Circle c, char corborda[]);

void criacirculocorprench(Circle c, char corprench[]);

void imprimecirculo(Circle circle);

#endif