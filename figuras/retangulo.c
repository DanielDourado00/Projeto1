#include "retangulo.h"

typedef struct retangulo {
    int i;                     //identificador
    double x;                  //coordenada x
    double y;                  //coordenada y
    double w;                  //largura
    double h;                  //altura
    char corb[20];         //cor da borda
    char corp[20];        //cor de preenchimento
} Retangulo;

void criaretangulo(int i, double x, double y, double w, double h, char corb[], char corp[]) {
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    r->i = i;
    r->x = x;
    r->y = y;
    r->w = w;
    r->h = h;
    strcpy(r->corb, corb);
    strcpy(r->corp, corp);
}

void criaretanguloi(Rectangle rect, int i) {         //cria identificador
    Retangulo* r = (Retangulo*) rect;
    r->i = i;
}

void criaretangulox(Rectangle rect, double x) {       //cria coordenada x
    Retangulo* r = (Retangulo*) rect;
    r->x = x;
}

void criaretanguloy(Rectangle rect, double y) {       //cria coordenada y
    Retangulo* r = (Retangulo*) rect;
    r->y = y;
}

void criaretangulow(Rectangle rect, double w) {       //cria largura
    Retangulo* r = (Retangulo*) rect;
    r->w = w;
}

void criaretanguloh(Rectangle rect, double h) {       //cria altura
    Retangulo* r = (Retangulo*) rect;
    r->h = h;
}

void criaretangulocorb(Rectangle rect, char corb[]) {    //cria cor da borda
    Retangulo* r = (Retangulo*) rect;
    strcpy(r->corb, corb);
}

void criaretangulocorp(Rectangle rect, char corp[]) {  //cria cor de preenchimento
    Retangulo* r = (Retangulo*) rect;
    strcpy(r->corp, corp);
}



