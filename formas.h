#include "biblioteca.h"

#ifndef FORMA_H
#define FORMA_H

typedef void* TipoForma;
typedef void* Figura;
typedef char* Info;

/* typedef void* Shapes; */

/* Info newShape(); */
/* int tam(void* T); */

char* novaForma();
int getId(TipoForma T);
double getY(TipoForma T);
double getX(TipoForma T);
double getRaio(TipoForma T);
double getH(TipoForma T);
double getW(TipoForma T);
double getX2(TipoForma T);
double getY2(TipoForma T);
char* getCorborda(TipoForma T);
char* getCorprench(TipoForma T);
char* getAnc(TipoForma T);


/* marcu */
/* char gettipo(Forma F); */

Figura criacirculo( int* id, double* x, double* y,double* raio, char* corborda, char* corprench);                   //parametros: id, x, y, raio, corborda, corprench 6
Figura criaretangulo( int* id, double* x, double* y, double* w, double* h, char* corborda, char* corprench);        //parametros: id, x, y, w, h, corborda, corprench 7
Figura criatxt(int* id, double* x, double* y, char* anc, char* cor, char* txto);                                    //parametros: id, x, y, anc, cor, txto 6
Figura crialinha( int* id, double* x, double* y, double* x2, double* y2, char* cor);                                //parametros: id, x, y, x2, y2, cor 6

#endif


/* void* criarforma(char c, char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc, char txto[]); */