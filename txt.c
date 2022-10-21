#include "txt.h"

char saida[]; // saida do programa

typedef struct txt{
        int i;                  //identificador
        double y;               //coordenada y
        double x;               //coordenada x
        char a[1];              //ancora 
        char txto[100];         //texto       
        char corb[20];          //cor da borda
        char corp[20];          //cor de preenchimento

} Txt;

void criatxt(int i, double x, double y, char a[], char txto[], char corb[], char corp[]) {
    Txt* t = (Txt*) calloc(1, sizeof(Txt));                                                                //aloca memoria para o txt
    t->i = i;                                                                                           //atribui o identificador
    t->x = x;                                                                                           //atribui a coordenada x
    t->y = y;                                                                                           //atribui a coordenada y
    strcpy(t->a, a);                                                                                    //atribui a ancora
    strcpy(t->txto, txto);
    strcpy(t->corb, corb);
    strcpy(t->corp, corp);
    return t;
}

void criatxti(Texto texto, int i) {                                                                          //cria identificador
    Txt* t = (Txt*) texto;
    t->i = i;
}

void criatxtx(Texto texto, double x) {                                                                       //cria coordenada x
    Txt* t = (Txt*) texto; 
    t->x = x;
}

void criatxty(Texto texto, double y) {                                                                       //cria coordenada y
    Txt* t = (Txt*) texto;
    t->y = y;
}

void criatxta(Texto texto, char a[]) {                                                                       //cria ancora
    Txt* t = (Txt*) texto; 
    strcpy(t->a, a);
}

void criatxttxto(Texto texto, char txto[]) {                                                                 //cria texto
    Txt* t = (Txt*) texto;
    strcpy(t->txto, txto);
}

void criatxtcorborda(Texto texto, char corb[]) {                                                             //cria cor da borda
    Txt* t = (Txt*) texto;
    strcpy(t->corb, corb);
}

void criatxtcorprench(Texto texto, char corp[]) {                                                            //cria cor de preenchimento
        Txt* t = (Txt*) texto;
        strcpy(t->corp, corp);
}

/* void imprimetxt(Texto texto) {                                                                                  //imprime o txt
       printf(saida, "i: %d x: %lf y: %lf a: %s txto: %s corb: %s corp: %s \n", t->i, t->x, t->y, t->a, t->txto, t->corb, t->corp);
        puts(saida); */