#include "biblioteca.h"

#ifndef SVG_H
#define SVG_H

typedef void* lista;

FILE* criarsvg(char* nomeArq);
void printarSvg(lista L);
void printCirculo(int i, double x, double y, double raio, double h, char* corborda, char* corprench, void* no);
void printRetangulo(int i, double x, double y, double largura, double altura, char* corborda, char* corprench, void* no);
void printTxt(int i, double x, double y, char* anc, char* txt, char* cor, void* no);
void printLinha(int i, double x1, double y1, double x2, double y2, char* cor, void* no);

#endif