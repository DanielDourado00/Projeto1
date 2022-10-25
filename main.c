#include "biblioteca.h"
#include "formas.h"
#include "path.h"
#include "lista.h"
#include "system.h"
/* #include "geo.h" */
/* #include "qry.h" */


int main (int argc, char *argv[]) {
   

   Lista L = createLista(-1);
   tratarparametros(argc, argv);

   cleanparameter(path);
   killLista(L);
    
}
