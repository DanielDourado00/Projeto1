#include "biblioteca.h"

#ifndef SYSTEM_H
#define SYSTEM_H

typedef void* parametro;
typedef void* path;

void tratarparametros(int argc, char* argv[], void* path);

void cleanparameter(path);

#endif