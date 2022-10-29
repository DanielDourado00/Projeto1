#include "svg.h"
#include "path.h"
#include "formas.h"
#include "lista.h"

void printCirculo(int i, double x, double y, double raio, double h, char *corborda, char *corprench, void *no)
{
    printf("Circulo %d: x = %lf, y = %lf, raio = %lf, h = %lf, corborda = %s, corprench = %s\n", i, x, y, raio, h, corborda, corprench);
}
void printRetangulo(int i, double x, double y, double largura, double altura, char *corborda, char *corprench, void *no)
{
    printf("Retangulo %d: x = %lf, y = %lf, largura = %lf, altura = %lf, corborda = %s, corprench = %s\n", i, x, y, largura, altura, corborda, corprench);
}
void printTxt(int i, double x, double y, char *anc, char *txt, char *cor, void *no)
{
    printf("Texto %d: x = %lf, y = %lf, anc = %s, txt = %s, cor = %s\n", i, x, y, anc, txt, cor);
}
void printLinha(int i, double x1, double y1, double x2, double y2, char *cor, void *no)
{
    printf("Linha %d: x1 = %lf, y1 = %lf, x2 = %lf, y2 = %lf, cor = %s\n", i, x1, y1, x2, y2, cor);
}

FILE *criarsvg(char *nomeArq)
{
    FILE *arq;
    arq = fopen(nomeArq, "w");
    fprintf(arq, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\">");
    return arq;
}

void printarLista(lista L)
{
    int id;                          // identificador
    double x, y, x2, w, y2, raio, h; // eixo x, eixo y2, x2
    char caracForma, corborda[20], corprench[20], cor[20], anc[7], txto[100];

    for (void *no = getFirst(L); no; getNext(1, no))
    {
        Figura fg = get(L, no);
        caracForma = getcf(fg);
        id = getId(fg);
        x = getX(fg);
        y = getY(fg);
        raio = getRaio(fg);
        h = getH(fg);
        w = getW(fg);
        x2 = getX2(fg);
        y2 = getY2(fg);
        strcpy(corborda, getCorborda(fg));
        strcpy(corprench, getCorprench(fg));
        strcpy(cor, getCor(fg));
        strcpy(anc, getAnc(fg));
        strcpy(txto, getTxto(fg));

        switch (caracForma)
        { // gettipo pega info do geo e faz a compracao

        case 'c':                                                          // circulo
            /* getcirculo(no, &id, &x, &y, &raio, corborda, corprench); */ // pega os dados do circulo
            printCirculo(id, x, y, raio, h, corborda, corprench, no);      // imprime o circulo para conferir se esta certo
            fprintf(no, "<circle id=\"%d\" cx=\"%lf\" cy=\"%lf\" raio=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", id, x, y, raio, corborda, corprench);
            break;

        case 'r': // retangulo
            /* getretangulo(no, &id, &x, &y, &w, &h, corborda, corprench);  */
            printRetangulo(id, x, y, w, h, corborda, corprench, no);
            fprintf(no, "<rect id=\"%d\" x=\"%lf\" y=\"%lf\" width=\"%lf\" height=\"%lf\" stroke=\"%s\" stroke-width=\"1\" fill=\"%s\" fill-opacity=\"75%%\"/>\n", id, x, y, h, corborda, corprench);
            break;

        case 't': // texto
            /* gettxt(no, &id, &x, &y, anc, txto, cor); */
            printTxt(id, x, y, anc, txto, cor, no);
            fprintf(no, "<text id=\"%d\" x=\"%lf\" y=\"%lf\" font-size=\"10\" font-family=\"Verdana\" fill=\"%s\">%s</text>\n", id, x, y, cor, txto);
            break;

        case 'l': // linha
            /* getlinha(no, &id, &x, &y, &x1, &y1, cor); */
            printLinha(id, x, y, x2, y2, cor, no);
            fprintf(no, "<line id=\"%d\" x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"%s\" stroke-width=\"1\"/>\n", id, x, y, x2, y2, cor);
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


    }   */
    // chama a funcao recursivamente para imprimir todos os elementos da lista
}
