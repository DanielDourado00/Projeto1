#include "path.h"


/* ---------------------------------------------organizando parametros------------------------------------------------------ */

void lerparametros(int argc, char* argv[], char* dirEntrada, char* geonome,  char* dirSaida, char* qry){

int j=0;

    while(j < argc) {
        
        if (strcmp(argv[j], "-e") == 0) {                               //compara se o (parametro é = -e), se for, retorna 0 e entra no if
            ++j;                                                        //incrementa o j para pegar o proximo parametro
            dirEntrada = malloc(sizeof(char) * strlen(argv[j]));        //aloca espaço para o nome do diretorio de entrada
            sprintf(dirEntrada, "%s", argv[j]);                         //copia o nome do diretorio de entrada para a variavel
        }
        if (strcmp(argv[j], "-f") == 0) {
            ++j;                                                        //incrementa o j para pegar o proximo parametro
            geonome = malloc(sizeof(char) * strlen(argv[j]));           //aloca espaço para o nome do arquivo geo
            sprintf(geonome, "%s", argv[j]);                            //copia o nome do arquivo geo para a variavel
        }
        if (strcmp(argv[j], "-o") == 0) {
            ++j;                                                        //incrementa o j para pegar o proximo parametro
            dirSaida = malloc(sizeof(char) * strlen(argv[j]));          //aloca espaço para o nome do arquivo qry
            sprintf(dirSaida, "%s", argv[j]);                           //copia o nome do arquivo qry para a variavel
        }
        if (strcmp(argv[j], "-q") == 0) {
            ++j;                                                        //incrementa o j para pegar o proximo parametro
            qry = malloc(sizeof(char) * strlen(argv[j]));               //aloca espaço para o nome do diretorio de saida
            sprintf(qry, "%s", argv[j]);                                //copia o nome do diretorio de saida para a variavel
        }
    }
}
/* ---------------------------------------------------TRATAR PARAMETROS--------------------------------------------------- */

char *diretorio(char *dirE, char *arquivo) {                                          //função que concatena o diretorio de entrada com o nome do arquivo dirE= diretorio no qual recebe os parametros
   char *arquivofull;

    arquivofull = malloc(sizeof(char) * (strlen(dirE) + strlen(arquivo) + 1));        //aloca espaço para o nome do arquivo completo
    sprintf(arquivofull, "%s%s", dirE, arquivo);                                      //copia o nome do arquivo completo para a variavel

    if ((dirE[strlen(dirE) - 1] == '/') || (arquivo[0] == '/')) {                     //se o ultimo caracter do diretorio de entrada for diferente de '/' ou o primeiro caracter do nome do arquivo for igual a '/', entra no if
        if ((dirE[strlen(dirE) - 1] == '/') && (arquivo[0] == '/')) {                 //se o ultimo caracter do diretorio de entrada for igual a '/' e o primeiro caracter do nome do arquivo for igual a '/', entra else
           strcat(dirE, ".");                                                         //concatena o diretorio de entrada com o nome do arquivo
        }else {
           strcat(dirE, "/");
        }  
 }
        sprintf(arquivofull, "%s/%s", dirE, arquivo);                                //copia o nome do arquivo completo para a variavel arquivofull

    return arquivofull;                                                              //retorna o nome do arquivo completo
    }


