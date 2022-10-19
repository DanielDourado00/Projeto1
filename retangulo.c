#include "retangulo.h"

typedef struct retangulo {
    int i;                     //identificador
    double x;                  //coordenada x
    double y;                  //coordenada y
    double w;                  //largura
    double h;                  //altura
    char corborda[20];         //cor da borda
    char corprench[20];        //cor de preenchimento
} Retangulo;

void criaretangulo(int i, double x, double y, double w, double h, char corborda[], char corprench[]) {
    Retangulo* r = (Retangulo*) malloc(sizeof(Retangulo));
    r->i = i;
    r->x = x;
    r->y = y;
    r->w = w;
    r->h = h;
    strcpy(r->corborda, corborda);
    strcpy(r->corprench, corprench);
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

void criaretangulocorborda(Rectangle rect, char corborda[]) {    //cria cor da borda
    Retangulo* r = (Retangulo*) rect;
    strcpy(r->corborda, corborda);
}

void criaretangulocorprench(Rectangle rect, char corprench[]) {  //cria cor de preenchimento
    Retangulo* r = (Retangulo*) rect;
    strcpy(r->corprench, corprench);
}



