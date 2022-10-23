#include "biblioteca.h"

#ifndef TXT_H
#define TXT_H

typedef void* Texto;

void criatxt(int i, double x, double y, char a[], char txto[], char corb[], char corp[]);

void criatxti(Texto texto, int i);

void criatxtx(Texto texto, double x);

void criatxty(Texto texto, double y);

void criatxta(Texto texto, char a[]);

void criatxttxto(Texto texto, char txto[]);

void criatxtcorborda(Texto texto, char corb[]);

void criatxtcorprench(Texto texto, char corp[]);

/* void imprimetxt(Texto texto); */

#endif