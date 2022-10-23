#include "svg.h"
#include "circulo.h"
#include "linha.h"
#include "txt.h"
#include "path.h"
#include "retangulo.h"

void printSVG(void* aux, FILE* qrySVG) {

int i;                                                                    //identificador 
double x, y, x1, y1, raio, h;                                            //eixo x, eixo y, x1
char corborda[20], corprench[20], cor[20], anc[1], txto[100];
    

    if (!aux) {
    return;
}

if (!getremoved(aux)) {

    switch (gettipo(aux)) {
        
        case 'c':                                                                 //circulo
            getcirculo(aux, &i, &x, &y, &raio, corborda, corprench);          //pega os dados do circulo
            printCirculo(i, x, y, raio, h, corborda, corprench, qrySVG);          //imprime o circulo para conferir se esta certo
            fprintf(qrySVG, "<circle i=\"%d\" cx=\"%lf\" cy=\"%lf\" raio=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, raio, corborda, corprench);
            break;

        case 'r':                                                               //retangulo
            getretangulo(aux, &i, &x, &y, &raio, &h, corborda, corprench);
            printRetangulo(i, x, y, raio, h, corborda, corprench, qrySVG);
            fprintf(qrySVG, "<rect i=\"%d\" x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, raio, h, corborda, corprench);
            break;

        case 't':                                                               //texto
            gettxt(aux, &i, &x, &y, &anc, txto, cor);                           
            printTxt(i, x, y, anc, txto, cor, qrySVG);
            fprintf(qrySVG, "<text i=\"%d\" x=\"%lf\" y=\"%lf\" font-size=\"10\" font-family=\"Verdana\" fill=\"%s\">%s</text>\n", i, x, y, cor, txto);
            break;
            
        case 'l':                                                               //linha
            getlinha(aux, &i, &x, &y, &x1, &y1, cor);
            printLinha(i, x, y, x1, y1, cor, qrySVG);
            fprintf(qrySVG, "<line i=\"%d\" x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"%s\" stroke-width=\"1\"/>\n", i, x, y, x1, y1, cor);
            break;

        default:
            break;
    }
}
printSVG(getnext(aux), qrySVG);                                                 //chama a funcao recursivamente para imprimir todos os elementos da lista 
}

