#include "formas.h"

typedef struct forma{
    char tipo;
    int id;
    double x, y, raio, h, w, x2, y2;
    char c, corborda[20], corprench[20], anc[7], txto[100];     //int id
}forma;



TipoForma getcirculo(void* no, int* id, double* x, double* y,double* raio, char* corborda, char* corprench){
forma *f = (forma*)calloc(1, sizeof(forma));
    f->tipo = 'c';	
    f->id = *id;
    f->x = *x;
    f->y = *y;
    f->raio = *raio;
    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    return f;
}

TipoForma getretangulo(void* no, int* id, double* x, double* y, double* w, double* h, char* corborda, char* corprench){
forma *f = (forma*)calloc(1, sizeof(forma));
    f->tipo = 'r';	
    f->id = *id;
    f->x = *x;
    f->y = *y;
    f->w = *w;
    f->h = *h;
    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    return f;
}

TipoForma gettxt(void* no, int* id, double* x, double* y, char* anc, char* cor, char* txto){
forma *f = (forma*)calloc(1, sizeof(forma));
    f->tipo = 't';	
    f->id = *id;
    f->x = *x;
    f->y = *y;
    strcpy(f->anc, anc);
    strcpy(f->corborda, cor);
    strcpy(f->txto, txto);
    return f;
}

TipoForma getlinha(void* no, int* id, double* x, double* y, double* x2, double* y2, char* cor){
forma *f = (forma*)calloc(1, sizeof(forma));
    f->tipo = 'l';	
    f->id = *id;
    f->x = *x;
    f->y = *y;
    f->x2 = *x2;
    f->y2 = *y2;
    strcpy(f->corborda, cor);
    return f;
}


char gettipo(void* F){
    forma* f = (forma*) F;
    return f->c;
}

char* getI(void* F){
    forma* f = (forma*)F;
    return f->id;
}

double getX(void* F){
    forma* f = (forma*)F;
    return f->x;
} 

double getY(void* F){
    forma* f = (forma*)F;
    return f->y;
}

double getRaio(void* F){
    forma* f = (forma*)F;
    return f->raio;
}

double getH(void* F){
    forma* f = (forma*)F;
    return f->h;
}

double getW(void* F){
    forma* f = (forma*)F;
    return f->w;
}

double getX2(void* F){
    forma* f = (forma*)F;
    return f->x2;
}

double getY2(void* F){
    forma* f = (forma*)F;
    return f->y2;
}

char* getCorborda(void* F){
    forma* f = (forma*)F;
    return f->corborda;
}

char* getCorprench(void* F){
    forma* f = (forma*)F;
    return f->corprench;
}

char* getAnc(void* F){
    forma* f = (forma*)F;
    return f->anc;
}

char* getTxto(void* F){
    forma* f = (forma*)F;
    return f->txto;
} 


void getcirculo(void* no, int* id, double* x, double* y,double* raio, char* corborda, char* corprench){
    forma* f = (forma*)no;
    *id = atoi(f->id);
    *x = f->x;
    *y = f->y;
    *raio = f->raio;
    strcpy(corborda, f->corborda);
    strcpy(corprench, f->corprench);
}


void getretangulo(void* no, int* id, double* x, double* y, double* w, double* h, char* corborda, char* corprench){
    forma* f = (forma*)no;
    *id = atoi(f->id);
    *x = f->x;
    *y = f->y;
    *w = f->w;
    *h = f->h;
    strcpy(corborda, f->corborda);
    strcpy(corprench, f->corprench);
}
void gettxt(void* no, int* id, double* x, double* y, char* anc, char* cor, char* txto){
    forma* f = (forma*)no;
    *id = atoi(f->id);
    *x = f->x;
    *y = f->y;
    strcpy(anc, f->anc);
    strcpy(cor, f->corborda);
    strcpy(txto, f->txto);
}
void getlinha(void* no, int* id, double* x, double* y, double* x2, double* y2, char* cor){
    forma* f = (forma*)no;
    *id = atoi(f->id);
    *x = f->x;
    *y = f->y;
    *x2 = f->x2;
    *y2 = f->y2;
    strcpy(cor, f->corborda);
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