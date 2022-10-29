#include "biblioteca.h"
#include "formas.h"
#include "path.h"
#include "lista.h"
#include "system.h"
#include "geo.h"
/* #include "qry.h" */

int main(int argc, char *argv[])
{

   Lista L = createLista(-1);
   /*  void* path = criapath(); */
   parametro P = tratarparametros(argc, argv);

   
   // criar arqgeo a partit do dir de entrada
   FILE *arqgeo;
   arqgeo = fopen(getdirEntrada, "r");
   if (arqgeo == NULL)
   {
      printf("\t \n Erro ao abrir o arquivo geo \n");
   }

   lerGeo(arqgeo, L);
   cleanparameter(P);
   killLista(L);
}
