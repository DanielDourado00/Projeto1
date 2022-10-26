#include "biblioteca.h"
#include "formas.h"
#include "path.h"
#include "lista.h"
#include "system.h"
#include "geo.h"
/* #include "qry.h" */


int main (int argc, char *argv[]) {
   
   Lista L = createLista(-1);
  /*  void* path = criapath(); */
   parametro P = tratarparametros(argc, argv);
   

   //tratar do dir do geo
   char* dirEntrada = NULL;
   char* arquivogeo = NULL;
   char* dirEntradaGeo =  NULL;
   dirEntradaGeo = (char*)calloc(1, sizeof(char) * (strlen(dirEntrada) + strlen(arquivogeo) + 2));

   //criar arqgeo a partit do dir de entrada
   FILE* arqgeo;
   arqgeo = fopen(dirEntradaGeo, "r");
   if (arqgeo == NULL) {
      printf("\t \n Erro ao abrir o arquivo geo \n");

   }

   lerGeo(arqgeo,L);
  
  
   cleanparameter(P);
   killLista(L);
    
}
