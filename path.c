//paremetros
#include "path.h"

void lerparametros(int argc, char* argv[], char* dirEntrada, char* geonome,  char* dirSaida, char* tlista);

int i=0;

        while(i < argc) {


        if (strcmp(argv[i], "-e") == 0) {                           //compara se o (parametro é = -e), se for, retorna 0 e entra no if
            i++                                                     //incrementa o i para pegar o proximo parametro
            dirEntrada = malloc(sizeof(char) * strlen(argv[i]));    //aloca espaço para o nome do diretorio de entrada
        }
        if (strcmp(argv[i], "-f") == 0) {
            i++                                                     //incrementa o i para pegar o proximo parametro
            geonome = malloc(sizeof(char) * strlen(argv[i]));       //aloca espaço para o nome do arquivo geo
        }
        if (strcmp(argv[i], "-o") == 0) {
            i++                                                     //incrementa o i para pegar o proximo parametro
            dirSaida = malloc(sizeof(char) * strlen(argv[i]));       //aloca espaço para o nome do arquivo qry
        }
        if (strcmp(argv[i], "-q") == 0) {
            i++                                                      //incrementa o i para pegar o proximo parametro
            tlista = malloc(sizeof(char) * strlen(argv[i]));         //aloca espaço para o nome do diretorio de saida
        }
    }

