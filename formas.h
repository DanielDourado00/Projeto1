#include "biblioteca.h"

#ifndef FORMA_H
#define FORMA_H

typedef void TipoForma;
typedef char* Info;
/* typedef void* Shapes; */

/* Info newShape(); */
/* int tam(void* T); */

char* novaForma();
int getId(void* F);
double getY(void* F);
double getX(void* F);
double getRaio(void* F);
double getH(void* F);
double getW(void* F);
double getX2(void* F);
double getY2(void* F);
char* getCorborda(void* F);
char* getCorprench(void* F);
char* getAnc(void* F);


/* marcu */
/* char gettipo(Forma F); */

void getcirculo(void* no, int* id, double* x, double* y,double* raio, char* corborda, char* corprench);
void getretangulo(void* no, int* id, double* x, double* y, double* w, double* h, char* corborda, char* corprench);
void gettxt(void* no, int* id, double* x, double* y, char* anc, char* cor, char* txto);
void getlinha(void* no, int* id, double* x, double* y, double* x2, double* y2, char* cor);

#endif


/* void* criarforma(char c, char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc, char txto[]); */