#include "geo.h"
#include "formas.h"
#include "qry.h"
#include "lista.h"

void lerGeo(FILE *arqgeo, Lista L)
{

    char tipo[300];
    char part[7][30];

    const char *tipo[8]; // vetor de strings para armazenar o conteudo do arquivo

    while (!feof(arqgeo))                                                                                                   // enquanto n chegar ao final do arquivo
    {

        fgets(tipo, 300, arqgeo); // le a linha do arquivo e armazena na string tipo                                        // le a linha do arq e armazena na string tipo

        if (strcmp(tipo, "c"))                                                                                              // compara o conteudo do tipo com a letra
        {
            sscanf(tipo, "%s %s %s %s %s %s %s", part[0], part[1], part[2], part[3], part[4], part[5], part[6]);
            TipoForma circulo = criacirculo((part[1]), (part[2]), (part[3]), (part[4]), part[5], part[6]);
            insert(L, circulo);
        }
        else if (strcmp(tipo, "r"))
        {
            sscanf(tipo, "%s %s %s %s %s %s %s", part[0], part[1], part[2], part[3], part[4], part[5], part[6], part[7]);
            TipoForma retangulo = criaretangulo((part[1]), (part[2]), (part[3]), (part[4]), (part[5]), part[6], part[7]);
            insert(L, retangulo);
        }
        else if (strcmp(tipo, "t"))
        {
            sscanf(tipo, "%s %s %s %s %s %s", part[0], part[1], part[2], part[3], part[4], part[5], part[6]);
            TipoForma texto = criatxt((part[1]), (part[2]), (part[3]), part[4], part[5], part[6]);
            insert(L, texto);
        }else if (strcmp(tipo, "l")){
            sscanf(tipo, "%s %s %s %s %s %s", part[0], part[1], part[2], part[3], part[4], part[5], part[6]);
            TipoForma linha = crialinha((part[1]), (part[2]), (part[3]), (part[4]), (part[5]), part[6]);
            insert(L, linha);
        }
    }
}
