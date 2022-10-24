#include "forma.h"

typedef struct forma{

    double x, y, raio, h, w, x2, y2;
    char i[2], a[2], corborda[20], corprench[20], anc[1], txto[100]; 
}


void* criarforma(char i[], double x, double y, double raio, double h, double w, double x2, double y2, char corborda[], char corprench[], char anc[], char txto[]){
    forma* f = (forma*)calloc(1, sizeof(forma));                
    strcpy(f->i, i);                            

    f->x = x;
    f->y = y;
    f->raio = raio;
    f->h = h;
    f->w = w;
    f->x2 = x2;
    f->y2 = y2;
    
    strcpy(f->corborda, corborda);
    strcpy(f->corprench, corprench);
    strcpy(f->anc, anc);
    strcpy(f->txto, txto);
    return f;
}

char* geti(Forma F){
    forma* f = (forma*)F;
    return f->i;
}

double getx(Forma F){
    forma* f = (forma*)F;
    return f->x;
} 

double gety(Forma F){
    forma* f = (forma*)F;
    return f->y;
}

double getraio(Forma F){
    forma* f = (forma*)F;
    return f->raio;
}

double geth(Forma F){
    forma* f = (forma*)F;
    return f->h;
}

double getw(Forma F){
    forma* f = (forma*)F;
    return f->w;
}

double getx2(Forma F){
    forma* f = (forma*)F;
    return f->x2;
}

double gety2(Forma F){
    forma* f = (forma*)F;
    return f->y2;
}

char* getcorborda(Forma F){
    forma* f = (forma*)F;
    return f->corborda;
}

char* getcorprench(Forma F){
    forma* f = (forma*)F;
    return f->corprench;
}

char* getanc(Forma F){
    forma* f = (forma*)F;
    return f->anc;
}

char* gettxto(Forma F){
    forma* f = (forma*)F;
    return f->txto;
}