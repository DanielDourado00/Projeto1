#include "geo.h"
#include "formas.h"
#include "qry.h"
#include "lista.h"


void lerGeo(void* l, void* P){
    
    FILE* arqgeo = openGep(P);                         //string para ler o arquivo
    const char *tipo[8];                // vetor de strings para armazenar o conteudo do arquivo
    
    while(!feof(P)){                        //enquanto não chegar no final do arquivo
        fscanf(arqgeo,"%s",tipo);             //le a linha do arquivo
       
       if (!strcmp(tipo,"c"){
        
       }


    }
}