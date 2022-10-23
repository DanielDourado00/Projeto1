#include "circulo.h"
#include "retangulo.h"
#include "txt.h"
#include "svg.h"
#include "linha.h"
#include "path.h"


///////////////////////////////////////////PARAMETROS///////////////////////////////////////////
//le os parametros do programa

int main (int argc, char *argv[]) {

    int i;
    for (i = 0; i < argc; i++) {    //imprime os parametros
        printf("%s\n", argv[i]);


//receber diretorio de entrada
//receber nome do geo
//receber nome do qry
//receber nome dir de saida
//receber tipo de lista (ser dinâmica ou simplesmente encadeada.)

char* dirEntrada;     //diretorio de entrada
char* geonome;        //nome do arquivo geo
char* qrynome;        //nome do arquivo qry
char* dirSaida;       //diretorio de saida
char* tlista;         //tipo de lista

void lerparametros(argc,argv, dirEntrada, geonome, dirSaida, qry);  //função que lê os parametros(vai para path.c)

void* lista = crialista();  //cria a lista de acordo com o tipo de lista

    }
}



