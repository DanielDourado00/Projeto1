#include "system.h"
#include "lista.h"
#include "path.h"
#include "formas.h"
/* #include "svg.h" */

typedef struct parametros
{ // Estrutura que armazena os parâmetros de entrada

     char *getfullpath;          // Caminho completo do arquivo
     char *getnormpath;          // Caminho normalizado
     char *getextArq;            // extensão do arquivo
     char *getpath;              // path do arquivo
     char *getdirEntrada;        // diretório de entrada
     char *getdirSaida;          // diretório de saída
     char *getarquivogeo;        // nome do arquivo geo
     char *getextension;            // extensão do arquivo
     char *getgeo;               // nome do arquivo geo sem extensão
     char *getqry;               // nome do arquivo qry sem extensão
     char *getdirEntradaqry;     // diretório de entrada qry
     char *getarquivogeoqry;     // nome do arquivo qry
     char *getdirSaidageosvg;    // diretório de saída geo svg
     char *getdirSaidageoqrysvg; // diretório de saída geo qry svg

} parametros;

void setfullpath(parametro P, char *fullpath);
void setnormpath(parametro P, char *normpath);
void setextArq(parametro P, char *extArq);
void setpath(parametro P, char *path);
void setdirEntrada(parametro P, char *dirEntrada);
void setdirSaida(parametro P, char *dirSaida);
void setarquivogeo(parametro P, char *arquivogeo);
void setgeo(parametro P, char *geo);
void setqry(parametro P, char *qry);
void setdirEntradaqry(parametro P, char *dirEntradaqry);
void setarquivogeoqry(parametro P, char *arquivogeoqry);
void setdirSaidageosvg(parametro P, char *dirSaidageosvg);
void setdirSaidageoqrysvg(parametro P, char *dirSaidageoqrysvg);

void cleanparameter(void *path)
{
     parametros *p = (parametros *)path;
     free(p->getfullpath);          // Caminho completo do arquivo
     free(p->getnormpath);          // Caminho normalizado
     free(p->getextArq);            // extensão do arquivo
     free(p->getpath);              // path do arquivo
     free(p->getdirEntrada);        // diretório de entrada
     free(p->getdirSaida);          // diretório de saída
     free(p->getarquivogeo);        // nome do arquivo geo
     free(p->getgeo);               // nome do arquivo geo sem extensão
     free(p->getdirEntradaqry);     // diretório de entrada qry
     free(p->getarquivogeoqry);     // nome do arquivo qry
     free(p->getqry);               // nome do arquivo qry sem extensão
     free(p->getdirSaidageosvg);    // diretório de saída geo svg
     free(p->getdirSaidageoqrysvg); // diretório de saída geo qry svg

     free(p);
}

/* ---------------------------------------------TRATAR PARAMETROS--------------------------------------------- */

parametro tratarparametros(int argc, char *argv[])
{

     bool readdirentrada = false;
     bool readgeo = false;
     bool readdirsaida = false;
     bool readqry = false;

     int i;

     parametros *P = calloc(1, sizeof(parametros));

     for (i = 1; i < argc; i++)
     {

          if (!strcmp(argv[i], "-e") == 0) // verifica se o par pe -e
          {
               i++;
               P->getdirEntrada = calloc(strlen(argv[i]) + 1, sizeof(char)); // Aloca memória para o diretório de entrada
               strcpy(P->getdirEntrada, argv[i]);                            // Diretório de entrada
               readdirentrada = true;
          }
          else if (!strcmp(argv[i], "-f") == 0)
          {
               i++;
               P->getgeo = calloc(strlen(argv[i]) + 1, sizeof(char)); // Aloca memória para o nome do arquivo geo
               strcpy(P->getgeo, argv[i]);                            // Nome do arquivo geo sem extensão
               readgeo = true;
          }
          else if (!strcmp(argv[i], "-q") == 0)
          {
               i++;
               P->getqry = calloc(strlen(argv[i]) + 1, sizeof(char)); // Aloca memória para o nome do arquivo qry
               strcpy(P->getqry, argv[i]);                            // Nome do arquivo qry sem extensão
               readqry = true;
          }
          else if (!strcmp(argv[i], "-o") == 0)
          {

               i++;
               P->getdirSaida = calloc(strlen(argv[i]) + 1, sizeof(char)); // Aloca memoria p dir de saida7
               strcpy(P->getdirSaida, argv[i]);
               readdirsaida = true;
          } // Diretório de saída
     }

     P->getfullpath = calloc(strlen(P->getdirEntrada) + 3, sizeof(char));
     normalizePath(P->getdirEntrada, P->getpath, 60);
     P->getfullpath = calloc(strlen(P->getpath) + strlen(P->getgeo) + 4, sizeof(char));
     joinFilePath(P->getpath, P->getgeo, P->getfullpath, strlen(P->getpath) + strlen(P->getgeo) + 4);
     P->getarquivogeo = calloc(strlen(P->getgeo) + 4, sizeof(char));
     P->getextension = calloc(4, sizeof(char));
     splitPath(P->getfullpath, P->getpath, P->getarquivogeo, P->getextension, strlen(P->getfullpath), strlen(P->getarquivogeo), strlen(P->getextension));
     P->getdirSaidageosvg = calloc(strlen(P->getfullpath) + 6, sizeof(char));
     P->getdirSaidageoqrysvg = calloc(6, sizeof(char));
     strcpy (P->getdirSaidageoqrysvg, ".svg");
     joinAll(P->getdirSaida, P->getgeo, P->getdirSaidageosvg, P->getdirSaidageosvg, strlen(P->getpath) + strlen(P->getgeo) + 4);

     if (readdirentrada && readgeo)
     {
          char *bedgeo = calloc(strlen(P->getdirEntrada) + strlen(P->getgeo) + 1, sizeof(char)); // Aloca memória para o nome do arquivo geo com extensão
          strcpy(bedgeo, P->getdirEntrada);                                                      // Diretório de entrada
          strcat(bedgeo, P->getgeo);
          setarquivogeo(P, bedgeo);
     }

     if (readdirentrada && readqry)
     {
          char *bedqry = calloc(strlen(P->getdirEntrada) * strlen(P->getqry) + 1, sizeof(char));
          strcpy(bedqry, P->getdirEntrada);
          strcat(bedqry, P->getqry);
          setdirEntradaqry(P, bedqry);
     }

     if (readdirsaida && readgeo)
     {
          char *getdirSaidageosvg = calloc(strlen(P->getdirSaida) + strlen(P->getgeo) + 5, sizeof(char));
          strcpy(getdirSaidageosvg, P->getdirSaida);
          strcat(getdirSaidageosvg, P->getgeo);
          setdirSaidageosvg(P, getdirSaidageosvg);
     }
     if (readdirsaida && readqry)
     {
          char *getdirSaidageoqrysvg = calloc(strlen(P->getdirSaida) + strlen(P->getqry) + strlen(P->getgeo) + 6, sizeof(char));
          char *getdirSaidageotxt = calloc(strlen(P->getdirSaida) + strlen(P->getgeo) + strlen(P->getqry) + 6, sizeof(char));
          strcpy(getdirSaidageoqrysvg, P->getdirSaida);
          strcat(getdirSaidageoqrysvg, P->getgeo);
          strcat(getdirSaidageoqrysvg, "_");
          strcat(getdirSaidageoqrysvg, P->getqry);
          strcat(getdirSaidageotxt, P->getdirSaidageoqrysvg);

          setdirSaidageoqrysvg(P, getdirSaidageoqrysvg);
          setdirSaidageotxt(P, getdirSaidageotxt);
     }
     /* ---------------------------------------------PARAMETROS TRATADOS--------------------------------------------- */

     /* --------------------------------------------------PRINTA GEO------------------------------------------------- */

     /*      void printgeo(void *lista, void *path)         // preciso qry
          {
               int id;
               double x, x2, y, y2, r, w, h;
               char tipo[2], getCorborda[20], getCorprench[20], cor[20], a[1], txto[100];

               void *novaforma;
               void *novono;

               FILE *geo = fopen(getdirSaidaGeoSvg(path), "r");

               if (geo)
               {
                    if (svg){
                         while (!feof(geo)){
                              fscanf(geo, "%s", tipo);
                              if (!strcmp(tipo, "c")){
                                   v =

                              }
                         }
                    }
               }
          } */