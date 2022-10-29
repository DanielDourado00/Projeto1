#include "biblioteca.h"

#ifndef SYSTEM_H
#define SYSTEM_H

/* typedef void* parametro; */

typedef void* parametro;

void* tratarparametros(int argc, char* argv[]);     //trata os parametros de entrada

void cleanparameter(parametro);                     //limpa a estrutura de parametros

void printgeo(void* lista, void* path);             //imprime o arquivo geo

char* getdirSaidaGeoSvg(void* aptoget);

char* getdirEntrada = NULL;

#endif