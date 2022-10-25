#include "biblioteca.h"
#include "formas.h"
#include "path.h"
#include "lista.h"
#include "system.h"
/* #include "geo.h" */
/* #include "qry.h" */


int main (int argc, char *argv[]) {
   

   Lista L = createLista(-1);
   void* path = criapath();
   tratarparametros(argc, argv, path);

   cleanparameter(path);
   killLista(L);
    
}
