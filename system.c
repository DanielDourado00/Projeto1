#include "system.h"
#include "lista.h"
#include "path.h"
#include "formas.h"
/* #include "svg.h" */

typedef struct parametros {                 // Estrutura que armazena os parâmetros de entrada

    char* fullpath;                 // Caminho completo do arquivo
    char* normpath;                 // Caminho normalizado   
    char* extArq;                   // extensão do arquivo
    char* path;                     // path do arquivo
    char* dirEntrada;               // diretório de entrada
    char* dirSaida;                 // diretório de saída
    char* arquivogeo;               // nome do arquivo geo
    char* geo;                      // nome do arquivo geo sem extensão
    char* qry;                      // nome do arquivo qry sem extensão
    char* dirEntradaqry;            // diretório de entrada qry
    char* arquivogeoqry;            // nome do arquivo qry
    char* dirSaidageosvg;           // diretório de saída geo svg
    char* dirSaidageoqrysvg;        // diretório de saída geo qry svg

} parametros;               

void cleanparameter(void* path){
     parametros* p = (parametros*) path;
     free(p->fullpath);
     free(p->normpath);
     free(p->extArq);
     free(p->path);
     free(p->dirEntrada);
     free(p->dirSaida);
     free(p->arquivogeo);
     free(p-> geo);
     free(p->dirEntradaqry);
     free(p->arquivogeoqry);
     free(p->qry);
     free(p->dirSaidageosvg);
     free(p->dirSaidageoqrysvg);
     free(p);
}

/* ---------------------------------------------TRATAR PARAMETROS--------------------------------------------- */

 parametro tratarparametros (int argc, char* argv[]) {

    int i;
    char *aux;
    
    parametros *P = calloc(1, sizeof(parametros));
   
    for (i = 0; i < argc; i++) { 

         if (strcmp(argv[i], "-e") == 0) {
                  i++;
                  P->dirEntrada = calloc (strlen(argv[i]), sizeof(char) +1);              // Aloca memória para o diretório de entrada
                    strcpy(P->dirEntrada, argv[i]);                                       // Diretório de entrada

         }else if (strcmp(argv[i], "-f") == 0) {
               i++;
                   P->geo = calloc (strlen(argv[i]), sizeof(char) +1);                     // Aloca memória para o nome do arquivo geo
                    strcpy(P->geo, argv[i]);                                              // Nome do arquivo geo sem extensão

         }else if (strcmp(argv[i], "-q") == 0) {
              i++;
                   P-> qry = calloc (strlen(argv[i]), sizeof(char) +1);                   // Aloca memória para o nome do arquivo qry
                    strcpy(P->qry, argv[i]);                                              // Nome do arquivo qry sem extensão

         }else if (strcmp(argv[i], "-o") == 0) {
              i++;
                   P->dirSaida = calloc (strlen(argv[i]), sizeof(char) +1);               // Aloca memoria p dir de saida
         }             strcpy(P->dirSaida, argv[i]);                                      // Diretório de saída
    printf("%s\n", argv[i]);
    }
}
/* ---------------------------------------------PARAMETROS TRATADOS--------------------------------------------- */
