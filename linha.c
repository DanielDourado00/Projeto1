#include "linha.h"

typedef struct linha {
    int i;              //identificador
    double x;           //coordenada x
    double y;           //coordenada y
    double x1;          //coordenada x1
    double y1;          //coordenada y1
    char corb[20];  //cor da borda
} Linha;

Line criaLinha(int i, double x, double y, double x1, double y1, char corb[]) {
    Linha* l = (Linha*) malloc(sizeof(Linha));
    l->i = i;
    l->x = x;
    l->y = y;
    l->x1 = x1;
    l->y1 = y1;
    strcpy(l->corb, corb);

    return l;
}

void crialinhaid(Line line, int i) {         //cria identificador
    Linha* l = (Linha*) line;
    l->i = i;
}

void crialinhax(Line line, double x) {       //cria coordenada x
    Linha* l = (Linha*) line;
    l->x = x;
}  

void crialinhay(Line line, double y) {       //cria coordenada y
    Linha* l = (Linha*) line;
    l->y = y;
}   

void crialinhax1(Line line, double x1) {     //cria coordenada x1
    Linha* l = (Linha*) line;
    l->x1 = x1;
}

void crialinhay1(Line line, double y1) {     //cria coordenada y1
    Linha* l = (Linha*) line;
    l->y1 = y1;
}

void crialinhacorborda(Line line, char corb[]) {    //cria cor da borda
    Linha* l = (Linha*) line;
    strcpy(l->corb, corb);
}