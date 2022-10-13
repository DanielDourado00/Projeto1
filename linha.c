#include "linha.h"

typedef struct linha {
    int i;              //identificador
    double x;           //coordenada x
    double y;           //coordenada y
    double x1;          //coordenada x1
    double y1;          //coordenada y1
    char corborda[20];  //cor da borda
} linha;

void criaLinha(int i, double x, double y, double x1, double y1, char corborda[]) {
    linha* l = (linha*) malloc(sizeof(linha));
    l->i = i;
    l->x = x;
    l->y = y;
    l->x1 = x1;
    l->y1 = y1;
    strcpy(l->corborda, corborda);
}

void crialinhaid(linha* l, int i) {         //cria identificador
    l->i = i;
}

void crialinhax(linha* l, double x) {       //cria coordenada x
    l->x = x;
}  

void crialinhay(linha* l, double y) {       //cria coordenada y
    l->y = y;
}   

void crialinhax1(linha* l, double x1) {     //cria coordenada x1
    l->x1 = x1;
}

void crialinhay1(linha* l, double y1) {     //cria coordenada y1
    l->y1 = y1;
}

void crialinhacorborda(linha* l, char corborda[]) {    //cria cor da borda
    strcpy(l->corborda, corborda);
}