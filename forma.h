#include "biblioteca.h"

#ifndef FORMA_H
#define FORMA_H

typedef void* Forma;

void* criarforma (char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc[], char txto[]);
char* geti(Forma f);
double gety(Forma F);
double getx(Forma F);
double getraio(Forma F);
double geth(Forma F);
double getw(Forma F);
double getx2(Forma F);
double gety2(Forma F);
char* getcorborda(Forma F);
char* getcorprench(Forma F);
char* getanc(Forma F);

#endif