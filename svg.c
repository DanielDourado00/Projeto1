#include "svg.h"
#include "path.h"
#include "formas.h"
#include "lista.h"

void* no;

void criarsvg(lista L) {   
    FILE *arq;
    arq = fopen("svg.svg", "w");
    fprintf(arq, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">");
    return arq;
    }

void printarSvg(lista L) {
    int i;                                                                    //identificador 
    double x, y, x1, y1, raio, h;                                            //eixo x, eixo y, x1
    char corborda[20], corprench[20], cor[20], anc[1], txto[100];
    

    for (no = inicio(L); no; getNext(1, no)) {

         switch (gettipo(no)){                                                        //gettipo pega info do geo e faz a compracao
        
        case 'c':                                                                 //circulo
            getcirculo(no, &i, &x, &y, &raio, corborda, corprench);              //pega os dados do circulo
            printCirculo(i, x, y, raio, h, corborda, corprench, no);          //imprime o circulo para conferir se esta certo
            fprintf(no, "<circle i=\"%d\" cx=\"%lf\" cy=\"%lf\" raio=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, raio, corborda, corprench);
            break;

        case 'r':                                                               //retangulo
            getretangulo(no, &i, &x, &y, &raio, &h, corborda, corprench);
            printRetangulo(i, x, y, raio, h, corborda, corprench, no);
            fprintf(no, "<rect i=\"%d\" x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, h, corborda, corprench);
            break;

        case 't':                                                               //texto
            gettxt(no, &i, &x, &y, &anc, txto, cor);                           
            printTxt(i, x, y, anc, txto, cor, no);
            fprintf(no, "<text i=\"%d\" x=\"%lf\" y=\"%lf\" font-size=\"10\" font-family=\"Verdana\" fill=\"%s\">%s</text>\n", i, x, y, cor, txto);
            break;
            
        case 'l':                                                               //linha
            getlinha(no, &i, &x, &y, &x1, &y1, cor);
            printLinha(i, x, y, x1, y1, cor, no);
            fprintf(no, "<line i=\"%d\" x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"%s\" stroke-width=\"1\"/>\n", i, x, y, x1, y1, cor);
            break;

        default:
            break;

}
    }

    /* void* aux = obterinfo(j);  */

/*     switch (gettipo(aux)){                                                        //gettipo pega info do geo e faz a compracao
        
        case 'c':                                                                 //circulo
            getcirculo(aux, &i, &x, &y, &raio, corborda, corprench);              //pega os dados do circulo
            printCirculo(i, x, y, raio, h, corborda, corprench, aux);          //imprime o circulo para conferir se esta certo
            fprintf(aux, "<circle i=\"%d\" cx=\"%lf\" cy=\"%lf\" raio=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, raio, corborda, corprench);
            break;

        case 'r':                                                               //retangulo
            getretangulo(aux, &i, &x, &y, &raio, &h, corborda, corprench);
            printRetangulo(i, x, y, raio, h, corborda, corprench, aux);
            fprintf(aux, "<rect i=\"%d\" x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", i, x, y, h, corborda, corprench);
            break;

        case 't':                                                               //texto
            gettxt(aux, &i, &x, &y, &anc, txto, cor);                           
            printTxt(i, x, y, anc, txto, cor, aux);
            fprintf(aux, "<text i=\"%d\" x=\"%lf\" y=\"%lf\" font-size=\"10\" font-family=\"Verdana\" fill=\"%s\">%s</text>\n", i, x, y, cor, txto);
            break;
            
        case 'l':                                                               //linha
            getlinha(aux, &i, &x, &y, &x1, &y1, cor);
            printLinha(i, x, y, x1, y1, cor, aux);
            fprintf(aux, "<line i=\"%d\" x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"%s\" stroke-width=\"1\"/>\n", i, x, y, x1, y1, cor);
            break;

        default:
            break;
   

}   */                                           //chama a funcao recursivamente para imprimir todos os elementos da lista 
}
