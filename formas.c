#include "formas.h"


typedef struct forma
{
    int cf; // caracter da forma
    int id;
    double x, y, raio, h, w, x2, y2;
    char c, corborda[20], corprench[20], anc[7], txto[100], cor; // int id
} forma;

Figura criacirculo(int id, double x, double y, double raio, char *corborda, char *corprench)
{
    forma *f = (forma *)calloc(1, sizeof(forma));
    f->cf = CIRCULO;
    f->id = id;
    f->x = x;
    f->y = y;
    f->raio = raio;
    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    return f;
}

Figura criaretangulo(int id, double x, double y, double w, double h, char *corborda, char *corprench)
{
    forma *f = (forma *)calloc(1, sizeof(forma));
    f->cf = RETANGULO;
    f->id = id;
    f->x = x;
    f->y = y;
    f->w = w;
    f->h = h;
    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    return f;
}

Figura criatxt(int id, double x, double y, char *corborda, char* corprench, char a, char *txto)
{
    forma *f = (forma *)calloc(1, sizeof(forma));
    f->cf = TEXTO;
    f->id = id;
    f->x = x;
    f->y = y;
    if ( a == 'i')
    {
        strcpy(f->anc, "start");
    }
    else if ( a == 'm')
    {
        strcpy(f->anc, "middle");
    }
    else if ( a == 'f')
    {
        strcpy(f->anc, "end");
    }
    
    strcpy(f->corborda, corborda);
    strcpy(f->txto, txto);
    return f;
}

Figura crialinha(int id, double x, double y, double x2, double y2, char *cor)
{
    forma *f = (forma *)calloc(1, sizeof(forma));
    f->cf = LINHA;
    f->id = id;
    f->x = x;
    f->y = y;
    f->x2 = x2;
    f->y2 = y2;
    strcpy(f->corborda, cor);
    return f;
}

char getcf(TipoForma T)
{
    forma *f = (forma *)T;
    return f->c;
}

int getId(TipoForma T)
{
    forma *f = (forma *)T;
    return f->id;
}

double getX(TipoForma T)
{
    forma *f = (forma *)T;
    return f->x;
}

double getY(TipoForma T)
{
    forma *f = (forma *)T;
    return f->y;
}

double getRaio(TipoForma T)
{
    forma *f = (forma *)T;
    return f->raio;
}

double getH(TipoForma T)
{
    forma *f = (forma *)T;
    return f->h;
}

double getW(TipoForma T)
{
    forma *f = (forma *)T;
    return f->w;
}

double getX2(TipoForma T)
{
    forma *f = (forma *)T;
    return f->x2;
}

double getY2(TipoForma T)
{
    forma *f = (forma *)T;
    return f->y2;
}

char *getCorborda(TipoForma T)
{
    forma *f = (forma *)T;
    return f->corborda;
}

char *getCorprench(TipoForma T)
{
    forma *f = (forma *)T;
    return f->corprench;
}

char *getCor(TipoForma T){
    forma *f = (forma *)T;
    return f->cor;
}

char *getAnc(TipoForma T)
{
    forma *f = (forma *)T;
    return f->anc;
}

char *getTxto(TipoForma T)
{
    forma *f = (forma *)T;
    return f->txto;
}

/* void* criarforma(char c, char id[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc, char txto[]){
    forma* f = calloc(1, sizeof(forma));

    f->id = id;
    f->c = c;
    f->x = x;
    f->y = y;
    f->raio = raio;
    f->h = h;
    f->w = w;
    f->x2 = x2;
    f->y2 = y2;

    if (anc == 'id'){
        strcpy(f->anc, "start");
    }else if (anc == 'm'){
        strcpy(f->anc, "middle");
    }else if (anc == 'f'){
        strcpy(f->anc, "end");
    }

    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    strcpy(f->anc, anc);
    strcpy(f->txto, txto);
    return f;
} */