#include "retangulo.h"

typedef struct retangulo {
    int i;                     //identificador
    double x;                  //coordenada x
    double y;                  //coordenada y
    double w;                  //largura
    double h;                  //altura
    char corborda[20];         //cor da borda
    char corprench[20];        //cor de preenchimento
} retangulo;

void criaretangulo(int i, double x, double y, double w, double h, char corborda[], char corprench[]) {
    retangulo* r = (retangulo*) malloc(sizeof(retangulo));
    r->i = i;
    r->x = x;
    r->y = y;
    r->w = w;
    r->h = h;
    strcpy(r->corborda, corborda);
    strcpy(r->corprench, corprench);
}

void criaretanguloi(retangulo* r, int i) {         //cria identificador
    r->i = i;
}

void criaretangulox(retangulo* r, double x) {       //cria coordenada x
    r->x = x;
}

void criaretanguloy(retangulo* r, double y) {       //cria coordenada y
    r->y = y;
}

void criaretangulow(retangulo* r, double w) {       //cria largura
    r->w = w;
}

void criaretanguloh(retangulo* r, double h) {       //cria altura
    r->h = h;
}

void criaretangulocorborda(retangulo* r, char corborda[]) {    //cria cor da borda
    strcpy(r->corborda, corborda);
}

void criaretangulocorprench(retangulo* r, char corprench[]) {  //cria cor de preenchimento
    strcpy(r->corprench, corprench);
}



