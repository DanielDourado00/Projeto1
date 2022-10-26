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
   
  
/*     lerGeo(L, P);*/

   cleanparameter(P);
   killLista(L);
    
}
