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
    char* nomegeo;                  // nome do arquivo geo sem extensão
    char* dirEntradaqry;            // diretório de entrada qry
    char* arquivogeoqry;            // nome do arquivo qry
    char* nomeqry;                  // nome do arquivo qry sem extensão
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
     free(p->nomegeo);
     free(p->dirEntradaqry);
     free(p->arquivogeoqry);
     free(p->nomeqry);
     free(p->dirSaidageosvg);
     free(p->dirSaidageoqrysvg);
     free(p);
}

/* ---------------------------------------------TRATAR PARAMETROS--------------------------------------------- */

void* tratarparametros (int argc, char *argv[]) {
    int i;
    char *aux;
    
    parametros *P = calloc(1, sizeof(parametros));
   
    for (i = 0; i < argc; i++) { 

         if (strcmp(argv[i], "-e") == 0) {
                  i++;
                  diretorios->diretorioEntrada = calloc (strlen(argv[i]), sizeof(char) +1);

         }else if (strcmp(argv[i], "-f") == 0) {
               i++;
                   diretorios->nomeGeo = calloc (strlen(argv[i]), sizeof(char) +1);

         }else if (strcmp(argv[i], "-q") == 0) {
              i++;
                   diretorios->nomeQry = calloc (strlen(argv[i]), sizeof(char) +1);

         }else if (strcmp(argv[i], "-o") == 0) {
              i++;
                   diretorios->diretorioSaida = calloc (strlen(argv[i]), sizeof(char) +1);
         }
    printf("%s\n", argv[i]);
    }
}