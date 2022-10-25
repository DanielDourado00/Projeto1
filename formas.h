#include "biblioteca.h"

#ifndef FORMA_H
#define FORMA_H

typedef void* Forma;

void* criarforma (char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc[], char txto[]);
char* getI(Forma F);
double getY(Forma F);
double getX(Forma F);
double getRaio(Forma F);
double getH(Forma F);
double getW(Forma F);
double getX2(Forma F);
double getY2(Forma F);
char* getCorborda(Forma F);
char* getCorprench(Forma F);
char* getAnc(Forma F);

#endif