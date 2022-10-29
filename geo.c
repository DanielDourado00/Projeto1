#include "geo.h"
#include "formas.h"
#include "qry.h"
#include "lista.h"

void lerGeo(FILE *arqgeo, Lista L)
{
    int id;
    double x, y, x2, w, y2, r, h;
    char tipo, corborda[20], corprench[20], a, txto[100];

    while (!feof(arqgeo)) // enquanto n chegar ao final do arquivo
    {

        fscanf(arqgeo, "%c", tipo); // le a linha do arq e armazena na string tipo

            if (tipo == 'c') // compara o conteudo do tipo com a letra
        {
            fscanf(arqgeo, "%d %lf %lf %lf %s %s", &id, &x, &y, &r, corborda, corprench);
            TipoForma circulo = criacirculo(id, x, y, r, corborda, corprench);
            insert(L, circulo);
        }
        else if (tipo == 'r')
        {
            fscanf(arqgeo, "%d %lf %lf %lf %lf %s %s", &id, &x, &y, &w, &h, corborda, corprench);
            TipoForma retangulo = criaretangulo(id, x, y, w, h, corborda, corprench);
            insert(L, retangulo);
        }
        else if (tipo == 't')
        {
            fscanf(arqgeo, "%d %lf %lf %s %s", &id, &x, &y, corborda, corprench, txto);
            TipoForma texto = criatxt(id, x, y, corborda, corprench, a, txto);
            insert(L, texto);
        }
        else if (tipo == 'l')
        {
            fscanf(arqgeo, "%d %lf %lf %lf %lf %s", &id, &x, &y, &x2, &y2, corborda);
            TipoForma linha = crialinha(id, x, y, x2, y2, corborda);
            insert(L, linha);
        }
        
        
    }
}
