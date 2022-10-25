#include "biblioteca.h"

#ifndef SYSTEM_H
#define SYSTEM_H

typedef void* par;
typedef void* path;

void* tratarparametros(int argc, char* argv[]);

void cleanparameter(void* path);

#endif