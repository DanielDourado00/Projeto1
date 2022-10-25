#include "biblioteca.h"

#ifndef SYSTEM_H
#define SYSTEM_H

/* typedef void* parametro; */

typedef void* parametro;

void* tratarparametros(int argc, char* argv[]);

void cleanparameter(parametro);

#endif