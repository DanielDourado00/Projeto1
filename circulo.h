#include "biblioteca.h"

#ifndef CIRCULO_H
#define CIRCULO_H

void criacirculo(int id, double x, double y, double raio,char corborda[], char corprench[]);

void criacirculoi(circulo* c, int i);

void criacirculox(circulo* c, double x);

void criacirculoy(circulo* c, double y);

void criacirculoraio(circulo* c, double r);

void criacirculocorborda(circulo* c, char corborda[]);

void criacirculocorprench(circulo* c, char corprench[]);

#endif