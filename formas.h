#include "biblioteca.h"

#ifndef FORMA_H
#define FORMA_H

typedef void* TipoForma;
typedef void* Figura;
typedef char* Info;

/* typedef void* Shapes; */

/* Info newShape(); */
/* int tam(void* T); */
/* char* novaForma(); */


/* obetem as infor das forma */

char getcf(TipoForma T);                    //caracter da forma
int getId(TipoForma T);                     //id da forma
double getY(TipoForma T);                   //y da forma
double getX(TipoForma T);                   //x da forma
double getRaio(TipoForma T);                //raio da forma
double getH(TipoForma T);                   //altura da forma
double getW(TipoForma T);                    //largura da forma
double getX2(TipoForma T);                  //x2 da forma
double getY2(TipoForma T);                  //y2 da forma
char* getCorborda(TipoForma T);             //cor da borda da forma
char* getCorprench(TipoForma T);            //cor de preenchimento da forma
char* getAnc(TipoForma T);                  //ancora da forma
char* getCor(TipoForma T);                  //cor da forma
char* getTxto(TipoForma T);                  //texto da forma


/* marcu */
/* char gettipo(Forma F); */


/* cria a forma com as informacoes obtidas nos gets */

enum FORMAS
{
    CIRCULO,
    RETANGULO,
    TEXTO,
    LINHA
};

Figura criacirculo(int id, double x, double y, double raio, char *corborda, char *corprench);
Figura criaretangulo(int id, double x, double y, double w, double h, char *corborda, char *corprench);
Figura criatxt(int id, double x, double y, char *corborda, char* corprench, char a, char *txto);
Figura crialinha(int id, double x, double y, double x2, double y2, char *corborda);

#endif


/* void* criarforma(char c, char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc, char txto[]); */