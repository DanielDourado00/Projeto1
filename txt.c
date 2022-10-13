#include "txt.h"

typedef struct txt{
        int i;              //identificador
        double y;           //coordenada y
        double x;           //coordenada x
        char anc[1];         //ancora 
        char txto[100];      //texto       
        char corborda[20];  //cor da borda
        char corprench[20]; //cor de preenchimento

} txt;